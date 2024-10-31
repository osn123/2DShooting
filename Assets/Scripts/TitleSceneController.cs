using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

public class TitleSceneController : MonoBehaviour
{
    int titleSceneNum;

    private Vertical2DShooting inputActions;

    void Start()
    {
        titleSceneNum = SceneManager.GetActiveScene().buildIndex;
        Screen.SetResolution(1080/2, 1920/2, FullScreenMode.Windowed);
        inputActions = new Vertical2DShooting();
        inputActions.Enable();
    }
    void Update()
    {
        //if (Input.GetKey(KeyCode.A))
        if (Input.GetMouseButtonDown(0)|| inputActions.Player.Fire.triggered || inputActions.Player.Fire3.triggered)
        {
            SceneManager.LoadScene(titleSceneNum + 1);
        }
    }
}
