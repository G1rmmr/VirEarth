using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoordinateSystem : MonoBehaviour
{
    [SerializeField]
    public GameObject item0;
    public Image item0Image;

    [SerializeField]
    private GameObject item1;
    public Image item1Image;

    [SerializeField]
    private GameObject item2;
    public Image item2Image;

    [SerializeField]
    private GameObject item3;
    public Image item3Image;

    public static CoordinateSystem instance;

    private void Start()
    {
        item0Image = item0.GetComponent<Image>();
        item0Image.enabled = false;

        item1Image = item1.GetComponent<Image>();
        item1Image.enabled = false;

        item2Image = item2.GetComponent<Image>();
        item2Image.enabled = false;

        item3Image = item3.GetComponent<Image>();
        item3Image.enabled = false;
    }
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

    public void showImg()
    {
        item0Image.enabled = true;
        item1Image.enabled = true;
        item2Image.enabled = true;
        item3Image.enabled = true;
    }

    public void hideImg()
    {
        item0Image.enabled = false;
        item1Image.enabled = false;
        item2Image.enabled = false;
        item3Image.enabled = false;
    }
}
