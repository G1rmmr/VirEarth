using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameStart : MonoBehaviour
{
    public void MainStageOpen()
    {
        LoadingSceneManager.Instance.LoadScene("Main");
        //GameOverLoad.Instance.LoadScene("Main");
    }
    void Start()
    {

    }
    private void Update()
    {

    }
}
