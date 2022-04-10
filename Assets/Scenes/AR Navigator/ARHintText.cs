using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARHintText : MonoBehaviour
{
    TextMesh text_mesh;

    void Start()
    {
        text_mesh = GetComponent<TextMesh>();
        test test = GameObject.Find("AR Session Origin").GetComponent<test>();
    }

    // Update is called once per frame
    void Update()
    {
        switch (test.EventCount)
        {
            case 1:
                text_mesh.text = "A동 1층 휴대폰 충전 단자함을 인식하면 시작";
                break;

            case 2:
                text_mesh.text = "A동 엘리베이터 옆의 층별 안내판에 단서가 있다.";
                break;

            case 3:
                text_mesh.text = "4층 사물함, 17학번 남지원";
                break;

            case 4:
                text_mesh.text = "백신은 502에";
                break;
        }

    }
}
