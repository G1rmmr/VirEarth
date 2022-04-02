using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public float hp, time;

    // Start is called before the first frame update
    void Start()
    {

    }
    // Update is called once per frame
    void Update()
    {
        hp -= Time.deltaTime;

        if (hp == 0)
        {
            GameOverLoad.Instance.LoadScene("Start");
        }
    }
}
