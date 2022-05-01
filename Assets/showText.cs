using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class showText : MonoBehaviour
{
    public GameObject textObject;
    public Text displayText;

    public static showText instance;

    private void Awake()
    {
        instance = this;
    }

    public void ShowText(string informationText)
    {
        displayText.text = informationText;
        textObject.SetActive(true);
        Invoke("hideText",3f);
    }

    void hideText()
    {
        textObject.SetActive(false);
    }
}
