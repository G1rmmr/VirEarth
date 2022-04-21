using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fog_controller : MonoBehaviour
{
    ParticleSystem ps;
    ParticleSystem.MainModule psMain;
    ParticleSystem.MinMaxGradient color;
    Color fogColor;

    void Start()
    {
        ps = GetComponent<ParticleSystem>();
        psMain = ps.main;
        color = new ParticleSystem.MinMaxGradient();
        color.mode = ParticleSystemGradientMode.Color;

        //SetValue();
        color.color = fogColor;
        //psMain.startColor = color;
    }

    void SetValue()
    {
        fogColor = new Color(1.0f, 1.0f, 1.0f, 1.0f);
    }
   
    // Update is called once per frame
    void Update()
    {
        
    }
}
