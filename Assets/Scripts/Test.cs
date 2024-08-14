using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using DG.Tweening;
public class Test : MonoBehaviour
{
    public JobList job;  //列挙型の値を格納する変数
    public enum JobList
    {
        Soldier, Shielder, Archer, Berserker
    }

    #region ClassEnum
    //public enum ExampleEnum
    //{
    //    Option1,
    //    Option2,
    //    Option3
    //}

    //[SerializeField] private ExampleEnum selectedOption;

    //private void OnValidate()
    //{
    //    string[] enumNames = Enum.GetNames(typeof(ExampleEnum));
    //    int selectedIndex = Array.IndexOf(enumNames, selectedOption.ToString());

    //    selectedOption = (ExampleEnum)EditorGUILayout.Popup("Select Option", selectedIndex, enumNames);
    //}

    #endregion

    void Start()
    {
        Debug.Log(job);

        {

            //transform.DOMove(
            //new Vector3(4, 0, 0),//終了時の位置
            //1.0f);//演出時間

            //transform.DOJump(
            //    new Vector3(5, 0, 0),//終了時の位置
            //    1.0f,   //ジャンプの高さ
            //    3,      //ジャンプ総数
            //    2.0f);  //演出時間

            transform.DOPunchPosition(
            new Vector3(1, 1, 1),//パンチングの強さと方向
            1.0f);//演出時間

        }

        //Debug.Log(JobList.);
        // 構造体のインスタンス化
        //Prop instance = new Prop(10, "Hello");
        //      Prop instance = new Prop();
        //Prop t1;

        // フィールドにアクセス
        //      Debug.Log(instance.Field1); // 出力: 10
        //       Debug.Log(instance.Field2); // 出力: Hello

        // メソッド呼び出し
        //     instance.Method1();
    }

    // Update is called once per frame
    void Update()
    {

    }
}
