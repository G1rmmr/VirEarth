using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class HPManager : MonoBehaviour
{
    public static HPManager instance; // 인스턴스

    public float hp;

    public bool enable = false;

    [SerializeField] public int maxHp, damage;
    [SerializeField] private Slider hpBar;
    [SerializeField] private GameObject hpBarActive;
    [SerializeField] private Image Poisoned;
    [SerializeField] private Image Almost_Dead;

    private void Awake()
    {
        instance = this;
    }

    public void GameOver(float hp)
    {
        if (hp <= 0)
            SceneManager.LoadScene("GameOverScene");
        StopCoroutine("HPManagement");
    }

    private IEnumerator HPManagement()
    {
        Color tempColor = Color.white;
        int beat;
        while (true)
        {
            if (!enable)
            {
                hpBarActive.SetActive(false);
                tempColor.a = 0f;
                Poisoned.color = tempColor;
                Almost_Dead.color = tempColor;
                yield return new WaitForSeconds(1.0f);
                continue;
            }
            hpBarActive.SetActive(true);
            hp -= 1;
            hpBar.value = hp / maxHp;
            

            yield return new WaitForSeconds(0.1f);
            if (hp >= (float)maxHp * 3.0f / 4.0f) // hp가 3/4이상일 때
            {
                tempColor.a = 0f;
                Poisoned.color = tempColor;
                Almost_Dead.color = tempColor;
            }
            else if (hp > (float)maxHp / 4.0f)      // hp가 3/4 ~ 1/4일 때
            {
                tempColor.a = 0f;
                Almost_Dead.color = tempColor;

                beat = (int)hp % 20;
                if (beat < 10)
                {
                    tempColor.a = 1f - (float)(beat / 10.0f);
                }
                else
                {
                    tempColor.a = (float)((beat - 10.0f) / 10.0f);
                }
                Poisoned.color = tempColor;
            }
            else if (hp > 0)                        // hp가 1/4 이하일 때
            {
                beat = (int)hp % 10;
                if (beat < 5)
                {
                    tempColor.a = 1f - (float)(beat * 2.0f / 10.0f);
                }
                else
                {
                    tempColor.a = (float)((beat - 5.0f) * 2.0f / 10.0f);
                }
                Poisoned.color = tempColor;
                Almost_Dead.color = tempColor;
            }
            else
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
        //hp = maxHp;
        hpBarActive.SetActive(false);
        StartCoroutine(HPManagement());
    }
}
