using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoordinateSystem : MonoBehaviour
{
    [SerializeField]
    private GameObject item0;

    [SerializeField]
    private GameObject item1;

    [SerializeField]
    private GameObject item2;

    [SerializeField]
    private GameObject item3;

    public void transCoord(GameObject i, float x, float y)
    {
        i.transform.position = new Vector2(x * 264, y * 556);
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
}
