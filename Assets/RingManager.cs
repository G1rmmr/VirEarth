using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RingManager : MonoBehaviour
{
    [SerializeField]
    private FingerInfoGizmo fingerInfoGizmo;

    // Start is called before the first frame update
    void Start()
    {
        Screen.orientation = ScreenOrientation.Portrait;

        if (fingerInfoGizmo == null)
        {
            try
            {
                fingerInfoGizmo = GameObject.Find("TryOnManager").GetComponent<FingerInfoGizmo>();
            }
            catch
            {
                Debug.Log("Cant find 'TryOnManager' GameObject");
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        //SetFingerInfoSettings();

        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.mano_class == ManoClass.GRAB_GESTURE)
        {
            fingerInfoGizmo.ShowFingerInformation();
            float centerPosition = 0.5f;
            Vector3 ringPlacement = Vector3.Lerp(fingerInfoGizmo.LeftFingerPoint3DPosition, fingerInfoGizmo.RightFingerPoint3DPosition, centerPosition);

            Debug.Log("Finger info at " + ringPlacement);
            GameObject.Find("Finger").transform.position = ringPlacement;
        }
    }
}
