using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameOverLoad : MonoBehaviour
{
    private static GameOverLoad instance;
    public static GameOverLoad Instance
    {
        get
        {
            if (instance == null)
            {
                var obj = FindObjectOfType<GameOverLoad>();
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
    private static GameOverLoad Create()
    {
        return Instantiate(Resources.Load<GameOverLoad>("GameOver UI"));
    }
    private void Awake()
    {
        if (Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        DontDestroyOnLoad(gameObject);
    }

    [SerializeField]
    private CanvasGroup canvasGroup;
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
        if (arg0.name == loadSceneName)
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
        op.allowSceneActivation = false;
        //op.allowSceneActivation = true;

        float timer = 0f;
        while(!op.isDone)
        {
            yield return null;
            
            timer += Time.unscaledDeltaTime * 0.1f;
            if(timer >= 12f)
            {
                op.allowSceneActivation = true;
                yield break;
            }
        }
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