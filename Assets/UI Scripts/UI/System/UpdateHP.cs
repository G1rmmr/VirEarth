using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpdateHP : MonoBehaviour
{
    public Slider hpBar;
    public float maxHp;
    public GameManager manager;

    void Update()
    {
        hpBar.value = manager.hp / maxHp;
    }
}
