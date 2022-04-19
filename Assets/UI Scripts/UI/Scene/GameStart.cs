using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameStart : MonoBehaviour
{
    public void MainStageOpen()
    {
        //LoadingSceneManager.Instance.LoadScene("Main");
        SceneManager.LoadScene("Intro");
    }
    void Start()
    {

    }
    private void Update()
    {

    }
}
