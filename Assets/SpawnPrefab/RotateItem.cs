using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateItem: MonoBehaviour
{

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(Vector3.up * Time.deltaTime * 50.0f, Space.World);
    }
}