using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class sample_Text : MonoBehaviour
{
    public Text test_txt;
    private float y_top;
    private float y_down;
    
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        var warning_check = ManomotionManager.Instance.Hand_infos[0].hand_info.warning;

        if (IsPaper() == true)
        {
            //test_txt.text = "Paper";
            if ((int)warning_check == 0) { test_txt.text = "Paper / 0"; }
            else if ((int)warning_check == 1) { test_txt.text = "Paper / 1"; }
            else if ((int)warning_check == 4) { test_txt.text = "Paper / 4"; }
            else if ((int)warning_check == 5) { test_txt.text = "Paper / 5"; }
            else if ((int)warning_check == 6) { test_txt.text = "Paper / 6"; }
            else if ((int)warning_check == 0) { test_txt.text = "Paper / 0"; }
            else { test_txt.text = "Paper / --"; }
        }
        else
        {
            //test_txt.text = "Rock";
            if ((int)warning_check == 0) { test_txt.text = "Rock / 0"; }
            else if ((int)warning_check == 1) { test_txt.text = "Rock / 1"; }
            else if ((int)warning_check == 4) { test_txt.text = "Rock / 4"; }
            else if ((int)warning_check == 5) { test_txt.text = "Rock / 5"; }
            else if ((int)warning_check == 6) { test_txt.text = "Rock / 6"; }
            else if ((int)warning_check == 0) { test_txt.text = "Rock / 0"; }
            else { test_txt.text = "Rock / --"; }
        }
    }

    private bool DetectedHand()
    {
        //NO_WARNING = 0,
        //WARNING_HAND_NOT_FOUND = 1,
        //WARNING_APPROACHING_UPPER_EDGE = 4,
        //WARNING_APPROACHING_LEFT_EDGE = 5,
        //WARNING_APPROACHING_RIGHT_EDGE = 6,
        var warning_check = ManomotionManager.Instance.Hand_infos[0].hand_info.warning;
        if ((int)warning_check == 0) { return true; }
        else { return false; }
    }

    private bool IsPaper()
    {
        //test_txt.text = "aaaaaaaaaaa";
        HandInfo currentlyDetectedHand = ManomotionManager.Instance.Hand_infos[0].hand_info;
        y_top = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y;
        y_down = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[5].y;
        if (y_top >= y_down)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
