using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using ManoMotion;

public class RingManager : MonoBehaviour
{
    [SerializeField] GameObject _drawObjectPrefab;
    [SerializeField] GameObject _draw;

    // Update is called once per frame
    void Update()
    {
        if (ARSession.state == ARSessionState.SessionTracking)
        {
            FollowPalmCenter(_drawObjectPrefab);
        }
        else
        {
            FollowPalmCenter(_draw);
        }
    }

    private void FollowPalmCenter(GameObject obj)
    {
        HandInfo currentlyDetectedHand = ManomotionManager.Instance.Hand_infos[0].hand_info;
        float y_top = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y;
        float y_down = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[5].y;

        ManoGestureContinuous currentlyDetectedManoClass = currentlyDetectedHand.gesture_info.mano_gesture_continuous;
        Vector3 palmCenterPosition = currentlyDetectedHand.tracking_info.palm_center;

        //Instantiate(_drawObjectPrefab, transform.position, Quaternion.identity);
        //this.transform.position = ManoUtils.Instance.CalculateNewPosition(palmCenterPosition, currentlyDetectedHand.tracking_info.depth_estimation);
        //This will draw on the Closed Hand Gesture
        //if (currentlyDetectedManoClass == ManoGestureContinuous.NO_GESTURE)
        
        if (y_top <= y_down)
        {
            Instantiate(obj, transform.position, Quaternion.identity);
            this.transform.position = ManoUtils.Instance.CalculateNewPosition(palmCenterPosition, currentlyDetectedHand.tracking_info.depth_estimation);
        }
    }

}
