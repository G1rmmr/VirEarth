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


    // private 변수
    private GestureInfo gesture;        // 제스처
    private bool inventoryOnFlag;

    // Start is called before the first frame update
    void Start()
    {
        HandImage.enabled = false;
        isHandOn = false;
        inventoryOnFlag = false;
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

        test.text = "It is Debug Text\n";
        if (inventoryOnFlag)
            test.text += "flag : True\n";
        else
            test.text += "flag : False\n";
        InventoryOn();  // 손바닥 상태에서 손가락을 전부 피면 온, 주먹을 쥐면 오프
        if (inventoryOnFlag)
        {
            DisplayInventory();
            SelectItem();
        }
        /*gesture = ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info;
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
            test.text += "Gestrue?";*/
    }

    private void InventoryOn()
    {
        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side != HandSide.Palmside) // 손바닥이 아니면 즉시 종료
            return;
        if (IsFoldFinger(false, false, false, false, false) && !inventoryOnFlag)
        {
            test.text += "Inventory ON\n";
            inventoryOnFlag = true;
            
        }
        else if(IsFoldFinger(true, true, true, true, true) && inventoryOnFlag)
        {
            test.text += "Inventory OFF\n";
            inventoryOnFlag = false;
        }
        return;
    }

    private bool IsFoldFinger(bool thumb, bool point, bool big, bool four, bool little) // 엄지, 검지, 중지, 약지, 새끼
    {
        int count = 0;
        TrackingInfo hand = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info;
        //hand.skeleton.joints[0].x
        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.is_right == 1) // 오른손이면
        {
            if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side == HandSide.Backside) // 손등이면
            {
                if ((hand.skeleton.joints[4].x > hand.skeleton.joints[2].x) == (thumb)) { }
                else
                    return false;
            }
            else if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side == HandSide.Palmside)    // 손바닥이면
            {
                if ((hand.skeleton.joints[4].x < hand.skeleton.joints[2].x) == (thumb)) { }
                else
                    return false;
            }
        }
        else if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.is_right == 0) // 왼손이면
        {
            if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side == HandSide.Backside) // 손등이면
            {
                if ((hand.skeleton.joints[4].x < hand.skeleton.joints[2].x) == (thumb)) { }
                else
                    return false;
            }
            else if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side == HandSide.Palmside)    // 손바닥이면
            {
                if ((hand.skeleton.joints[4].x > hand.skeleton.joints[2].x) == (thumb)) { }
                else
                    return false;
            }
        }

        if ((hand.skeleton.joints[8].y < hand.skeleton.joints[6].y) == (point)) { } // 검지
        else
            return false;

        if ((hand.skeleton.joints[12].y < hand.skeleton.joints[10].y) == (big)) { } // 중지
        else
            return false;

        if ((hand.skeleton.joints[16].y < hand.skeleton.joints[14].y) == (four)) { } // 약지
        else
            return false;

        if ((hand.skeleton.joints[20].y < hand.skeleton.joints[18].y) == (little)) { } // 새끼
        else
            return false;

        return true;
    }

    private void DisplayInventory()
    {
        // ItemSystem.get0;
        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side != HandSide.Palmside) // 손바닥이 아니면 즉시 종료
            return;
        /*if (ItemSystem.instance.get0)
            CoordinateSystem.instance.transCoord(0, GetX(8), GetY(8));
        if (ItemSystem.instance.get1)
            CoordinateSystem.instance.transCoord(1, GetX(12), GetY(12));
        if (ItemSystem.instance.get2)
            CoordinateSystem.instance.transCoord(2, GetX(16), GetY(16));
        if (ItemSystem.instance.get3)
            CoordinateSystem.instance.transCoord(3, GetX(20), GetY(20));*/

        CoordinateSystem.instance.transCoord(0, GetX(8), GetY(8));
        CoordinateSystem.instance.transCoord(1, GetX(12), GetY(12));
        CoordinateSystem.instance.transCoord(2, GetX(16), GetY(16));
        CoordinateSystem.instance.transCoord(3, GetX(20), GetY(20));

    }

    private float GetX(int index)
    {
        return ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[index].x;
    }

    private float GetY(int index)
    {
        return ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[index].y;
    }

    private void SelectItem()
    {
        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side != HandSide.Palmside) // 손바닥이 아니면 즉시 종료
        {
            test.text += "SelectItem() no palm\n";
        }

        //return;
        if (IsFoldFinger(true, false, true, true, true)) // 0번 인덱스
        {
            test.text += "item0 Select\n";
        }
        else if (IsFoldFinger(true, false, false, true, true)) // 1번 인덱스
        {
            test.text += "item1 Select\n";
        }
        else if (IsFoldFinger(true, false, false, false, true)) // 2번 인덱스
        {
            test.text += "item2 Select\n";
        }
        else if (IsFoldFinger(true, false, false, false, false)) // 3번 인덱스
        {
            test.text += "item3 Select\n";
        }
        else
            test.text += "no search item\n";
    }
}
