using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public float hp;

    [SerializeField] private int maxHp, damage;
    [SerializeField] private Slider hpBar;

    // Start is called before the first frame update
    void Start()
    {

    }
    // Update is called once per frame
    void Update()
    {
        hp -= Time.deltaTime * damage;
        hpBar.value = hp / maxHp;

        if (hp <= 0)
        {
            GameOverLoad.Instance.LoadScene("Start");
        }
    }
}
