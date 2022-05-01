using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class InventoryManager : MonoBehaviour
{
    public static InventoryManager instance; // 인스턴스

    // 인스펙터
    [SerializeField] private Text debug;
    [SerializeField] private Text debug_inventory;
    [SerializeField] private Image[] backImage = new Image[5];
    [SerializeField] private Image[] panelImage = new Image[5];
    [SerializeField] private Image[] selectedBoxImage = new Image[4];
    [SerializeField] private GameObject HPObject;
    [SerializeField] private AudioSource openInvenSnd, slcItmSnd, eqpItmSnd;


    // public 변수
    public bool[] canUseItem = new bool[4];
    public bool equip_key;
    public bool equip_cardkey;
    public bool equip_vaccine;

    // FLAG
    private bool flag_inventoryOn;       // 인벤토리 온 오프 flag
    public bool inventoryManagement_enable;

    // private 변수
    private GestureInfo gesture;        // 제스처
    private int selectItem;             // 선택한 아이템 번호 (0~3, 4개, 4는 null)
    private List<int> selectItemList = new List<int>();
    private int[] selectItemArray = new int[3];
    private int final_selectItem = 4;
    private int now_selectItem = 4;

    private void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        flag_inventoryOn = false;
        inventoryManagement_enable = true;
        selectItem = 4;
        for (int i = 0; i < 5; i++)
        {
            var tempColor = backImage[i].color;
            tempColor.a = 0f;
            backImage[i].color = tempColor;
        }
        for (int i = 0; i < 4; i++)
        {
            var tempColor = selectedBoxImage[i].color;
            tempColor.a = 0f;
            selectedBoxImage[i].color = tempColor;
        }
        equip_key = false;
        equip_cardkey = false;
        equip_vaccine = false;
    }


    public void InventoryManagement()
    {
        if (inventoryManagement_enable == false)
            return;
        /*if (!HandTracking.isHandOn)
            return;*/
        debug.text = "It is Debug Text\n";
        if (flag_inventoryOn)
            debug.text += "flag : True\n";
        else
            debug.text += "flag : False\n";

        InventoryOn();  // 손바닥 상태에서 손가락을 전부 피면 온, 주먹을 쥐면 오프

        if (flag_inventoryOn)
        {
            Color tempColor;
            for (int i = 0; i < 5; i++)
            {
                tempColor = backImage[i].color;
                tempColor.a = 0f;
                backImage[i].color = tempColor;
            }

            for (int i = 0; i < 4; i++)
            {
                tempColor = panelImage[i].color;
                if (canUseItem[i])                      // 아이템이 존재하면 인벤토리 색깔 진하게, 없으면 연하게.
                {
                    tempColor.a = 1f;
                    panelImage[i].color = tempColor;
                }
                else
                {
                    tempColor.a = 0.3f;
                    panelImage[i].color = tempColor;
                }
            }
            
            CoordinateSystem.instance.transCoord(HandTracking.instance.GetX(0), HandTracking.instance.GetY(0)); // display inventory
            SelectItem();

            debug.text = debug.text + "item select : " + final_selectItem.ToString() + "\n";
            tempColor = backImage[selectItemList[2]].color;
            tempColor.a = 1f;
            backImage[final_selectItem].color = tempColor;
        }
        return;
    }

    private void InventoryOn()
    {
        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side != HandSide.Palmside) // 손바닥이 아니면 즉시 종료
            return;

        if (HandTracking.instance.IsFoldFinger(false, false, false, false, false) && !flag_inventoryOn)
        {
            openInvenSnd.Play();//인벤토리 오픈 사운드

            debug.text += "Inventory ON\n";
            flag_inventoryOn = true;
            CoordinateSystem.instance.showImg();
            
        }
        else if (HandTracking.instance.IsFoldFinger(true, true, true, true, true) && flag_inventoryOn)
        {
            eqpItmSnd.Play();//인벤토리 오픈 사운드

            debug.text += "Inventory OFF\n";
            flag_inventoryOn = false;
            CoordinateSystem.instance.hideImg();

            if (final_selectItem == 4)
                return;

            debug_inventory.text = final_selectItem.ToString();

            if (canUseItem[final_selectItem])   // 선택한 아이템이 사용할 수 있으면(갖고 있으면)
            {
                if (final_selectItem == 0)  // 항생제
                {
                    //꿀꺽 사운드

                    if (HPObject.activeSelf == false)
                        return;
                    StartCoroutine(antibioticDisplay());
                    HPManager.instance.hp = HPManager.instance.maxHp;
                }
                else if (final_selectItem == 1)
                {
                    eqpItmSnd.Play();//일반 아이템 장착 사운드

                    var tempColor = selectedBoxImage[1].color;
                    tempColor.a = 1f;
                    selectedBoxImage[1].color = tempColor;
                    equip_key = true;
                }
                else if (final_selectItem == 2)
                {
                    var tempColor = selectedBoxImage[2].color;
                    tempColor.a = 1f;
                    selectedBoxImage[2].color = tempColor;
                    equip_cardkey = true;
                }
                else if (final_selectItem == 3)
                {
                    var tempColor = selectedBoxImage[3].color;
                    tempColor.a = 1f;
                    selectedBoxImage[3].color = tempColor;
                    equip_vaccine = true;
                }
                canUseItem[final_selectItem] = false;   // 아이템 사용 완료

            }

            return;
        }
    }


    private void SelectItem()
    {
        /*if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side != HandSide.Palmside) // 손바닥이 아니면 즉시 종료
        {
            debug.text += "SelectItem() no palm\n";
            return;
        }*/
        // *******************************************************************************************************
        if (HandTracking.instance.IsFoldFinger(false, false, false, false, false)) // 4번 인덱스
        {
            debug.text += "no search item\n";
            selectItem = 4;
        }
        else if (HandTracking.instance.IsFoldFinger(true, false, true, true, true)) // 0번 인덱스
        {
            debug.text += "item0 Select\n";
            selectItem = 0;
        }
        else if (HandTracking.instance.IsFoldFinger(true, false, false, true, true)) // 1번 인덱스
        {
            debug.text += "item1 Select\n";
            selectItem = 1;
        }
        else if (HandTracking.instance.IsFoldFinger(true, false, false, false, true)) // 2번 인덱스
        {
            debug.text += "item2 Select\n";
            selectItem = 2;
        }
        else if (HandTracking.instance.IsFoldFinger(true, false, false, false, false)) // 3번 인덱스
        {
            debug.text += "item2 Select\n";
            selectItem = 3;
        }
        // *******************************************************************************************************

        /*if (HandTracking.instance.getFingers(false, false, false, false)) // 4번 인덱스
        {
            debug.text += "no search item\n";
            selectItem = 4;
        }
        else if (HandTracking.instance.getFingers(false, true, true, true)) // 0번 인덱스
        {
            debug.text += "item0 Select\n";
            selectItem = 0;
        }
        else if (HandTracking.instance.getFingers(false, false, true, true)) // 1번 인덱스
        {
            debug.text += "item1 Select\n";
            selectItem = 1;
        }
        else if (HandTracking.instance.getFingers(false, false, false, true)) // 2번 인덱스
        {
            debug.text += "item2 Select\n";
            selectItem = 2;
        }*/
        // *******************************************************************************************************



        selectItemList.Add(selectItem);
        if (selectItemList.Count == 8)
            selectItemList.RemoveAt(0);

        final_selectItem = check_selectItemList(selectItemList);

        if(now_selectItem != final_selectItem)
            slcItmSnd.Play();//아이템 선텍 사운드

        now_selectItem = final_selectItem;
    }

    private int check_selectItemList(List<int> ls)
    {
        int res = 0;
        int[] tmp = new int[5] { 0, 0, 0, 0, 0 };
        foreach(var a in ls)
        {
            tmp[a]++;
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = i+1; j < 5; j++)
            {
                if (tmp[i] < tmp[j])
                    res = j;
            }
        }
        return res;
    } 

    public void set_inventoryManagement_enable(bool flag)
    {
        inventoryManagement_enable = flag;
    }

    private IEnumerator antibioticDisplay()
    {
        Color tempColor;
        tempColor = selectedBoxImage[0].color;

        float minus = 0.8f;
        while (true)
        {
            tempColor.a = 1.0f - minus;
            selectedBoxImage[0].color = tempColor;
            if (minus >= 0.0f)
                break;
            yield return new WaitForSeconds(0.1f);
            minus -= 0.2f;
            if (minus < 0.0f)
                minus = 0.0f;
        }
        minus = 0.0f;
        while (true)
        {
            tempColor.a = 1.0f - minus;
            selectedBoxImage[0].color = tempColor;
            if (minus >= 1.0f)
                break;
            yield return new WaitForSeconds(0.1f);
            minus += 0.1f;
            if (minus > 1.0f)
                minus = 1.0f;
        }
    }
    public void distroy_key_display()
    {
        var tempColor = selectedBoxImage[1].color;
        tempColor.a = 0f;
        selectedBoxImage[1].color = tempColor;
    }
}
