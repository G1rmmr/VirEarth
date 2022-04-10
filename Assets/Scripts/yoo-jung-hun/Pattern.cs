using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Pattern : MonoBehaviour
{
    public static Pattern instance; // 인스턴스

    [SerializeField]
    private Image[] PatternCircles = new Image[9];
    public Text patternText;   // 현재 검지가 가르키는 면
    public int[] correctPattern = new int[9];
    private int[] isPassed = new int[9] { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    private List<int> passedLoc = new List<int>();
    private int passedNum;

    private void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        PatternCircles[0].transform.position = new Vector2(0.3f * Screen.width, 0.65f * Screen.height);
        PatternCircles[1].transform.position = new Vector2(0.5f * Screen.width, 0.65f * Screen.height);
        PatternCircles[2].transform.position = new Vector2(0.7f * Screen.width, 0.65f * Screen.height);
        PatternCircles[3].transform.position = new Vector2(0.3f * Screen.width, 0.5f * Screen.height);
        PatternCircles[4].transform.position = new Vector2(0.5f * Screen.width, 0.5f * Screen.height);
        PatternCircles[5].transform.position = new Vector2(0.7f * Screen.width, 0.5f * Screen.height);
        PatternCircles[6].transform.position = new Vector2(0.3f * Screen.width, 0.35f * Screen.height);
        PatternCircles[7].transform.position = new Vector2(0.5f * Screen.width, 0.35f * Screen.height);
        PatternCircles[8].transform.position = new Vector2(0.7f * Screen.width, 0.35f * Screen.height);
        for (int i = 0; i < 9; i++)
        {
            PatternCircles[i].enabled = false;
        }
    }

    // Update is called once per frame
    void Update()
    {


        if (PatternCheck())
        {
            patternText.text = "Clear";
        }
        else
            patternText.text = "Doing";
    }

    public bool PatternCheck()
    {
        if (HandTracking.instance.IsFoldFinger(false, false, false, false, false))
        {
            for (int i = 0; i < 9; i++)
            {
                PatternCircles[i].enabled = true;
                isPassed[i] = 0;
            }
            passedLoc.Clear();
            passedLoc.Add(0);
            return false;
        }
        else if (HandTracking.instance.IsFoldFinger(true, true, true, true, true))
        {
            for (int i = 0; i < 9; i++)
            {
                PatternCircles[i].enabled = false;
                isPassed[i] = 0;
            }
            passedLoc.Clear();
            passedLoc.Add(0);
            return false;
        }
        if (((int)ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.mano_class) != 2)
            return false;
        float x = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].x;
        float y = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y;

        passedNum = passedLoc.Count - 1;

        // 손가락이 지나가면 색상 변경
        for (int i = 0; i < 9; i++)
        {
            if (isPassed[i] == 1)
                PatternCircles[i].color = Color.red;
            else
                PatternCircles[i].color = Color.white;
        }

        // 지정된 위치에 손가락이 지나가면 isPassed 체크,
        // passLoc 배열에 위치 추가
        int number = which_pattern(x, y);
        if (number == -1)
            return false;
        isPassed[number - 1] = 1;
        if (passedLoc[passedNum] != number)
            passedLoc.Add(number);

        passedNum = passedLoc.Count - 1;
        if (passedNum == 9)
            return true;

        // 정해진 순서와 다르게 움직이면 게임 초기화
        if (passedLoc[passedNum] != correctPattern[passedNum - 1])
        {
            for (int i = 0; i < 9; i++)
            {
                isPassed[i] = 0;
            }
            passedLoc.Clear();
            passedLoc.Add(0);
            return false;
        }


        /*myPattern.Add(which_pattern(x, y));
        if (myPattern.Count == 10)
            myPattern.RemoveAt(0);*/
        // 새로 등록되는 면일 때
        /*if (passed[currentFace - 1] == false)
        {
            // passed 배열 최신화
            for (int i = 0; i < 4; i++)
            {
                if (i == (currentFace - 1))
                {
                    passed[i] = true;
                    continue;
                }
                passed[i] = false;
            }

            // 패턴 배열에 등록
            myPattern[0] = myPattern[1];
            myPattern[1] = myPattern[2];
            myPattern[2] = myPattern[3];
            myPattern[3] = currentFace;

            patternText.text = "Pattern : " + myPattern[0].ToString() +
                " -> " + myPattern[1].ToString() + " -> " +
                myPattern[2].ToString() + " -> " + myPattern[3].ToString()
                + " || " + test;
            test++;
        }*/
        return false;
    }

    private int which_pattern(float x, float y)
    {
        if (x >= 0.65 && x <= 0.75)
        {
            if (y >= 0.62 && y <= 0.68)
                return 3;
            else if (y >= 0.47 && y <= 0.53)
                return 6;
            else if (y >= 0.32 && y <= 0.38)
                return 9;
            else return -1;
        }
        else if (x >=0.45 && x <= 0.55)
        {
            if (y >= 0.62 && y <= 0.68)
                return 2;
            else if (y >= 0.47 && y <= 0.53)
                return 5;
            else if (y >= 0.32 && y <= 0.38)
                return 8;
            else return -1;
        }
        else if (x >= 0.25 && x <= 0.35)
        {
            if (y >= 0.62 && y <= 0.68)
                return 1;
            else if (y >= 0.47 && y <= 0.53)
                return 4;
            else if (y >= 0.32 && y <= 0.38)
                return 7;
            else return -1;
        }
        return -1;
    }

}
