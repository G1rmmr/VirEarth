using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchToSkip : MonoBehaviour
{
    [SerializeField] AudioSource tchSnd;
    void Update()
    {
        if(Input.touchCount > 0)
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began)
            {
                tchSnd.Play();
                LoadingSceneManager.Instance.LoadScene("Main");
            } 
        }
    }
}
