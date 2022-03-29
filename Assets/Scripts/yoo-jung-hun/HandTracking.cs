using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HandTracking : MonoBehaviour
{
    // 인스펙터
    [SerializeField] private Image HandImage; // 화면 11시 손 이미지
    [SerializeField] private Text test;

    // public 변수
    public static bool isHandOn = false;
    public static float[,] hand = new float[21, 2];   // landmark 21개의 x, y 배열
    public static float zvalue;       // landmark 0번의 z value


    // private
    private GestureInfo gesture;        // 제스처

    // Start is called before the first frame update
    void Start()
    {
        HandImage.enabled = false;
        isHandOn = false;
    }

    // Update is called once per frame
    void Update()
    {
        HandImage.enabled = false;
        isHandOn = false;
        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.is_right == -1) //카메라에 손이 없으면 더이상 진행하지 않음.
            return;
        // -------------------------------------------------------------------------------
        HandImage.enabled = true;
        isHandOn = true;

        gesture = ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info;
        test.text = "Hand_side : " + gesture.hand_side.ToString() + " || is_right = " + gesture.is_right.ToString() + "\n";
        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.is_right == 1) // 오른손이면
            test.text += "Right Hand\n";
        else if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.is_right == 0) // 왼손이면
            test.text += "Left Hand\n";
        else        // 손이 없을때
            test.text += "Right ? Left\n";

        if (((int)gesture.mano_class) == 0)
            test.text += "\n";
        else if (((int)gesture.mano_class) == 1)
            test.text += "\n";
        else if (((int)gesture.mano_class) == 2)
            test.text += "Pointer\n";
        else
            test.text += "Gestrue?";
    }



}
