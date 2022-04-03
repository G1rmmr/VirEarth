using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class PortalController : MonoBehaviour
{

    public GameObject HiddenWorld;
    public Material[] mats;

    private Vector3 camPosition;

    bool front;
    bool otherWorld;
    bool hasCollided;

    // Start is called before the first frame update
    void Start()
    {
        SetMaterials(false);
    }

    void SetMaterials(bool active)
    {
        var stencilTest = active ? CompareFunction.NotEqual : CompareFunction.Equal;

        foreach (var mat in mats)
        {
            mat.SetInt("_StencilComp", (int)stencilTest);
        }
    }

    bool GetIsFront()
    {
        GameObject myCamera = GameObject.FindGameObjectWithTag("MainCamera");
        Vector3 worldPos = myCamera.transform.position + myCamera.transform.forward * Camera.main.nearClipPlane;
        camPosition = transform.InverseTransformPoint(worldPos);
        return camPosition.y >= 0 ? true : false;
    }

    private void OnTriggerEnter(Collider collider)
    {
        GameObject myCamera = GameObject.FindGameObjectWithTag("MainCamera");
        if (collider.transform != myCamera.transform)
            return;

        front = GetIsFront();
        hasCollided = true;
    }

    private void OnTriggerExit(Collider collider)
    {
        GameObject myCamera = GameObject.FindGameObjectWithTag("MainCamera");
        if (collider.transform != myCamera.transform)
            return;

        hasCollided = false;
    }

    void whileCameraColliding()
    {
        if (!hasCollided)
            return;

        bool isFront = GetIsFront();

        if ((isFront && !front) || (front && !isFront))
        {
            otherWorld = !otherWorld;
            SetMaterials(otherWorld);
        }
        front = isFront;
    }

    private void OnDestroy()
    {
        SetMaterials(true);
    }

    // Update is called once per frame
    private void Update()
    {
        whileCameraColliding();
    }
}
