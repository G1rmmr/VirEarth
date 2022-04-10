using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;

public class gps : MonoBehaviour
{
    public Text[] data = new Text[4];
    public Text[] isIn = new Text[2];
    public float delay;
    public float maxtime = 5.0f;
    public int sec = 0;
    public int countRate = 0;
    public int rate = 0;
    public bool isInB = false;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(Gps_manger());
    }

    IEnumerator Gps_manger()
    {
        if(!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            while(!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                yield return null;
            }
        }
        if(!Input.location.isEnabledByUser)
        {
            data[3].text = "GPS Unable.";
        }
        Input.location.Start();
        while(Input.location.status == LocationServiceStatus.Initializing && delay < maxtime )
        {
            yield return new WaitForSeconds(1.0f);
            delay++;
        }
        if(Input.location.status == LocationServiceStatus.Failed || Input.location.status == LocationServiceStatus.Stopped)
        {
            data[3].text = "Failed";
        }
        if(delay >= maxtime)
        {
            data[3].text = "Time Over";
        }
        
        sec++;
        data[0].text = "Latitude : " + Input.location.lastData.latitude.ToString();
        data[1].text = "Longitude : " + Input.location.lastData.longitude.ToString();
        //data[2].text = "Altitude : " + Input.location.lastData.altitude.ToString();
        data[3].text = "GPS ON.  "+sec + "times renewed";
        
        //B동 내부 검사
        if (Math.Abs(Input.location.lastData.latitude - 37.37476) < 0.0002 && Math.Abs(Input.location.lastData.longitude - 126.63353) < 0.0003)
        {
            isIn[0].text = "in B_A";
            rate++;
        }
        else if (Math.Abs(Input.location.lastData.latitude - 37.37456) < 0.0002 && Math.Abs(Input.location.lastData.longitude - 126.63393) < 0.0003)
        {
            isIn[0].text = "in B_B";
            rate++;
        }
        else
        {
            isIn[0].text = "not in B";
        }
        countRate++;

        //GPS 정확도 검사
        if(countRate == 40)
        {
            if(rate > 26)
            {
                isInB = true;
                isIn[1].text = "in B now";
            }
            else
            {
                isInB = false;
                isIn[1].text = "not in B now";
            }
            countRate = 0;
            rate = 0;
        }

        yield return new WaitForSeconds(1.0f);
        StartCoroutine(Gps_manger());

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}