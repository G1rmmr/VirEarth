using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.UI;


[RequireComponent(typeof(ARPlaneManager))]

public class ARNavigator : MonoBehaviour
{
    public static ARNavigator instance;

    //[SerializeField] private GameObject Panel;
    [SerializeField] private GameObject _spawnablePrefab;
    private GameObject placedObject;
    [SerializeField] private ARPlaneManager arPlaneManager;
    //[SerializeField] private Button ActiveButton;
    //[SerializeField] private Text PositionCheckText;

    ARTrackedMultiImageManager arTrackedMultiImageManager;

    public int AREventCount = 0 , SpawnLimit = 1;

    //string PositionMessage = "";

    Vector3 PlanePosition;
    Quaternion c, n;

     /*public Text togglePlaneDetectionText
    {
        get { return PositionCheckText; }
        set { PositionCheckText = value; }
    }*/

    void Awake()
    {
        //ActiveButton.onClick.AddListener(Activate);
        arTrackedMultiImageManager = GameObject.Find("AR Session Origin").GetComponent<ARTrackedMultiImageManager>();
        arPlaneManager = GetComponent<ARPlaneManager>();
        arPlaneManager.planesChanged += PlaneChanged;
        instance = this;
    }



    private void PlaneChanged(ARPlanesChangedEventArgs args)
    {
        if (args.added != null && placedObject == null && AREventCount != 0)
        {

            ARPlane arPlane = args.added[0];
            PlanePosition = arPlane.transform.position;
            n = _spawnablePrefab.transform.rotation;

            if (PlanePosition.y < 0)
                PlanePosition.y = 0;

            c = Quaternion.LookRotation(PlanePosition);

            n.y = RotationRound(c.y);
            n.w = RotationRound(c.w);

            placedObject = Instantiate(_spawnablePrefab, PlanePosition, n); 
            //PositionMessage = AREventCount.ToString() + "," + SpawnLimit.ToString() + "," + arTrackedMultiImageManager.imageTrackedText.text;
            
            Destroy(placedObject, 5.0f);

            SpawnLimit = SpawnLimit - 1;
            AREventCount = 0;

           /* if (togglePlaneDetectionText != null)
                 togglePlaneDetectionText.text = PositionMessage;*/

        }
    }

    private float RotationRound(float x)
    {
        if (x != 0.5 || x != -0.5)
        {
            if (x > 0 && (x > 0.75 || x < 0.25))
            {
                return Mathf.Round(x);
            }

            else if (x >= 0.25 && x <= 0.75)
            {
                return 0.5f;
            }

            else if (x < 0 && (x < -0.75 || x > -0.25))
            {
                return Mathf.Round(x);
            }

            else
                return -0.5f;

        }

        else
            return x;

    }

    public void ARNavigatorEvent()
    {
        AREventCount = 1;

        if (placedObject == null && SpawnLimit == 1)
            arPlaneManager.enabled = true;
        else
            arPlaneManager.enabled = false;

        ARHintText.instance.HintTextUpdate();
    }

    public void Limit_init()
    {
        SpawnLimit = 1;
    }
}