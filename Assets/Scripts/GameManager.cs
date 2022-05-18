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
    [SerializeField] private GameObject DialObject;
    [SerializeField] private GameObject FogEffect;
    [SerializeField] private GameObject BoardAnimation;
    [SerializeField] public ARPlaneManager arPlaneManager;

    // flag
    private bool flag_pattern;
    private bool flag_hp;
    private bool flag_startGame;
    private bool flag_arPortal;
    private bool flag_board;
    private bool flag_dial1;
    private bool flag_dial2;
    private bool flag_dialDelay;
    private bool flag_dial_once;

    //
    private PlaneDetectionMode mode = (PlaneDetectionMode)1;
    
    // 인스펙터
    [SerializeField] private Text debug;

    private void Awake()
    {
        // 오브젝트
        HPObject.SetActive(true);
        PatternObject.SetActive(false);
        GPSObject.SetActive(false);
        DialObject.SetActive(false);
        FogEffect.SetActive(true);  //@@ true로 변환
        arPlaneManager = GetComponent<ARPlaneManager>();

        // flag
        flag_pattern = false;
        flag_hp = false;
        flag_startGame = false;
        flag_arPortal = false;
        flag_board = false;
        flag_dial1 = false;
        flag_dial2 = false;
        flag_dialDelay = false;
        flag_dial_once = false;
    }
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    private void Update()
    {
        debug.text = GPSObject.GetComponent<gps>().isInB.ToString();

        if (GPSObject.GetComponent<gps>().isInB)
        {
            FogEffect.GetComponent<fog_controller>().SetPoisonFog();
        }
        else
        {
            FogEffect.GetComponent<fog_controller>().SetNormalFog();
        }

        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "charger")
        {
            if (!flag_startGame)
            {
                flag_startGame = GameStartEffect.instance.gameStartEffect();
                //ARNavigator.instance.ARNavigatorEvent();
                //GPSObject.SetActive(true);
                //GPSObject.GetComponent<gps>().startGps();
            }
        }
        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "board")
        {
            if (!flag_board)
            {

                BoardAnimation.SetActive(true);
                Destroy(BoardAnimation, 5.0f);
               
                ARNavigator.instance.ARNavigatorEvent();
                flag_board = true;
            }
        }
        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "locker" && !flag_dial2)
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

            DialObject.SetActive(true);
            Dial.instance.DDDial();
            flag_dial1 = Dial.instance.clearInst;
            /*if (flag_dial1)
            {
                DialObject.SetActive(false);
            }*/

        }

        if (GPSObject.GetComponent<gps>().isInB == true)
        {
            if (!flag_hp)
            {
                HPManager.instance.enable = true;
                flag_hp = true;
                //HPObject.SetActive(true);
            }
        }
        else
        {
            if (flag_hp)
            {
                HPManager.instance.enable = false;
                flag_hp = false;
                //HPObject.SetActive(false);
            }
        }
        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "fireplug")
        {
            if (!flag_pattern && InventoryManager.instance.equip_key)
            {
                PatternObject.SetActive(true);
                InventoryManager.instance.inventoryManagement_enable = false;
                //InventoryManager.instance.set_inventoryManagement_enable(false);
                flag_pattern = Pattern.instance.PatternCheck();
                if (flag_pattern)
                {
                    // 키 카드 확보
                    showText.instance.ShowText("카드키를 획득하였습니다");
                    //InventoryManager.instance.set_inventoryManagement_enable(true);
                    InventoryManager.instance.inventoryManagement_enable = true;
                    //GameStartEffect.instance.gameStartEffect(); // test / 패턴 종류 이펙트로 변경
                    InventoryManager.instance.equip_key = false;
                    InventoryManager.instance.canUseItem[2] = true;
                    InventoryManager.instance.distroy_key_display();
                    PatternObject.SetActive(false);

                    ARNavigator.instance.ARNavigatorEvent();
                }
            }
            //ARNavigator.instance.ARNavigatorEvent();
        }
        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "exitdoor")
        {
            
        }
        if (InventoryManager.instance.equip_cardkey)
        {
            if (!flag_arPortal)
            {
                ARObject.GetComponent<ARNavigator>().arPlaneManager.enabled = true;
                if (ARObject.GetComponent<ARNavigator>().arPlaneManager.enabled == true)
                    debug.text = "ARPlaneManger ON!";

                //ARObject.GetComponent<ARNavigator>().arPlaneManager.detectionMode = PlaneDetectionMode.Horizontal;
                ARObject.GetComponent<ARNavigator>().arPlaneManager.requestedDetectionMode = mode;
                ARObject.GetComponent<AREnvironmentProbeManager>().enabled = true;
                ARObject.GetComponent<ARRaycastManager>().enabled = true;
                ARObject.GetComponent<PlaceOnPlane>().enabled = true;
                if (ARObject.GetComponent<PlaceOnPlane>().enabled == true)
                    debug.text += "PlaceOnPlane ON!\n";
                else
                    debug.text += "PlaceOnPlane Off!\n";
                flag_arPortal = true;
            }
        }
        //InventoryManager.instance.InventoryManagement(); // 인벤토리, inventoryManagement_enable이 false면 작동안함

        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "charger" && flag_arPortal){
            //DialObject.SetActive(true);
            if (!flag_dial_once)
            {
                Dial.instance.once = true;
                Dial.instance.DDDial();
                flag_dial_once = true;
            }
            if (!flag_dial2)
            {
                flag_dial2 = Dial.instance.clearChargerInst;
                if (flag_dial2)
                {
                    DialObject.SetActive(false);
                }
            }
        }
    }
}
