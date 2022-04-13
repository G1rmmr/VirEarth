using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameStartEffect : MonoBehaviour
{
    [SerializeField] AudioSource efctSnd;
    [SerializeField] Text strtTxt;

    public static GameStartEffect instance;
    void Start()
    {
        gameStartEffect();
    }
    private void Awake()
    {
        instance = this;
    }
    public bool gameStartEffect()
    {
        efctSnd.Play();
        StartCoroutine("Show");
        return true;
    }
    IEnumerator Show()
    {
        strtTxt.text = "S T A R T";

        for (int i = 0; i <= 100; i++)
        {
            strtTxt.fontSize = i;
            strtTxt.color = new Vector4(1, 1, 1, 1 - (0.01f * i));
            yield return new WaitForSeconds(0.02f);
        }
    }
}
