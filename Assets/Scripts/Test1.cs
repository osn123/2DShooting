using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using System.Linq;

public class Test1 : MonoBehaviour
{
    #region compornent
    public JobList job;  //列挙型の値を格納する変数

    [SerializeField] private Transform cam;
    [SerializeField] private Vector3 positionStrength;
    [SerializeField] private Vector3 rotationStrength;
    #endregion
    public enum JobList
    {
        Soldier, Shielder, Archer, Berserker
    }
    struct PartyData
    {

    }

    private float shakeDuration = 0.3f;

    #region move
    public GameObject[] positions;
    public PathType pathType;
    public Ease easeType;
    public float time;
    #endregion

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
        transform.DOKill(true);
        cam.DOKill(true);

        //Vector3[] path = positions.Select(x => x.transform.position).ToArray();
        //transform.DOLocalPath(path, time, pathType)
        //    .SetEase(easeType)
        //    .SetLookAt(0.01f, Vector3.forward)
        //    .SetOptions(false);


        Debug.Log(JsonUtility.ToJson(job,true));
        //Debug.Log(job);

        //var prefab=Resources.Load<GameObject>("Prefabs/  ")
        {

            //transform.DOMove(
            //new Vector3(4, 0, 0),//終了時の位置
            //1.0f);//演出時間

            //transform.DOJump(
            //    new Vector3(5, 0, 0),//終了時の位置
            //    1.0f,   //ジャンプの高さ
            //    3,      //ジャンプ総数
            //    2.0f);  //演出時間

            //transform.DOPunchPosition(
            //new Vector3(1, 1, 1),//パンチングの強さと方向
            //1.0f);//演出時間

            //Image image = GetComponent<Image>();
            //image.DOColor(Color.red, 1.5f);

            //transform.DOMove(new Vector3(4, 0, 0),1f)//演出時間
            //           .SetLoops(-1, LoopType.Yoyo);    // 行き来を無限に繰り返す

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
    void Update()
    {
        if (Input.GetMouseButtonDown(1))
            CameraShaker();
    }
    private void CameraShaker()
    {
        cam.DOComplete();
        cam.DOShakePosition(shakeDuration, positionStrength);
        //cam.DOShakeRotation(shakeDuration, rotationStrength);
    }
}
