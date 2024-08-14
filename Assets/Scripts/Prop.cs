using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Prop : MonoBehaviour
{
    // フィールド
    public int Field1=1;
    public string Field2="2";

    // コンストラクタ
    public Prop()
    {
    }
    
    public Prop(int value1, string value2)
    {
        Field1 = value1;
        Field2 = value2;
    }

    // メソッド
    public void Method1()
    {
        // 処理
        Debug.Log("Method1");
    }
}
