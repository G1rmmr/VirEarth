using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public float hp;

    [SerializeField] private int maxHp, damage;
    [SerializeField] private Slider hpBar;

    public void GameOver(float hp)
    {
        if (hp <= 0)
            SceneManager.LoadScene("GameOverScene");
    }

    // Start is called before the first frame update
    void Start()
    {

    }
    // Update is called once per frame
    void Update()
    {
        hp -= Time.deltaTime * damage;
        hpBar.value = hp / maxHp;

        GameOver(hp);

        //GameOverLoad.Instance.LoadScene("Start");
    }
}
