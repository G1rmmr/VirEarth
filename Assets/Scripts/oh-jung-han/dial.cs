using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Dial : MonoBehaviour
{
    public static Dial instance; // 인스턴스

    [SerializeField]
    private Image dialimg;
    
    private void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        dialimg.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public bool PatternCheck()
    {
        if (HandTracking.instance.IsFoldFinger(false, false, true, true, true))
        {
            dialimg.enabled = true;
            
            return false;
        }
        else
        {
            dialimg.enabled = false;
            return false;
        }
        
        //@@@@@@@@@@@@@@@@@@ 아래 코드 무엇?
        if (((int)ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.mano_class) != 2)
            return false;
        
        //엄지
        float x1 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[4].x;
        float y1 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[4].y;
        //검지
        float x2 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].x;
        float y2 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y;


        // 엄지가 화면 중앙에 위치
        if (ThumbCenter(x1,y1))
        {
            //다이얼 진행
            DialTurn(x2, y2); //@@@@@ 0 반환시 이전 이미지, 1반환시 정지, 2반환시 다음 이미지
            
        }
    }

    private bool ThumbCenter(float x, float y)
    {
        if (x < 0.6 && x > 0.4 && y < 0.6 && y > 0.4)
        {
            return true;
        }
        else return false;
    }

    private int DialTurn(float x, float y)
    {
        if (y < 0.65)
        {
            return 0; //반시계 방향 회전
        }
        else if (y >= 0.65 && y < 0.75)
        {
            return 1; //정지
        }
        else if (y >= 0.75)
        {
            return 2; //시계 방향 회전
        }
        else return -1;
    }

}
