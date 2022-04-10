using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryManager : MonoBehaviour
{
    public static InventoryManager instance; // 인스턴스

    // 인스펙터
    [SerializeField] private Text debug;
    [SerializeField] private Image[] backImage = new Image[5];

    // public 변수

    // FLAG
    private bool flag_inventoryOn;       // 인벤토리 온 오프 flag
    public bool inventoryManagement_enable;

    // private 변수
    private GestureInfo gesture;        // 제스처
    private int selectItem;             // 선택한 아이템 번호 (0~3, 4개, -1은 null)
    private List<int> selectItemList = new List<int>();
    private int[] selectItemArray = new int[3];

    private void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        flag_inventoryOn = false;
        inventoryManagement_enable = true;
        selectItem = -1;
        for (int i = 0; i < 5; i++)
        {
            backImage[i].enabled = false;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    

    public void InventoryManagement()
    {
        if (inventoryManagement_enable == false)
            return;
        if (!HandTracking.isHandOn)
            return;
        debug.text = "It is Debug Text\n";
        if (flag_inventoryOn)
            debug.text += "flag : True\n";
        else
            debug.text += "flag : False\n";
        InventoryOn();  // 손바닥 상태에서 손가락을 전부 피면 온, 주먹을 쥐면 오프
        if (flag_inventoryOn)
        {
            for (int i = 0; i < 5; i++)
            {
                backImage[i].enabled = false;
            }
            DisplayInventory();
            SelectItem();
            if ((selectItemList[0] == selectItemList[1]) && (selectItemList[1] == selectItemList[2]))
            {
                debug.text = debug.text + "item select : " + selectItemList[2] + "\n";
                if (selectItemList[2] == -1)
                    backImage[4].enabled = true;
                else
                    backImage[selectItemList[2]].enabled = true;
            }
        }
    }

    private void InventoryOn()
    {
        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side != HandSide.Palmside) // 손바닥이 아니면 즉시 종료
            return;
        if (HandTracking.instance.IsFoldFinger(false, false, false, false, false) && !flag_inventoryOn)
        {
            debug.text += "Inventory ON\n";
            flag_inventoryOn = true;
            CoordinateSystem.instance.showImg();
        }
        else if (HandTracking.instance.IsFoldFinger(true, true, true, true, true) && flag_inventoryOn)
        {
            debug.text += "Inventory OFF\n";
            flag_inventoryOn = false;
            CoordinateSystem.instance.hideImg();
        }
        return;
    }

    private void DisplayInventory()
    {
        // ItemSystem.get0;
        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side != HandSide.Palmside) // 손바닥이 아니면 즉시 종료
            return;
        /*if (ItemSystem.instance.get0)
            CoordinateSystem.instance.transCoord(0, GetX(8), GetY(8));
        if (ItemSystem.instance.get1)
            CoordinateSystem.instance.transCoord(1, GetX(12), GetY(12));
        if (ItemSystem.instance.get2)
            CoordinateSystem.instance.transCoord(2, GetX(16), GetY(16));
        if (ItemSystem.instance.get3)
            CoordinateSystem.instance.transCoord(3, GetX(20), GetY(20));*/
        CoordinateSystem.instance.transCoord(HandTracking.instance.GetX(0), HandTracking.instance.GetY(0));

    }


    private void SelectItem()
    {
        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side != HandSide.Palmside) // 손바닥이 아니면 즉시 종료
        {
            debug.text += "SelectItem() no palm\n";
            return;
        }

        //return;
        if (HandTracking.instance.IsFoldFinger(true, false, true, true, true)) // 0번 인덱스
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
            debug.text += "item3 Select\n";
            selectItem = 3;
        }
        else
        {
            debug.text += "no search item\n";
            selectItem = -1;
        }
        selectItemList.Add(selectItem);
        if (selectItemList.Count == 4)
            selectItemList.RemoveAt(0);
    }

    public void set_inventoryManagement_enable(bool flag)
    {
        inventoryManagement_enable = flag;
    }
}
