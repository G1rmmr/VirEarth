using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class Dial : MonoBehaviour
{
    public static Dial instance; // 인스턴스

    public bool enable = true;
    public bool clear = false;
    public bool clearCharger = false;

    [SerializeField] private Image dialimg;
    [SerializeField] private Image dialimg_back;
    [SerializeField] private Text dialtext;
    [SerializeField] private Text thumbtext;
    [SerializeField] private Text checktext;
    [SerializeField] private Text indextext;
    [SerializeField] private Text lockerPWtext;
    [SerializeField] private Text chargerPWtext;
    [SerializeField] private Text inputtext;
    [SerializeField] private Text[] inputarray = new Text[5];

    private int degree = 0;
    private int check = 0;
    private int index = 0;
    private bool once;
    private bool lockerFlag = true;
    private bool chargerFlag = false;
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
        for (int i = 0; i < 5; i++)
        {
            inputarray[i].enabled = false;
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
            if (!enable)
                continue;
            DialCheck();
            yield return new WaitForSeconds(0.65f);
        }
    }

    public bool DialCheck()
    {
        if (HandTracking.instance.IsFoldFinger(false, false, true, true, true)) //엄지 검지 펴면 시작
        {
            dialimg.enabled = true;
            dialimg_back.enabled = true;
            if (lockerFlag)
            {
                inputarray[0].transform.position = new Vector2(0.2f * Screen.width, 0.7f * Screen.height);
                inputarray[1].transform.position = new Vector2(0.4f * Screen.width, 0.7f * Screen.height);
                inputarray[2].transform.position = new Vector2(0.6f * Screen.width, 0.7f * Screen.height);
                inputarray[3].transform.position = new Vector2(0.8f * Screen.width, 0.7f * Screen.height);
                inputarray[0].text = "1";
                inputarray[1].text = "7";
                inputarray[2].text = "4";
                inputarray[3].text = "5";
            }
            else if (chargerFlag)
            {
                inputarray[0].transform.position = new Vector2(0.2f * Screen.width, 0.7f * Screen.height);
                inputarray[1].transform.position = new Vector2(0.35f * Screen.width, 0.7f * Screen.height);
                inputarray[2].transform.position = new Vector2(0.5f * Screen.width, 0.7f * Screen.height);
                inputarray[3].transform.position = new Vector2(0.65f * Screen.width, 0.7f * Screen.height);
                inputarray[4].transform.position = new Vector2(0.8f * Screen.width, 0.7f * Screen.height);
                inputarray[0].text = "P";
                inputarray[1].text = "Y";
                inputarray[2].text = "N";
                inputarray[3].text = "Y";
                inputarray[4].text = "O";
            }
            //thumbtext.text = "finger on";
            //clear = false;
            //return false;
        }
        else if (HandTracking.instance.IsFoldFinger(false, false, false, false, false)) //손가락 전부 펴면 초기화
        {
            dialimg.enabled = false;
            dialimg_back.enabled = false;
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

        //엄지
        float x1 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[4].x;
        float y1 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[4].y;
        //검지
        float x2 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].x;
        float y2 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y;

        // 엄지가 화면 중앙에 위치
        if (ThumbCenter(x1, y1))
        {
            //다이얼 진행
            if (DialTurn(x2, y2) == 0) //반시계 회전
            {
                degree += 30;
                check = 0;
                dialimg.transform.localEulerAngles = new Vector3(0, 0, degree);
                dialtext.text = "CCW";
            }
            else if (DialTurn(x2, y2) == 1) //회전X
            {
                dialtext.text = "NONE";
                check++;
            }
            else if (DialTurn(x2, y2) == 2) //시계 회전
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

            if (check == 3) //1.5초 동안 안움직이면 문자 선택
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
                            inputarray[i].enabled = false;
                        }
                        return false;
                    }
                    else
                    {
                        inputarray[index].enabled = true;
                    }

                    if (index == 3)
                    {
                        if (lockerPW.SequenceEqual(dialInput))
                        {
                            lockerFlag = false;
                            chargerFlag = true;
                            checktext.text = "LOCKER UNLOCK";
                            for (int i = 0; i < 4; i++)
                            {
                                inputarray[i].enabled = false;
                            }
                            //@@@@@@@@@@@@@@@@@@@
                            clear = true;
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
                            inputarray[i].enabled = false;
                        }
                        return false;
                    }
                    else
                    {
                        inputarray[index].enabled = true;
                    }

                    if (index == 4)
                    {
                        if (chargerPW.SequenceEqual(dialInput))
                        {
                            chargerFlag = false;
                            checktext.text = "CHARGER UNLOCK";

                            //@@@@@@@@@@@@@@@@@@@@@@@@@@7
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
            return 0; //반시계 방향 회전
        }
        else if (x >= 0.40 && x < 0.60)
        {
            return 1; //정지
        }
        else if (x >= 0.60)
        {
            return 2; //시계 방향 회전
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
