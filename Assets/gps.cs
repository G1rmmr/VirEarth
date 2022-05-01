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
    public int rateA = 0;
    public int rateB = 0;
    public bool isInB = false;
    public bool isInA = false;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void startGps()
    {
        StartCoroutine(Gps_manger());
    }

    IEnumerator Gps_manger()
    {
        while (true)
        {
            if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                Permission.RequestUserPermission(Permission.FineLocation);
                while (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
                {
                    yield return null;
                }
            }
            if (!Input.location.isEnabledByUser)
            {
                data[3].text = "GPS Unable.";
            }
            Input.location.Start();
            while (Input.location.status == LocationServiceStatus.Initializing && delay < maxtime)
            {
                yield return new WaitForSeconds(1.0f);
                delay++;
            }
            if (Input.location.status == LocationServiceStatus.Failed || Input.location.status == LocationServiceStatus.Stopped)
            {
                data[3].text = "Failed";
            }
            if (delay >= maxtime)
            {
                data[3].text = "Time Over";
            }

            sec++;
            data[0].text = "Latitude : " + Input.location.lastData.latitude.ToString();
            data[1].text = "Longitude : " + Input.location.lastData.longitude.ToString();
            //data[2].text = "Altitude : " + Input.location.lastData.altitude.ToString();
            data[3].text = "GPS ON.  " + sec + "times renewed";

            //B_A 37.37476, 126.63353
            //B-B 37.37456, 126.63393
            //A 37.37463, 126.63307
            if (IsIN(37.37476, 126.63353)) //B_A 검사
            {
                isIn[0].text = "in B_A";
                rateB++;
            }
            else if (IsIN(37.37456, 126.63393)) //B_B 검사
            {
                isIn[0].text = "in B_B";
                rateB++;
            }
            else if (IsIN(37.37463, 126.63307)) //A 검사
            {
                isIn[0].text = "in A";
                rateA++;
            }
            else
            {
                isIn[0].text = "not in";
            }
            countRate++;

            //GPS 정확도 검사
            if (countRate == 30)
            {
                if (AccuracyTest(rateB))
                {
                    isInA = false;
                    isInB = true;
                    isIn[1].text = "in B now";
                }
                else if (AccuracyTest(rateA))
                {
                    isInA = true;
                    isInB = false;
                    isIn[1].text = "in A now";
                }
                else
                {
                    isInA = false;
                    isInB = false;
                    isIn[1].text = "not in now";
                }
                countRate = 0;
                rateA = 0;
                rateB = 0;
            }

            yield return new WaitForSeconds(1.0f);
        }
        
        //StartCoroutine(Gps_manger());

    }
       

    private bool IsIN(double x, double y)
    {
        if (Math.Abs(Input.location.lastData.latitude - x) < 0.0002 && Math.Abs(Input.location.lastData.longitude - y) < 0.0003)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    private bool AccuracyTest(int rate)
    {
        if (rate > 19) { return true; }
        else return false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}