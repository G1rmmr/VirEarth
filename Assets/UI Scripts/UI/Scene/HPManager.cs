using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class HPManager : MonoBehaviour
{
    public float hp;

    [SerializeField] private int maxHp, damage;
    [SerializeField] private Slider hpBar;

    public void GameOver(float hp)
    {
        if (hp <= 0)
            SceneManager.LoadScene("GameOverScene");
        StopCoroutine("HPManagement");
    }

    private IEnumerator HPManagement()
    {
        while (true)
        {
            hp -= 1;
            hpBar.value = hp / maxHp;
            yield return new WaitForSeconds(0.1f);
            if (hp <= 0)
            {
                break;
            }
        }
        GameOverLoad.Instance.LoadScene("Start");
        StopCoroutine("HPManagement");
    }
    // Start is called before the first frame update
    void Start()
    {
        hp = maxHp;
        StartCoroutine(HPManagement());
    }
}
