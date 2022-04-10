using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Show_x_y : MonoBehaviour
{
    public Text showXY;
    public int index;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (HandTracking.isHandOn == false)
            return;
        ShowFingerXY(index);
    }

    private void ShowFingerXY(int index)
    {
        float x = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[index].x;
        float y = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[index].y;
        showXY.text = "Index : " + index + " | x = (" + x.ToString("F4") + "), y = (" + y.ToString("F4") + "), z = (" + HandTracking.zvalue.ToString("F4") + ")";
    }
}
