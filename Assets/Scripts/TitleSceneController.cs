using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleSceneController : MonoBehaviour
{
    int titleSceneNum;
    // Start is called before the first frame update
    void Start()
    {
        titleSceneNum = SceneManager.GetActiveScene().buildIndex;
    }

    // Update is called once per frame
    void Update()
    {
        //if (Input.GetKey(KeyCode.A))
        if (Input.GetMouseButtonDown(0))
        {
            SceneManager.LoadScene(titleSceneNum + 1);
        }
    }
}
