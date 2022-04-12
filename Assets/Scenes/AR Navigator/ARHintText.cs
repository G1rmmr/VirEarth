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
                text_mesh.text = "A�� ���������� �� \n���� �ȳ��ǿ� �ܼ��� �ִ�.";
                break;

            case "board":
                text_mesh.text = "4�� �繰��, 17�й� ������";
                break;

            case "fireplug":
                text_mesh.text = "����� 502��";
                break;
        }      
    }
}
