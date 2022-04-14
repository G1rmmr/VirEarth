using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    // 오브젝트
    [SerializeField] private GameObject ARObject;
    [SerializeField] private GameObject HPObject;
    [SerializeField] private GameObject PatternObject;
    [SerializeField] private GameObject GPSObject;
    [SerializeField] public ARPlaneManager arPlaneManager;

    // flag
    private bool flag_pattern;
    private bool flag_hp;
    private bool flag_startGame;
    private bool flag_arPortal;
    private bool flag_board;

    //
    private PlaneDetectionMode mode = (PlaneDetectionMode)1;

    // 인스펙터
    [SerializeField] private Text debug;

    private void Awake()
    {
        // 오브젝트
        HPObject.SetActive(false);
        PatternObject.SetActive(false);
        //GPSObject.SetActive(false);
        arPlaneManager = GetComponent<ARPlaneManager>();

        // flag
        flag_pattern = false;
        flag_hp = false;
        flag_startGame = false;
        flag_arPortal = false;
        flag_board = false;
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    private void Update()
    {

        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "charger")
        {
            if (!flag_startGame)
            {
                flag_startGame = GameStartEffect.instance.gameStartEffect();
                ARNavigator.instance.ARNavigatorEvent(); 
            }
            // ARNavigator.instance.PositionCheckText.text = ARNavigator.instance.arPlaneManager.enabled.ToString() + "," + ARNavigator.instance.text_mesh.text;
        }
        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "board")
        {
            if (!flag_board)
            {
                ARNavigator.instance.ARNavigatorEvent();
                flag_board = true;
            }
        }
        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "locker")
        {
            /*if (!플래그)
            {
                // 이펙트 구현(?)
                HPObject.SetActive(true);
                if (ARNavigator.instance.SpawnLimit != 1)
                    ARNavigator.instance.Limit_init();
            }*/
                       
            //ARNavigator.instance.ARNavigatorEvent();

            //GPSObject.SetActive(true);    // GPS ON!
        }
        
        if (GPSObject.GetComponent<gps>().isInB == true)
        {
            if (!flag_hp)
            {
                HPObject.SetActive(false); //@@@@ true로 수정 필요
            }
        }
        else
        {
            if (flag_hp)
            {
                HPObject.SetActive(false);
            }
        }
        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "fireplug")
        {
            if (!flag_pattern)
            {
                PatternObject.SetActive(true);
                InventoryManager.instance.inventoryManagement_enable = false;
                //InventoryManager.instance.set_inventoryManagement_enable(false);
                flag_pattern = Pattern.instance.PatternCheck();
                if (flag_pattern)
                {
                    // 키 카드 확보
                    //InventoryManager.instance.set_inventoryManagement_enable(true);
                    InventoryManager.instance.inventoryManagement_enable = true;
                    GameStartEffect.instance.gameStartEffect(); // test / 패턴 종류 이펙트로 변경
                    PatternObject.SetActive(false);
                }
            }
            ARNavigator.instance.ARNavigatorEvent();
        }
        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "exitdoor")
        {
            if (!flag_arPortal)
            {
                ARObject.GetComponent<ARNavigator>().arPlaneManager.enabled = true;
                if (ARObject.GetComponent<ARNavigator>().arPlaneManager.enabled == true)
                    debug.text = "ARPlaneManger ON!";
                //ARObject.GetComponent<ARNavigator>().arPlaneManager.detectionMode = PlaneDetectionMode.Horizontal;
                ARObject.GetComponent<ARNavigator>().arPlaneManager.requestedDetectionMode = mode;
                //debug.text = arPlaneManager.currentDetectionMode.ToString();

                ARObject.GetComponent<AREnvironmentProbeManager>().enabled = true;
                if (ARObject.GetComponent<AREnvironmentProbeManager>().enabled == true)
                    debug.text += "AREnvironmentProbeManager ON!\n";
                else
                    debug.text += "AREnvironmentProbeManager Off!\n";

                ARObject.GetComponent<ARRaycastManager>().enabled = true;
                if (ARObject.GetComponent<ARRaycastManager>().enabled == true)
                    debug.text += "ARRaycastManager ON!\n";
                else
                    debug.text += "ARRaycastManager Off!\n";

                ARObject.GetComponent<PlaceOnPlane>().enabled = true;
                if (ARObject.GetComponent<PlaceOnPlane>().enabled == true)
                    debug.text += "PlaceOnPlane ON!\n";
                else
                    debug.text += "PlaceOnPlane Off!\n";
                flag_arPortal = true;
            }
        }
        //InventoryManager.instance.InventoryManagement(); // 인벤토리, inventoryManagement_enable이 false면 작동안함


    }
}
