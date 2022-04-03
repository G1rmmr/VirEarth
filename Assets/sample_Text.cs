using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class sample_Text : MonoBehaviour
{
    public Text test_txt;
    public GameObject inventoryButton;
    public GameObject inventory;
    private float y_top1;
    private float y_down1;
    private float y_top2;
    private float y_down2;
    private float y_top3;
    private float y_down3;
    private float y_top4;
    private float y_down4;

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
            /*
            if ((int)warning_check == 0) { test_txt.text = "Paper / 0";}
            else if ((int)warning_check == 1) { test_txt.text = "Paper / 1"; }
            else if ((int)warning_check == 4) { test_txt.text = "Paper / 4"; }
            else if ((int)warning_check == 5) { test_txt.text = "Paper / 5"; }
            else if ((int)warning_check == 6) { test_txt.text = "Paper / 6"; }
            else { test_txt.text = "Paper";}
            */
            switch ((int)warning_check)
            {
                case 0:
                    test_txt.text = "Open";
                    inventoryButton.SetActive(false);
                    inventory.SetActive(true);
                    break;
                default:
                    test_txt.text = "Button";
                    break;
            }
        }
        else
        {
            /*
            if ((int)warning_check == 0) { test_txt.text = "Rock / 0";}
            else if ((int)warning_check == 1) { test_txt.text = "Rock / 1"; }
            else if ((int)warning_check == 4) { test_txt.text = "Rock / 4"; }
            else if ((int)warning_check == 5) { test_txt.text = "Rock / 5"; }
            else if ((int)warning_check == 6) { test_txt.text = "Rock / 6"; }
            else { test_txt.text = "Rock";}
            */
            switch ((int)warning_check)
            {
                case 0:
                    test_txt.text = "Close";
                    inventoryButton.SetActive(true);
                    inventory.SetActive(false);
                    break;
                default:
                    test_txt.text = "Button";
                    break;
            }
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
        y_top1 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y;
        y_down1 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[5].y;
        y_top2 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[12].y;
        y_down2 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[9].y;
        y_top3 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[16].y;
        y_down3 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[13].y;
        y_top4 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[20].y;
        y_down4 = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[17].y;

        if (y_top1 >= y_down1 && y_top2 >= y_down2 && y_top3 >= y_down3 && y_top4 >= y_down4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
