using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialRotate : MonoBehaviour
{
    public GameObject back;
    public GameObject front;
    public GameObject particle;
    public GameObject key;

    private void Start()
    {
        back.SetActive(false);
        front.SetActive(false);
        particle.SetActive(false);
        key.SetActive(false);
    }
    // Update is called once per frame
    void Update()
    {
        if (Dial.instance.clearInst)    // 클리어
        {
            back.SetActive(false);
            front.SetActive(false);
            particle.SetActive(true);
            key.SetActive(true);
        }
        else                            // 다이얼 이벤트 실행 중
        {
            back.SetActive(true);
            front.SetActive(true);
            particle.SetActive(false);
            key.SetActive(false);
            front.transform.localEulerAngles = new Vector3(0, 0, -15.0f + Dial.instance.degree);
        }
    }
}
