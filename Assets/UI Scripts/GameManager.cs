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
<<<<<<< HEAD
            GameOverLoad.Instance.LoadScene("Start");
=======
            SceneManager.LoadScene("GameOverScene");
>>>>>>> parent of 275a71c (0410)
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
<<<<<<< HEAD
        GameOver(hp);
=======

        //GameOver(hp);
        if (hp <= 0)
            GameOverLoad.Instance.LoadScene("Start");
>>>>>>> parent of 275a71c (0410)
    }
}
