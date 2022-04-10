using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoordinateSystem : MonoBehaviour
{
    [SerializeField]
    private GameObject panel;

    public static CoordinateSystem instance;

    private void Start()
    {
        panel.SetActive(false);
    }
    private void Awake()
    {
        instance = this;
    }
    public void transCoord(float x, float y)
    {
        panel.transform.position = new Vector2(x * Screen.width - 250, y * Screen.height - 20);
    }

    public void showImg()
    {
        panel.SetActive(true);
    }

    public void hideImg()
    {
        panel.SetActive(false);
    }
}
