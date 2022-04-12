using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.UI;
using System;


public class ARHintText : MonoBehaviour
{

    public static ARHintText instance;

    TextMesh text_mesh;
    ARTrackedMultiImageManager arTrackedMultiImageManager;

    void Awake()
    {
        instance = this;
    }

    void Start()
    {
      text_mesh = GetComponent<TextMesh>();
      arTrackedMultiImageManager = GameObject.Find("AR Session Origin").GetComponent<ARTrackedMultiImageManager>();
    }

    public void HintTextUpdate()
    {
        switch (arTrackedMultiImageManager.imageTrackedText.text)
        {            
            case "charger":
                text_mesh.text = "A동 엘리베이터 옆 층별 안내판에 단서가 있다.";
                break;

            case "locker":
                text_mesh.text = "4층 사물함, 17학번 남지원";
                break;

            case "fireplug":
                text_mesh.text = "백신은 502에";
                break;
        }      
    }
}
