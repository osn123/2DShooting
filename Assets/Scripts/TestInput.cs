using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestInput : MonoBehaviour
{
    private Vertical2DShooting inputActions;
    void Start()
    {
        inputActions = new Vertical2DShooting();
        inputActions.Enable();
    }
    void Update()
    {
        if (inputActions.Player.Fire.triggered)
        {
            //print("fire");
            Debug.Log("fire");
        }

        if (inputActions.Player.Pause.triggered)
        {
            //print("fire");
            Debug.Log("Pause");
        }
    }
}
