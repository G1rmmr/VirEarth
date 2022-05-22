using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System;

public class ARTrackedMultiImageManager : MonoBehaviour
{
    [SerializeField]
    private GameObject[] trackedPrefabs; // 이미지를 인식했을 때 출력되는 프리팹 목록

    [SerializeField] AudioSource itemPkdSnd; // 픽업 사운드

    [SerializeField]
    private GameObject pickupPictogram;  // 픽업 픽토그램

    public Text imageTrackedText; // 인식된 물체 표시

    private bool hasKey = false;
    private bool hasVaccine = false;

    private Vector3 thumbPosition;  // 엄지 위치
    private Vector3 indexPosition;  // 검지 위치
    private Vector3 prefabPosition; // 물체 위치

    // 이미지를 인식했을 때 출력되는 오브젝트 목록
    private Dictionary<string, GameObject> spawnedObjects = new Dictionary<string, GameObject>();
    private ARTrackedImageManager trackedImageManager;

    [SerializeField]
    private PuzzleEffect puzzleEffect;

    private void Awake()
    {
        // AR Session Origin 오브젝트에 컴포넌트로 적용했을 때 사용 가능
        trackedImageManager = GetComponent<ARTrackedImageManager>();

        // trackedPrefabs 배열에 있는 모든 프리팹을 Instantiate()로 생성한 후
        // spawnedObjects Dictionary에 저장, 비활성화
        // 카메라에 이미지가 인식되면 이미지와 동일한 이름의 key에 있는 value 오브젝트를 출력
        foreach(GameObject prefab in trackedPrefabs)
        {
            GameObject clone = Instantiate(prefab); // 오브젝트 생성
            clone.name = prefab.name;               // 생성한 오브젝터의 이름 설정
            clone.SetActive(false);                 // 오브젝트 비활성화
            spawnedObjects.Add(clone.name, clone);  // Dictionary 자료구조에 오브젝트 저장
        }
    }

    private void OnEnable()
    {
        trackedImageManager.trackedImagesChanged += OnTrackedImagesChanged;
    }

    private void OnDisable()
    {
        trackedImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        // 카메라에 이미지가 인식되었을 때
        foreach(var trackedImage in eventArgs.added)
        {
            UpdateImage(trackedImage);
        }

        // 카메라에 이미지가 인식되어 업데이트되고 있을 때
        foreach(var trackedImage in eventArgs.updated)
        {
            UpdateImage(trackedImage);
        }

        // 인식되고 있는 이미지가 카메라에서 사라졌을 때
        foreach(var trackedImage in eventArgs.removed)
        {
            spawnedObjects[trackedImage.name].SetActive(false);
        }
    }

    private void UpdateImage(ARTrackedImage trackedImage)
    {
        string name = trackedImage.referenceImage.name;
        GameObject trackedObject = spawnedObjects[name];

        // 이미지의 추적 상태가 추적중(Tracking)일 때
        if (trackedImage.trackingState == TrackingState.Tracking)
        {
            imageTrackedText.text = name;
            trackedObject.transform.position = trackedImage.transform.position;
            
            // locker - key와 pictogram
            if (trackedObject.tag == "key" && !hasKey && Dial.instance.clearInst)
            {
                trackedObject.SetActive(true);
                pickupPictogram.SetActive(true);
            }
            else if (trackedObject.tag == "key" && !hasKey)
            {
                trackedObject.SetActive(true);
            }

            // charger - vaccine만
            //if (trackedObject.tag == "vaccine" && !hasVaccine && Dial.instance.clearChargerInst)
            if (trackedObject.tag == "vaccine" && !hasVaccine && InventoryManager.instance.equip_cardkey)
            {
                trackedObject.SetActive(true);
            }

            // 엄지와 검지의 위치
            thumbPosition = new Vector3(ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[4].x,
                        ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[4].y,
                        ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.depth_estimation);
            indexPosition = new Vector3(ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].x,
                        ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.joints[8].y,
                        ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.depth_estimation);

            // spawn된 prefab 위치 : World → Viewport
            prefabPosition = Camera.main.WorldToViewportPoint(trackedObject.transform.position);

            // key, vaccine 획득 시 이벤트 처리
            if (HandTracking.isHandOn && IsTouch() && IsPickUp())
            {
                itemPkdSnd.Play();
                trackedObject.SetActive(false);

                switch (trackedObject.tag)
                {
                    case "key":
                        if (Dial.instance.clearInst)
                        {
                            pickupPictogram.SetActive(false);
                            hasKey = true;
                            showText.instance.ShowText("열쇠를 획득하였습니다");
                            InventoryManager.instance.canUseItem[1] = true;
                        }
                        break;
                    case "vaccine":
                        if (Dial.instance.clearChargerInst)
                        {
                            hasVaccine = true;
                            showText.instance.ShowText("백신을 획득하였습니다");
                            InventoryManager.instance.canUseItem[3] = true;
                        }
                        break;
                }
            }       
        }

        else if (trackedImage.trackingState == TrackingState.Limited)
        {
            trackedObject.SetActive(false);
            thumbPosition = new Vector3(0,0,0);
            indexPosition = new Vector3(1,1,0);
        }
    }

    private bool IsTouch() // 검지가 물체에 가까이 있으면 Touch
    {
        float indexx = indexPosition.x;
        float indexy = indexPosition.y;
        float prefabx = prefabPosition.x;
        float prefaby = prefabPosition.y;

        double dist = Math.Sqrt(Math.Pow(indexx - prefabx, 2) + Math.Pow(indexy - prefaby, 2));

        if (dist < 0.15) 
            return true;
        else 
            return false;
    }

    private bool IsPickUp() // 검지와 엄지의 위치가 가까우면 PickUp
    {
        float thumbx = thumbPosition.x;
        float thumby = thumbPosition.y;
        float indexx = indexPosition.x;
        float indexy = indexPosition.y;

        double dist = Math.Sqrt(Math.Pow(indexx - thumbx, 2) + Math.Pow(indexy - thumby, 2));

        if (dist < 0.07)
            return true;
        else
            return false;
    }
}
