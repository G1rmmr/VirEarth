using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    // 오브젝트
    [SerializeField] private GameObject ARObject;
    [SerializeField] private GameObject HPObject;
    [SerializeField] private GameObject PatternObject;
    [SerializeField] private GameObject GPSObject;
    [SerializeField] private GameObject ARPortalObject;

    // flag
    private bool flag_pattern;
    private bool flag_hp;
    private bool flag_startGame;
    private bool flag_arPortal;

    // 인스펙터
    [SerializeField] private Text debug;

    private void Awake()
    {
        // 오브젝트
        HPObject.SetActive(false);
        PatternObject.SetActive(false);
        //GPSObject.SetActive(false);

        // flag
        flag_pattern = false;
        flag_hp = false;
        flag_startGame = false;
        flag_arPortal = false;
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
                // 게임 스타트 이펙트 구현
                //flag_startGame = GameStartEffect.instance.gameStartEffect();

            }
            // 게임 스타트에 관한 AR 네비게이션 실행()
        }
        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "locker")
        {
            /*if (!플래그)
            {
                // 이펙트 구현(?)
                HPObject.SetActive(true);
            }*/
            // B동 소화전에 관한 AR 네비게이션 실행()
            //GPSObject.SetActive(true);    // GPS ON!
        }
        if (GPSObject.GetComponent<gps>().isInB == true)
                {
            if (!flag_hp)
            {
                HPObject.SetActive(true);
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
                InventoryManager.instance.set_inventoryManagement_enable(false);
                flag_pattern = Pattern.instance.PatternCheck();
                if (flag_pattern)
                {
                    // 키 카드 확보
                    InventoryManager.instance.set_inventoryManagement_enable(true);
                }
            }
        }
        if (ARObject.GetComponent<ARTrackedMultiImageManager>().imageTrackedText.text == "exitdoor")
        {
            if (!flag_arPortal)
            {
                ARPortalObject.SetActive(true);
                flag_arPortal = true;
            }
        }



        InventoryManager.instance.InventoryManagement(); // 인벤토리, inventoryManagement_enable이 false면 작동안함
    }
}
