using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.SceneManagement;

public class test : MonoBehaviour
{
    private PlaneDetectionMode mode = (PlaneDetectionMode)1;
    //public ARPlaneManager apm;
    public Text debug;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        debug.text = ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.mano_gesture_trigger.ToString();
    }

   /* public void Horizon()
    {
        apm.requestedDetectionMode = (PlaneDetectionMode)1;
    }

    public void vertical()
    {
        apm.requestedDetectionMode = (PlaneDetectionMode)2;
    }
    public void none()
    {
        apm.requestedDetectionMode = (PlaneDetectionMode)0;
    }
    public void evrything()
    {
        apm.requestedDetectionMode = (PlaneDetectionMode)1 | (PlaneDetectionMode)2;
    }*/
}
