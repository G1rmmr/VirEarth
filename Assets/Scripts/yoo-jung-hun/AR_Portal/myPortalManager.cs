using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class myPortalManager : MonoBehaviour
{
    //This materials matter needs to be optimizated!
    public Material[] materials;
    public GameObject[] objects;
    [SerializeField] AudioSource genSnd;

    private Vector3 camPostionInPortalSpace;
    private int flag = 0;

    bool wasInFront;
    bool inOtherWorld;
    bool hasCollided;

    // Start is called before the first frame update
    void Start()
    {
        SetMaterials(false);
    }

    void SetMaterials(bool fullRender)
    {
        var stencilTest = fullRender ? CompareFunction.NotEqual : CompareFunction.Equal;

        foreach (var mat in materials)
        {
            mat.SetInt("_StencilComp", (int)stencilTest);
        }
        objects[0].SetActive(fullRender);
        if (fullRender && flag == 0)
        {
            genSnd.Play();
            flag = 1;
        }
        if (!fullRender && flag == 1)
        {
            genSnd.Play();
            Bgm_manager.intnstance.playBGM();
            flag = 0;
        }
    }

    //Set bidirectional function
    bool GetIsInFront()
    {
        GameObject MainCamera = GameObject.FindGameObjectWithTag("MainCamera");
        Vector3 worldPos = MainCamera.transform.position + MainCamera.transform.forward * Camera.main.nearClipPlane;
        camPostionInPortalSpace = transform.InverseTransformPoint(worldPos);
        return camPostionInPortalSpace.y >= 0 ? true : false;
    }

    private void OnTriggerEnter(Collider collider)
    {
        GameObject MainCamera = GameObject.FindGameObjectWithTag("MainCamera");
        if (collider.transform != MainCamera.transform)
            return;
        wasInFront = GetIsInFront();
        hasCollided = true;

    }

    // Update is called once per frame
    void OnTriggerExit(Collider collider)
    {
        GameObject MainCamera = GameObject.FindGameObjectWithTag("MainCamera");
        if (collider.transform != MainCamera.transform)
            return;
        hasCollided = false;
    }

    void whileCameraColliding()
    {
        if (!hasCollided)
            return;
        bool isInFront = GetIsInFront();
        if ((isInFront && !wasInFront) || (wasInFront && !isInFront))
        {
            inOtherWorld = !inOtherWorld;
            SetMaterials(inOtherWorld);
        }
        wasInFront = isInFront;
    }

    private void OnDestroy()
    {
        SetMaterials(true);
    }

    private void Update()
    {
        whileCameraColliding();
    }
}
