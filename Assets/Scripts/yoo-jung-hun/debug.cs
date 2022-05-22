using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class debug : MonoBehaviour
{
    public GameObject menu;
    [SerializeField] private GameObject FogEffect;
    [SerializeField] private GameObject imgText;

    bool control = false;
    public void onoff()
    {
        if (control) 
        {
            menu.SetActive(false);
            control = false;
        }
        else
        {
            menu.SetActive(true);
            control = true;
        }
    }
    public void gpsonoff()
    {
        StartCoroutine(gpsonoff_());
    }
    private IEnumerator gpsonoff_()
    {
        bool tmp = gps.instance.isInB;
        if (tmp)
        {
            yield return new WaitForSeconds(5.0f);
            gps.instance.isInB = false;
        }
        else
        {
            yield return new WaitForSeconds(5.0f);
            gps.instance.isInB = true;
        }
    }
    public void keyonoff()
    {
        bool tmp = InventoryManager.instance.canUseItem[1];
        if (tmp)
        {
            InventoryManager.instance.canUseItem[1] = false;
        }
        else
        {
            InventoryManager.instance.canUseItem[1] = true;
        }
    }
    public void cardkeyonoff()
    {
        bool tmp = InventoryManager.instance.canUseItem[2];
        if (tmp)
        {
            InventoryManager.instance.canUseItem[2] = false;
        }
        else
        {
            InventoryManager.instance.canUseItem[2] = true;
        }
    }

    public void vaccineonoff()
    {
        bool tmp = InventoryManager.instance.canUseItem[3];
        if (tmp)
        {
            InventoryManager.instance.canUseItem[3] = false;
        }
        else
        {
            InventoryManager.instance.canUseItem[3] = true;
        }
    }

    public void HPplus100()
    {
        HPManager.instance.hp += 100;
    }
    public void HPminus100()
    {
        HPManager.instance.hp -= 100;
    }

    public void fogonoff()
    {
        if (FogEffect.activeSelf)
            FogEffect.SetActive(false);
        else
            FogEffect.SetActive(true);
    }

    public void showimgtracktext()
    {
        if (imgText.activeSelf)
            imgText.SetActive(false);
        else
            imgText.SetActive(true);
    }

    public void antionoff()
    {
        bool tmp = InventoryManager.instance.canUseItem[0];
        if (tmp)
        {
            InventoryManager.instance.canUseItem[0] = false;
        }
        else
        {
            InventoryManager.instance.canUseItem[0] = true;
        }
    }
}
