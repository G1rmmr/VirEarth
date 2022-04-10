using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.UI;


[RequireComponent(typeof(ARPlaneManager))]

public class test : MonoBehaviour
{
    [SerializeField] private GameObject Panel;
    [SerializeField] private GameObject _spawnablePrefab;
    private GameObject placedObject;
    [SerializeField] private ARPlaneManager arPlaneManager;
    [SerializeField] private Button ActiveButton;
    [SerializeField] private Text PositionCheckText;

    public static int EventCount = 0;
    string PositionMessage = "";
    Vector3 PlanePosition;
    Quaternion c, n;

     public Text togglePlaneDetectionText
    {
        get { return PositionCheckText; }
        set { PositionCheckText = value; }
    }

    void Awake()
    {
        ActiveButton.onClick.AddListener(Activate);
        arPlaneManager = GetComponent<ARPlaneManager>();
        arPlaneManager.planesChanged += PlaneChanged;
    }

    private void PlaneChanged(ARPlanesChangedEventArgs args)
    {
        if(args.added != null && placedObject == null && EventCount != 0)
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
            PositionMessage = n.ToString() + c.ToString();
            arPlaneManager.enabled = false;

            if (togglePlaneDetectionText != null)
                togglePlaneDetectionText.text = PositionMessage;

            Destroy(placedObject, 10.0f);
            placedObject = null;

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
    public void Activate()
    {
        EventCount = 3;
       
        Panel.SetActive(false);
        arPlaneManager.enabled = true;
       
    }

    public void HintEventCount()
    {
        EventCount += 1;
        arPlaneManager.enabled = true;

    }
}