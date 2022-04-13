using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MaskInteraction : MonoBehaviour
{
    public GameObject mask;
    public Text showFingerPosition;
    public Text showPrefabPosition;
    public Text touchText;
    public Text distDebug;

    private float thumbx;
    private float thumby;
    private float indexx;
    private float indexy;
    private Vector3 spawnPosition;
    private readonly float tolerance = 0.2f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        thumbx = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[4].x;
        thumby = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[4].y;
        indexx = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].x;
        indexy = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y;

        spawnPosition = Camera.main.WorldToViewportPoint(mask.transform.position);
        showPrefabPosition.text = "( " + spawnPosition.x.ToString("N2") + ", " + spawnPosition.y.ToString("N2") + ", "
                + spawnPosition.z.ToString("N2") + " )";
        //Vector3 fingerPosition = Camera.main.ViewportToWorldPoint(ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8]);          
        showFingerPosition.text = "( " + ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].x.ToString("N2") + ", "
            + ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y.ToString("N2") + ", "
            + ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].z.ToString("N2") + " )";
        /*
        showFingerPosition.text = "( " + fingerPosition.x + ", "
            + fingerPosition.y + ", "
            + fingerPosition.z + " )";
        */

        if (IsTouch() == true)
        {
            touchText.text = "Touch!";
        }
        else
        {
            touchText.text = "Untouch";
        }
    }

    private bool IsTouch()
    {       
        //spawnPosition = Camera.main.WorldToViewportPoint(mask.transform.position);
        float spawnx = spawnPosition.x;
        float spawny = spawnPosition.y;
        /*
        indexx = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].x;
        indexy = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y;
        */
        float dist = (float)Math.Sqrt(Math.Pow(indexx - spawnx, 2) + Math.Pow(indexy - spawny, 2));
        distDebug.text = dist.ToString("N2");
        /*
        fingerPositionDebug.text = "(" + indexx.ToString("N2") + ", "
            + indexy.ToString("N2") + " )";
        prefabPositionDebug.text = "(" + spawnx.ToString("N2") + ", "
            + spawny.ToString("N2") + " )";
        */

        if (dist < tolerance) return true;
        else return false;
    }

    private bool IsPickUp()
    {
        return true;
    }

}
