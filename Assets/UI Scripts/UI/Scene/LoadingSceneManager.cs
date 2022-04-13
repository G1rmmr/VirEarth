using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LoadingSceneManager : MonoBehaviour
{
    private static LoadingSceneManager instance;
    public static LoadingSceneManager Instance
    {
        get
        {
            if (instance == null)
            {
                var obj = FindObjectOfType<LoadingSceneManager>();
                if (obj != null)
                {
                    instance = obj;
                }
                else
                {
                    instance = Create();
                }
            }
            return instance;
        }
    }
    private static LoadingSceneManager Create()
    {
        int r = Random.Range(0, 5);
        switch (r)
        {
            case 0: 
                return Instantiate(Resources.Load<LoadingSceneManager>("Loading UI_0"));
            case 1:
                return Instantiate(Resources.Load<LoadingSceneManager>("Loading UI_1"));
            case 2:
                return Instantiate(Resources.Load<LoadingSceneManager>("Loading UI_2"));
            case 3:
                return Instantiate(Resources.Load<LoadingSceneManager>("Loading UI_3"));
            case 4:
                return Instantiate(Resources.Load<LoadingSceneManager>("Loading UI_4"));
            default:
                return null;
        }
        
    }
    private void Awake()
    {
        if(Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        DontDestroyOnLoad(gameObject);
    }

    [SerializeField] private CanvasGroup canvasGroup;
    //[SerializeField]
    //private Image progressbar;
    
    private string loadSceneName;

    public void LoadScene(string sceneName)
    {
        gameObject.SetActive(true);
        SceneManager.sceneLoaded += OnSceneLoaded;
        loadSceneName = sceneName;
        StartCoroutine(LoadSceneProcess());
    }
    private void OnSceneLoaded(Scene arg0, LoadSceneMode arg1)
    {
        if(arg0.name == loadSceneName)
        {
            StartCoroutine(Fade(false));
            SceneManager.sceneLoaded -= OnSceneLoaded;
        }
    }
    private IEnumerator LoadSceneProcess()
    {
        //progressbar.fillAmount = 0f;
        yield return StartCoroutine(Fade(true));

        AsyncOperation op = SceneManager.LoadSceneAsync(loadSceneName);
        //op.allowSceneActivation = false;
        op.allowSceneActivation = true;

        /*float timer = 0f;
        while(!op.isDone)
        {
            yield return null;
            
            timer += Time.unscaledDeltaTime * 0.1f;
            progressbar.fillAmount = Mathf.Lerp(0f, 1f, timer);
            if(progressbar.fillAmount >= 1f)
            {
                yield break;
            }
        }*/
    }
    private IEnumerator Fade(bool isFadein)
    {
        float timer = 0f;
        while (timer <= 1f)
        {
            yield return null;
            timer += Time.unscaledDeltaTime;
            canvasGroup.alpha = isFadein ? Mathf.Lerp(0f, 1f, timer) : Mathf.Lerp(1f, 0f, timer);
        }
        if (!isFadein)
        {
            gameObject.SetActive(false);
        }
    }
}