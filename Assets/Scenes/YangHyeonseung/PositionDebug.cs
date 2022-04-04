using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PositionDebug : MonoBehaviour
{
    //public GameObject mask;
    //public Text FingerPositionWorld;
    public Text FingerPositionViewport;
    //public Text FingerPositionScreen;
    //public Text PrefabPositionWorld;
    //public Text PrefabPositionViewport;
    //public Text PrefabPositionScreen;

    private Vector3 indexPosition;
    //private Vector3 prefabPosition;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //prefabPosition = mask.transform.position;
        
        indexPosition = new Vector3(ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].x,
            ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y,
            ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.depth_estimation);

        //Vector3 prefabPositionViewport = Vector3.Normalize(Camera.main.WorldToViewportPoint(prefabPosition));
        //Vector3 prefabPositionScreen = Camera.main.WorldToScreenPoint(prefabPosition);
        //Vector3 fingerPositionWorld = Camera.main.ViewportToWorldPoint(indexPosition);
        //Vector3 fingerPositionScreen = Camera.main.ViewportToScreenPoint(indexPosition);

        /*FingerPositionWorld.text = "( " + fingerPositionWorld.x.ToString("N2") + ", " + fingerPositionWorld.y.ToString("N2") + ", "
                + fingerPositionWorld.z.ToString("N2") + " )";*/
        
        FingerPositionViewport.text = "( " + indexPosition.x.ToString("N2") + ", " + indexPosition.y.ToString("N2") + ", "
        + indexPosition.z.ToString("N2") + " )";
        
        /*FingerPositionScreen.text = "( " + fingerPositionScreen.x.ToString("N2") + ", " + fingerPositionScreen.y.ToString("N2") + ", "
        + fingerPositionScreen.z.ToString("N2") + " )";
        PrefabPositionWorld.text = "( " + prefabPosition.x.ToString("N2") + ", " + prefabPosition.y.ToString("N2") + ", "
                + prefabPosition.z.ToString("N2") + " )";
        PrefabPositionViewport.text = "( " + prefabPositionViewport.x.ToString("N2") + ", " + prefabPositionViewport.y.ToString("N2") + ", "
        + prefabPositionViewport.z.ToString("N2") + " )";
        PrefabPositionScreen.text = "( " + prefabPositionScreen.x.ToString("N2") + ", " + prefabPositionScreen.y.ToString("N2") + ", "
        + prefabPositionScreen.z.ToString("N2") + " )";
        */
    }
}
