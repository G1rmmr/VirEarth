using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SettingScript : MonoBehaviour
{
    [SerializeField]
    private Slider volumeSlider;

    public void VolumeControl()
    {
        float volume = volumeSlider.value;

        AudioListener.volume = volume; 
    }
}
