using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGController : MonoBehaviour
{
    #region Scroll
    [Header("スクロールの速さ")] [SerializeField] float scrollSpeed = 0.1f;
    //[Header("移動：x方向(1：正/-1：負/0：移動無し)")] [SerializeField] int moveX = 1;
    //[Header("移動：y方向(1：正/-1：負/0：移動無し)")] [SerializeField] int moveY = 1;
    // プレイヤーの動きに追従する場合
    [Header("プレイヤーの動きに追従させる割合")] [SerializeField] float playerMove = 0.01f;
    [Header("動きを追従するオブジェクト")] [SerializeField] GameObject player;
    float scrollMax = 1f;       // スクロールの最終地点（最大値）
    #endregion

    #region component
    Vector2 offset;             // 背景をずらすための管理用
    Renderer material;          // マテリアル用
    #endregion

    #region enum
    [Header("横方向の背景移動")] [SerializeField] ScrollDirectionX directionX;
    [Header("縦方向の背景移動")] [SerializeField] ScrollDirectionY directionY;
    enum ScrollDirectionX                                     // 背景移動（X方向）
    {
        NoMove = 0, ToLeft = -1, ToRight = 1           // 動き無し,左→右,右→左
    }
    enum ScrollDirectionY                                      // 背景移動（Y方向）
    {
        NoMove = 0, ToBottom = 1, ToTop = -1           // 動き無し,左→右,右→左
    }
    #endregion

    void Start()
    {
        // マテリアルを取得
        material = GetComponent<Renderer>();
        // 追従するプレイヤーが未取得の場合
        if (player == null)
        {
            // プレイヤーを取得
            player = GameObject.FindWithTag("Player").GetComponent<GameObject>();
        }
    }
    void Update()
    {
        // プレイヤーがnullの場合
        if (player == null)
        {
            // 処理を中断
            return;
        }
        // ゲーム内時間で0からscrollMax(1)になり、0に戻って繰り返す
        float scrollX = Mathf.Repeat(Time.time * scrollSpeed * (int)directionX, scrollMax),
              scrollY = Mathf.Repeat(Time.time * scrollSpeed * (int)directionY, scrollMax);
        //float scrollX = Mathf.Repeat(Time.time * scrollSpeed * moveX, scrollMax),
        //      scrollY = Mathf.Repeat(Time.time * scrollSpeed * moveY, scrollMax);
        // プレイヤーの位置を取得
        float movePointX = player.transform.position.x,
              movePointY = player.transform.position.y;
        // オフセットを作成
        offset = new Vector2(scrollX + movePointX * playerMove, scrollY + movePointY * playerMove);
        // マテリアルにオフセットを設定
        material.sharedMaterial.SetTextureOffset("_MainTex", offset);
    }
}
