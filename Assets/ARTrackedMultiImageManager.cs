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

    [SerializeField] AudioSource itemPkdSnd;

    [SerializeField]
    private GameObject pickupPictogram;

    public Text imageTrackedText; // 인식된 물체 표시
    public Text showFingerPosition; // 검지 위치(디버그)
    public Text showThumbPosition; // 엄지 위치(디버그)
    public Text showPrefabPosition; // 물체 위지(디버그)
    public Text touchText; // 터치 여부(디버그)
    public Text PickUpText; // 픽업 여부(디버그)
    //public Text distDebug; // 거리 계산(디버그)
    public Text TrackingText; // 트래킹 상태(디버그)

    private Vector3 thumbPosition;
    private Vector3 indexPosition;
    private Vector3 prefabPosition;

    //public Vector2 trackedImageSize; // 이미지 사이즈 값 추출
    //public Vector3 trackedImagePosition; //포지션 값 추출

    private bool hasKey = false;

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

            TrackingText.text = "Tracking";
            trackedObject.transform.position = trackedImage.transform.position;
            //trackedImagePosition = trackedImage.transform.position; // 포지션 값 추출
            
            /*if (trackedImagePosition.y != 0)
                trackedImagePosition.y = 0;

            trackedImageSize = trackedImage.size;*/

            if (trackedObject.tag == "item" && !hasKey && Dial.instance.clearInst)
            {
                //puzzleEffect.puzzleEffect(true);
                trackedObject.SetActive(true);
                pickupPictogram.SetActive(true);
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

            // 디버그용
            showPrefabPosition.text = "( " + prefabPosition.x.ToString("N2") + ", " + prefabPosition.y.ToString("N2") + " )";
            showFingerPosition.text = "( " + indexPosition.x.ToString("N2") + ", " + indexPosition.y.ToString("N2") + " )";
            showThumbPosition.text = "( " + thumbPosition.x.ToString("N2") + ", " + thumbPosition.y.ToString("N2") + " )";

            if (HandTracking.isHandOn && IsTouch())
            {
                touchText.text = "Touch!";

                if (IsPickUp() == true)
                {
                    PickUpText.text = "PickUp!";
                    if (trackedObject.tag == "item")
                    {
                        //itemPkdSnd.Play();
                        trackedObject.SetActive(false);
                        pickupPictogram.SetActive(false);
                        hasKey = true;
                        showText.instance.ShowText("열쇠를 획득하였습니다");
                        InventoryManager.instance.canUseItem[1] = true;
                    }
                }
                else
                    PickUpText.text = "Non-Pickup";
            }
            else
            {
                touchText.text = "Untouch";
                PickUpText.text = "X";
            }           
        }

        else if (trackedImage.trackingState == TrackingState.Limited)
        {
            TrackingText.text = "Limited";
            trackedObject.SetActive(false);
            thumbPosition = new Vector3(0,0,0);
            indexPosition = new Vector3(1,1,0);
        }

        else
            TrackingText.text = "None";
    }

    private bool IsTouch()
    {
        float indexx = indexPosition.x;
        float indexy = indexPosition.y;
        float prefabx = prefabPosition.x;
        float prefaby = prefabPosition.y;

        double dist = Math.Sqrt(Math.Pow(indexx - prefabx, 2) + Math.Pow(indexy - prefaby, 2));

        if (dist < 0.15) return true;
        else return false;
    }

    private bool IsPickUp()
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
