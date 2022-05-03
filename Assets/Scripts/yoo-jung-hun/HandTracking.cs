using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
// akejkfjwek;
public class HandTracking : MonoBehaviour
{
    public static HandTracking instance; // 인스턴스

    // 인스펙터
    //[SerializeField] private Image HandImage; // 화면 11시 손 이미지
    //[SerializeField] private Text test;

    // public 변수
    public static bool isHandOn = false;
    public bool swipe;

    private void Awake()
    {
        instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        //HandImage.enabled = false;
        isHandOn = false;
    }


    private void Update()
    {
        //HandImage.enabled = false;
        isHandOn = false;
        //if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.is_right == -1) //카메라에 손이 없으면 더이상 진행하지 않음.
        //    return;
        // -------------------------------------------------------------------------------
        //HandImage.enabled = true;
        isHandOn = true;
        //InventoryManager.instance.InventoryManagement(); // 인벤토리, inventoryManagement_enable이 false면 작동안함
        if (InventoryManager.instance.equip_cardkey)
        {
            if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.mano_gesture_trigger == ManoGestureTrigger.SWIPE_RIGHT)
                if (!swipe)
                    StartCoroutine(swiping());
        }
    }
    private IEnumerator swiping()
    {
        swipe = true;
        yield return new WaitForSeconds(3.0f);
        swipe = false;
    }
    public bool IsFoldFinger(bool thumb, bool point, bool big, bool four, bool little) // 엄지, 검지, 중지, 약지, 새끼
    {
        //int count = 0;
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

    public bool getFingers(bool point, bool big, bool four, bool little)
    {
        TrackingInfo hand = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info;

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

    public float GetX(int index)
    {
        return ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[index].x;
    }

    public float GetY(int index)
    {
        return ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[index].y;
    }

}
