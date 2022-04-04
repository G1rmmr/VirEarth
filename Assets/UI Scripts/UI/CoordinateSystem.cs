using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoordinateSystem : MonoBehaviour
{
    [SerializeField]
    public GameObject item0;

    [SerializeField]
    private GameObject item1;

    [SerializeField]
    private GameObject item2;

    [SerializeField]
    private GameObject item3;

    public static CoordinateSystem instance;

    private void Awake()
    {
        instance = this;
    }
    public void transCoord(int i, float x, float y)
    {
        switch (i)
        {
            case 0: 
                item0.transform.position = new Vector2(x * Screen.width, y * Screen.height);
                break;
            case 1: 
                item1.transform.position = new Vector2(x * Screen.width, y * Screen.height);
                break;
            case 2:
                item2.transform.position = new Vector2(x * Screen.width, y * Screen.height);
                break;
            case 3:
                item3.transform.position = new Vector2(x * Screen.width, y * Screen.height);
                break;
        }
    }

}
