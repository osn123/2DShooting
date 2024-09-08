using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemGenerator : MonoBehaviour
{
    #region item
    [Header("アイテムの生成リスト")] [SerializeField] GameObject[] Items;
    [Header("アイテム生成の時間")] [SerializeField] float ItemDelay = 2f;
    [Header("アイテム生成の間隔")] [SerializeField] float ItemInterval = 2f;
    [Header("画面の余白（y軸方向）")] [SerializeField] float ItemmarginY = 1f;
    [Header("画面の余白（x軸方向）")] [SerializeField] float ItemmarginX = 1f;

    Vector2 min, max;       // 画面サイズ取得用
    #endregion
    void Start()
    {
        // 画面サイズの最小値・最大値を取得
        min = Camera.main.ViewportToWorldPoint(Vector2.zero);
        max = Camera.main.ViewportToWorldPoint(Vector2.one);
        // 敵生成の関数を一定間隔でリピート
        InvokeRepeating("ItemGenarate", ItemDelay, ItemInterval);
    }
    // 敵を生成する
    void ItemGenarate()
    {
        // 敵を生成
        Instantiate(Items[Random.Range(0, Items.Length)],                                           // GameObjectの配列enemiesからランダムで生成する敵を選択
                    new Vector2(Random.Range(min.x + ItemmarginX, max.x - ItemmarginX), transform.position.y),  // x座標：EnemyGeneratorオブジェクトのpositionのx,y座標：取得した画面サイズの最小値+余白から最大値-余白までの間
                    Quaternion.identity);                                                               // 回転しない
        //Instantiate(Items[Random.Range(0, Items.Length)],                                           // GameObjectの配列enemiesからランダムで生成する敵を選択
        //            new Vector2(transform.position.x, Random.Range(min.y + ItemmarginY, max.y - ItemmarginY)),  // x座標：EnemyGeneratorオブジェクトのpositionのx,y座標：取得した画面サイズの最小値+余白から最大値-余白までの間
        //            Quaternion.identity);                                                               // 回転しない
    }
}
