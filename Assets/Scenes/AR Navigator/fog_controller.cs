using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fog_controller : MonoBehaviour
{
    public static fog_controller instance;

    ParticleSystem ps;
    ParticleSystem.MainModule psMain;
    ParticleSystem.MinMaxGradient color;
    Color fogColor;
    Color PoisonFogColor;

    void Start()
    {
        ps = GetComponent<ParticleSystem>();
        psMain = ps.main;
        color = new ParticleSystem.MinMaxGradient();
        color.mode = ParticleSystemGradientMode.Color;

        color = psMain.startColor;
        PoisonFogColor = color.color;
    }

    public void SetNormalFog()
    {
        fogColor = new Color(1.0f, 1.0f, 1.0f, 0.5f);
        color.color = fogColor;
        psMain.startColor = color;
    }

    public void SetPoisonFog()
    {
        color.color = PoisonFogColor;
        psMain.startColor = color;
    }
}
