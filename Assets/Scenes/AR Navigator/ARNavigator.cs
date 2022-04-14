using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.UI;


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

    Vector3 PlanePosition;
    Quaternion c, n;

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
            n = _spawnablePrefab.transform.rotation;

            if (PlanePosition.y < 0)
                PlanePosition.y = 0;

            c = Quaternion.LookRotation(PlanePosition);

            n.y = RotationRound(c.y);
            n.w = RotationRound(c.w);

            placedObject = Instantiate(_spawnablePrefab, PlanePosition, n); 
           // PositionMessage = n.ToString() + "," + c.ToString();
            
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

    public void ARNavigatorEvent()
    {
        AREventCount = 1;
        SpawnLimit = 1;

        if (placedObject == null && SpawnLimit == 1)
            arPlaneManager.enabled = true;
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