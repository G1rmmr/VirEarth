using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bgm_manager : MonoBehaviour
{
    [SerializeField] AudioSource start, poisoned, puzzle;
    [SerializeField] GameObject gps;

    public static HPManager instance;
    private int pFlag = 0, zFlag = 0;
    // Start is called before the first frame update
    void Start()
    {
        start.Play();
        StartCoroutine("eventProcess");
    }
    IEnumerator eventProcess()
    {
        while (true){
            if (instance.hp <= 50 && pFlag == 0)
            {
                start.Pause();
                poisoned.Play();
                pFlag = 1;
            }
            if (gps.GetComponent<gps>().isInB == false && zFlag == 0)
            {
                poisoned.Pause();
                puzzle.Play();
                zFlag = 1;
            }
            yield return null;
        }
    }
}
