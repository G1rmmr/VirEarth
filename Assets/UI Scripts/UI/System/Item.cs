using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ItemType
{
    Equipment,
    Consumables,
    Etc
}
[System.Serializable]
public class Item
{
    public string itemName;
    public Sprite itemImage;
    public ItemType itemType;

    public bool Use()
    {
        return false;
    }
}
