using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;

public class gps : MonoBehaviour
{
    public Text[] data = new Text[4];
    public Text[] isIn = new Text[3];
    public float delay;
    public float maxtime = 5.0f;
    public int sec = 0;
    public bool isInX = false;
    public bool isInY = false;
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
        data[2].text = "Altitude : " + Input.location.lastData.altitude.ToString();
        data[3].text = "GPS ON.  "+sec;
        

        if (Math.Abs(Input.location.lastData.latitude - 37.37475) < 0.0002)
        {
            isIn[0].text = "LATI IN";
            isInX = true;
        }
        else
        {
            isIn[0].text = "LATI OUT";
            isInX = false;
        }

        if (Math.Abs(Input.location.lastData.longitude - 126.63358) < 0.0003)
        {
            isIn[1].text = "LOGI IN";
            isInY = true;
        }
        else
        {
            isIn[1].text = "LOGI OUT";
            isInY = false;
        }

        if(isInX && isInY)
        {
            isIn[2].text = "IN B";
        }
        else
        {
            isIn[2].text = "OUT of B";
        }

        yield return new WaitForSeconds(1.0f);
        StartCoroutine(Gps_manger());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
