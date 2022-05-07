using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bgm_manager : MonoBehaviour
{
    [SerializeField] AudioSource start, poisoned, puzzle;
    [SerializeField] GameObject gps;

    public static Bgm_manager intnstance;
    private void Awake()
    {
        intnstance = this;
    }

    private int nowBGM = 0;
    //public static HPManager instance;
    private int pFlag = 0, zFlag = 1;
    // Start is called before the first frame update
    void Start()
    {
        start.Play();
        StartCoroutine("eventProcess");
    }
    public void pasueBGM()
    {
        switch (nowBGM)
        {
            case 0: 
                start.Pause();
                break;
            case 1:
                poisoned.Pause();
                break;
            case 2:
                puzzle.Pause();
                break;
        }
    }
    public void playBGM()
    {
        switch (nowBGM)
        {
            case 0:
                start.Play();
                break;

            case 1:
                poisoned.Play();
                break;

            case 2:
                puzzle.Play();
                break;
        }
    }
    IEnumerator eventProcess()
    {
        while (true){ 
            
            if ((HPManager.instance.hp / HPManager.instance.maxHp) * 100 <= 50 && pFlag == 0)
            {
                start.Pause();
                poisoned.Play();

                nowBGM = 1;
                pFlag = 1;
                zFlag = 0;
            }
            if (gps.GetComponent<gps>().isInB == false && zFlag == 0)
            {
                poisoned.Pause();
                puzzle.Play();

                nowBGM = 2;
                zFlag = 1;
            }
            yield return null;
        }
    }
}
