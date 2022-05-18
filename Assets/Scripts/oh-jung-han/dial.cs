using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class Dial : MonoBehaviour
{
    public static Dial instance; 

    public bool once;
    public bool clear = false;
    public bool clearCharger = false;
    public bool clearInst = false;
    public bool clearChargerInst = false;

    [SerializeField] private Image dialimg;
    [SerializeField] private Image dialimg_back;
    [SerializeField] private Image[] dialnum1 = new Image[4];
    [SerializeField] private Image[] dialnum2 = new Image[5];
    [SerializeField] private Text dialtext;
    [SerializeField] private Text thumbtext;
    [SerializeField] private Text checktext;
    [SerializeField] private Text indextext;
    [SerializeField] private Text lockerPWtext;
    [SerializeField] private Text chargerPWtext;
    [SerializeField] private Text inputtext;

    private int degree = 0;
    private int check = 0;
    private int index = 0;
    private bool lockerFlag = true;
    private bool chargerFlag = false;
    private bool dialNumFlag = false;
    private bool flagCheck = true;
    private int[] lockerPW = new int[5] { 300, 30, 60, 240, -1 };
    private int[] chargerPW = new int[5] { 150, 270, 90, 270, 330 };
    private int[] dialInput = new int[5] { -1, -1, -1, -1, -1 };

    private void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        dialimg.enabled = false;
        dialimg_back.enabled = false;
        once = true;
        checktext.text = "NOPE";
        for (int i = 0; i < 4; i++)
        {
            dialnum1[i].enabled = false;
        }
        for (int i = 0; i < 5; i++)
        {
            dialnum2[i].enabled = false;
        }
    }

    // Update is called once per frame
    void Update()
    {
        //DialCheck();
    }

    public void DDDial()
    {
        if (once == false)
            return;
        StartCoroutine(DDial());
        once = false;
    }

    IEnumerator DDial()
    {
        while (true)
        {
            if(dialNumFlag){
                yield return new WaitForSeconds(3.0f);
                for (int i = 0; i < 4; i++)
                {
                    dialnum1[i].enabled = false;
                }
                for (int i = 0; i < 5; i++)
                {
                    dialnum2[i].enabled = false;
                }
                dialimg.enabled = false;
                dialimg_back.enabled = false;
                dialNumFlag = false;
                if(clearCharger) {
                //if(clear == true && clearCharger == true){
                    //clearChargerInst = true;
                    break;
                }
                else if (clear == true){
                    //clearInst = true;
                    break;
                }
            }
            DialCheck();
            yield return new WaitForSeconds(0.65f);
        }
        //if (clear == true && clearCharger == true)
        if (clearCharger == true)
        {
            clearChargerInst = true;
        }
        else if (clear == true)
        {
            clearInst = true;
            initArray(dialInput);
        }
    }

    public bool DialCheck()
    {
        if (HandTracking.instance.IsFoldFinger(false, false, true, true, true)) //start with thumb, index finger
        {
            dialimg.enabled = true;
            dialimg_back.enabled = true;

            if (lockerFlag)
            {
                if(flagCheck){
                    for(int i = 0; i < 4; i++)
                    {
                        dialnum1[i].transform.position = new Vector2(0.5f * Screen.width, 0.3f * Screen.height);
                    }
                    flagCheck = false;
                }
                
            }
            else if (chargerFlag)
            {
                if(flagCheck){
                    for(int i = 0; 5 < 4; i++)
                    {
                        dialnum2[i].transform.position = new Vector2(0.5f * Screen.width, 0.3f * Screen.height);
                    }
                    flagCheck = false;
                }
                
            }
            //thumbtext.text = "finger on";
            //clear = false;
            //return false;
        }
        else if (HandTracking.instance.IsFoldFinger(false, false, false, false, false)) //spread all fingers
        {
            dialimg.enabled = false;
            dialimg_back.enabled = false;
            for (int i = 0; i < 4; i++)
            {
                dialnum1[i].enabled = false;
            }
            for (int i = 0; i < 5; i++)
            {
                dialnum2[i].enabled = false;
            }
            index = 0;
            initArray(dialInput);
            clear = false;
            return false;
        }
        else
        {
            dialimg.enabled = false;
            dialimg_back.enabled = false;
            
            clear = false;
            return false;
        }

        if (((int)ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.mano_class) != 2)
        {
            clear = false;
            return false;
        }

        //track thumb
        float x1 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[4].x;
        float y1 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[4].y;
        //track index finger
        float x2 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].x;
        float y2 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y;

        // thumb in area
        if (ThumbCenter(x1, y1))
        {
            //turning with index figer
            if (DialTurn(x2, y2) == 0) //turn CCW
            {
                degree += 30;
                check = 0;
                dialimg.transform.localEulerAngles = new Vector3(0, 0, degree);
                dialtext.text = "CCW";
            }
            else if (DialTurn(x2, y2) == 1) //no turn
            {
                dialtext.text = "NONE";
                check++;
            }
            else if (DialTurn(x2, y2) == 2) //turn CW
            {
                degree -= 30;
                check = 0;
                dialimg.transform.localEulerAngles = new Vector3(0, 0, degree);
                dialtext.text = "CW";
            }
            else
            {
                dialtext.text = "EEE";
            }

            if (check == 3) //if don't move for 1.5 seconds, letter selected
            {
                degree = (degree + 360) % 360;
                dialInput[index] = degree;
                indextext.text = index.ToString();
                lockerPWtext.text = lockerPW[index].ToString();
                chargerPWtext.text = chargerPW[index].ToString();
                inputtext.text = degree.ToString();
                if (lockerFlag)
                {
                    if (dialInput[index] != lockerPW[index])
                    {
                        index = 0;
                        checktext.text = "Wrong PW";
                        initArray(dialInput);
                        for (int i = 0; i < 4; i++)
                        {
                            dialnum1[i].enabled = false;
                        }
                        return false;
                    }
                    else
                    {
                        dialnum1[index].enabled = true;
                    }

                    if (index == 3)
                    {
                        if (lockerPW.SequenceEqual(dialInput))
                        {
                            checktext.text = "LOCKER UNLOCK";
                            lockerFlag = false;
                            chargerFlag = true;
                            dialNumFlag = true;
                            flagCheck = true;
                            clear = true;
                            initArray(dialInput);
                            index = 0;
                            //once = true;
                        }
                        index = 0;
                        return false;
                    }

                }
                else if (chargerFlag)
                {
                    if (dialInput[index] != chargerPW[index])
                    {
                        index = 0;
                        checktext.text = "Wrong PW";
                        initArray(dialInput);
                        for (int i = 0; i < 5; i++)
                        {
                            dialnum2[i].enabled = false;
                        }
                        return false;
                    }
                    else
                    {
                        dialnum2[index].enabled = true;
                    }

                    if (index == 4)
                    {
                        if (chargerPW.SequenceEqual(dialInput))
                        {
                            checktext.text = "CHARGER UNLOCK";
                            dialNumFlag = true;
                            chargerFlag = false;
                            clearCharger = true;
                        }
                        index = 0;
                        return false;
                    }
                }
                index++;
            }

        }
        clear = false;
        return false; //@@@@@@
    }

    private bool ThumbCenter(float x, float y)
    {
        if (x < 0.65 && x > 0.35 && y < 0.6 && y > 0.4)
        {
            thumbtext.text = "IN";
            return true;
        }
        else
        {
            thumbtext.text = "OUT";
            return false;
        }
    }

    private int DialTurn(float x, float y)
    {
        if (x < 0.40)
        {
            return 0; //CCW
        }
        else if (x >= 0.40 && x < 0.60)
        {
            return 1; //nothing
        }
        else if (x >= 0.60)
        {
            return 2; //CW
        }
        else return -1;
    }


    private void initArray(int[] arr)
    {
        for (int i = 0; i < 4; i++)
        {
            arr[i] = -1;
        }
    }
}
