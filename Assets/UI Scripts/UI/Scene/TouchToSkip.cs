using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchToSkip : MonoBehaviour
{
    [SerializeField] AudioSource tchSnd;
    private int flag = 1;

    void Update()
    {
        if(Input.touchCount > 0 && flag == 1)
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began && flag == 1)
            {
                flag = 0;
                tchSnd.Play();
                LoadingSceneManager.Instance.LoadScene("Main");
            } 
        }
    }
}
