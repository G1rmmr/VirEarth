using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.UI;
using UnityEngine.XR.ARSubsystems;
using System;


[RequireComponent(typeof(ARPlaneManager))]

public class ARNavigator : MonoBehaviour
{
    public static ARNavigator instance;

    [SerializeField] private GameObject _spawnablePrefab;
    [SerializeField] public TextMesh text_mesh;
    [SerializeField] public ARPlaneManager arPlaneManager;
    //[SerializeField] public Text PositionCheckText;

    ARTrackedMultiImageManager arTrackedMultiImageManager;

    public int AREventCount = 0 , SpawnLimit = 1;
    private GameObject placedObject;

    Vector3 PlanePosition, prefebRotationChange;
    Quaternion lookprefeb, prefebRotation;

    //private PlaneDetectionMode test = (PlaneDetectionMode)1;

    void Awake()
    {
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

            if (PlanePosition.y < 0)
                PlanePosition.y = 0;

            lookprefeb = Quaternion.LookRotation(PlanePosition);

            RotationPrefeb(lookprefeb.y);

            //n.y = RotationRound(c.y);
            //n.w = RotationRound(c.w);

            _spawnablePrefab.transform.Rotate(prefebRotationChange);

            prefebRotation = _spawnablePrefab.transform.rotation;

            placedObject = Instantiate(_spawnablePrefab, PlanePosition, prefebRotation);
            //arPlaneManager.detectionMode = test;
            
            //PositionCheckText.text = PlanePosition.ToString() + "," + lookprefeb.ToString() + "," + prefebRotationChange.ToString();
            
            Destroy(placedObject, 30.0f);

            SpawnLimit = SpawnLimit - 1;
            AREventCount = 0;
            arPlaneManager.enabled = false;
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

    private Vector3 RotationPrefeb(float x)
    {
        Double a = Math.Round(Convert.ToDouble(x), 2);

        if (a > 0 && a < 1)
        {
            prefebRotationChange =  new Vector3(0, 90, 0);
        }

        else if (a == 1)
        {
            prefebRotationChange = new Vector3(0, 180, 0);
        }

        else if (a < 0 && a > -1)
        {
            prefebRotationChange = new Vector3(0, 270, 0);
        }

        return prefebRotationChange;
    }

    public void ARNavigatorEvent()
    {
        AREventCount = 1;
        SpawnLimit = 1;

        if (placedObject == null && SpawnLimit == 1)
        {
            arPlaneManager.enabled = true;
        }
        else
            arPlaneManager.enabled = false;

        HintTextUpdate();
    }

    public void HintTextUpdate()
    {
        switch (arTrackedMultiImageManager.imageTrackedText.text)
        {
            case "charger":
                text_mesh.text = "A동 엘리베이터 옆 \n 층별 안내판에 단서가 있다";
                break;

            case "board":
                text_mesh.text = "4층 사물함, 17학번 남지원.";
                break;

            case "fireplug":
                text_mesh.text = "백신은 502에.";
                break;
        }
    }
}