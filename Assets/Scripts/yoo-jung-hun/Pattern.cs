using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Pattern : MonoBehaviour
{
    public Text patternText;   // 현재 검지가 가르키는 면
    public int[] myPattern = new int[] { 0, 0, 0, 0 };
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void PatternCheck()
    {
        float x = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].x;
        float y = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y;
        bool[] passed = new bool[] { false, false, false, false };
        int currentFace;
        if (x >= 0.5 & y >= 0.5) { currentFace = 1; }   // face 1
        else if (x >= 0 & y >= 0.5) { currentFace = 2; } // face 2
        else if (x >= 0.5 & y >= 0) { currentFace = 4; } // face 4
        else { currentFace = 3; }                       // face 3

        // 새로 등록되는 면일 때
        if (passed[currentFace - 1] == false)
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
            for (int j = 1; j < 3; j++)
                myPattern[j - 1] = myPattern[j];
            myPattern[3] = currentFace;

            patternText.text = "Pattern : " + myPattern[0].ToString() +
                " -> " + myPattern[1].ToString() + " -> " +
                myPattern[2].ToString() + " -> " + myPattern[3].ToString();
        }

    }


}
