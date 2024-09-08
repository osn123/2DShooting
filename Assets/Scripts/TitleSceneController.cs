using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleSceneController : MonoBehaviour
{
    int titleSceneNum;
    void Start()
    {
        titleSceneNum = SceneManager.GetActiveScene().buildIndex;
    }
    void Update()
    {
        //if (Input.GetKey(KeyCode.A))
        if (Input.GetMouseButtonDown(0))
        {
            SceneManager.LoadScene(titleSceneNum + 1);
        }
    }
}
