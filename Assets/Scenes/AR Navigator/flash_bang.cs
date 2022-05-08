using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class flash_bang : MonoBehaviour
{
    private Image WhiteImage;
    private AudioSource WhiteNoise;

    [SerializeField] private Text debug;

    [SerializeField] Image Effect;

    // Start is called before the first frame update
    void Start()
    {
        WhiteImage = GameObject.FindGameObjectWithTag("WhiteImage").GetComponent<Image>();
        WhiteNoise = GameObject.FindGameObjectWithTag("WhiteNoise").GetComponent<AudioSource>();
        StartCoroutine(WhiteFade());
    }

    private IEnumerator WhiteFade()
    {

        WhiteImage.color = new Vector4(1, 1, 1, 1);
        Effect.color = WhiteImage.color;
        WhiteNoise.Play();
        debug.text = "Flash bang";

        float FadeSpeed = 1f;
        float Modifier = 0.01f;
        float WaitTime = 0;

        for(int i = 0; WhiteImage.color.a > 0; i++)
        {
            WhiteImage.color = new Vector4(1, 1, 1, FadeSpeed);
            Effect.color = WhiteImage.color;
            FadeSpeed = FadeSpeed - 0.025f;
            Modifier = Modifier * 1.5f;
            WaitTime = 0.5f - Modifier;
            if (WaitTime < 0.1f) WaitTime = 0.1f;
            WhiteNoise.volume -= 0.05f;
            yield return new WaitForSeconds(WaitTime);
        }

        WhiteNoise.Stop();
        WhiteNoise.volume = 1;
    }
}
