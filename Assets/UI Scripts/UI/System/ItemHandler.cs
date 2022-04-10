using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemHandler : MonoBehaviour
{
    [SerializeField] private Button b0, b1,b2, b3, b4;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(HandTracking.instance.IsFoldFinger(true, false, true, true, true))
        {
            ColorBlock colorBlock = b1.colors;
            colorBlock.selectedColor = Color.red;
            b1.colors = colorBlock;
        }
        else if (HandTracking.instance.IsFoldFinger(true, false, false, true, true))
        {
            ColorBlock colorBlock = b2.colors;
            colorBlock.selectedColor = Color.red;
            b2.colors = colorBlock;
        }
        else if (HandTracking.instance.IsFoldFinger(true, false, false, false, true))
        {
            ColorBlock colorBlock = b3.colors;
            colorBlock.selectedColor = Color.red;
            b3.colors = colorBlock;
        }
        else if (HandTracking.instance.IsFoldFinger(true, false, false, false, false))
        {
            ColorBlock colorBlock = b4.colors;
            colorBlock.selectedColor = Color.red;
            b4.colors = colorBlock;
        }
        else
        {
            ColorBlock colorBlock = b0.colors;
            colorBlock.selectedColor = Color.red;
            b0.colors = colorBlock;
        }
    }
}
