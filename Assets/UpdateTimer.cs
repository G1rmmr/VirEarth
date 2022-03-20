using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpdateTimer : MonoBehaviour
{
    public GameManager gameManager;
    public Text minuteText;
    public Text secondText;

    // Update is called once per frame
    void Update()
    {
        minuteText.text = ((int)gameManager.time / 60).ToString("D2");
        secondText.text = ((int)gameManager.time % 60).ToString("D2");
    }
}
