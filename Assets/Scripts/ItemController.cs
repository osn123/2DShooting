using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemController : MonoBehaviour
{
    #region var-itemParam

    [Header("アイテムの移動の種類")] [SerializeField] EnumItem itemType;
    //[Header("アイテムの移動の種類")] [SerializeField] int itemType = 0;
    [Header("アイテムのパラメータ")] [SerializeField] int add_Score = 1000;
    [Header("アイテムの移動スピード")] [SerializeField] float ItemmoveSpeed = 1f;
    [Header("アイテムの回転スピード")] [SerializeField] float ItemmoveRotateSpeed = 1f;

    [Header("アイテムの効果音")] [SerializeField] AudioClip getItemSE;
    [Header("アイテムの効果音量")] [SerializeField] float getItemSEVolume = 0.5f;

    [Header("アイテムの効果:回復")] [SerializeField] int healItemVolume = 3;
    [Header("アイテムの効果:速度")] [SerializeField] float speedUpItemVolume = 5f;


    #endregion

    enum EnumItem
    {
        addScore=0, addLife =1, HPHeal =2, shotPowerUp =3, speedUp =4, shield =5
    }
    
    //enum ItemTypes
    //{
    //    addScore, addLife, HPHeal, shotPowerUp, speedUp, shield
    //}

    int shotPowerMax = 3;
    Rigidbody2D capsuleRB;

    GameManager gameManager;
    PlayerController player;

    Rigidbody2D playerRB;

    void Start()
    {
        // 敵のリジッドボディを取得
        capsuleRB = GetComponent<Rigidbody2D>();

        // ゲームマネージャーを取得
        gameManager = GameObject.FindWithTag("GameManager").GetComponent<GameManager>();

        player = GameObject.FindWithTag("Player").GetComponent<PlayerController>();



    }
    //void Update()
    //{
    //    // 弾の発射 ---
    //    // deltaTimeを加算
    //    enemyShotDelay += Time.deltaTime;
    //    //発射間隔が閾値以下の場合
    //    if (enemyShotDelay <= enemyShotThreshold)
    //    {
    //        return;
    //    }
    //    else
    //    {
    //        // 弾の発射関数を呼ぶ
    //        //EnemyShot(enemyFirePos);
    //    }
    //    // 発射間隔をリセット
    //    enemyShotDelay = enemyShotDelayReset;
    //}
    // Update is called once per frame

    void FixedUpdate()
    {
        // アイテムを動かす
        //capsuleRB.velocity = new Vector2(0,-ItemmoveSpeed);

        //capsuleRB.velocity = new Vector2(-ItemmoveSpeed, 0);
        //アイテムを回転させる
        capsuleRB.transform.Rotate(0, 0, ItemmoveRotateSpeed);
    }

    void OnTriggerEnter2D(Collider2D collision)
    // 接触判定
    {
        // プレイヤーに接触した場合
        if (collision.gameObject.CompareTag("Player"))
        {
            //アイテムの効果を発揮する
            ItemEffects(itemType);
            //自身のオブジェクトを破棄
            Destroy(gameObject);
            //効果音を再生
            AudioSource.PlayClipAtPoint(getItemSE, Camera.main.transform.position, getItemSEVolume);
        }
    }
    void ItemEffects(EnumItem iType)
    {
        // 接触したアイテムによって効果を振り分ける

        switch (iType)
        {
            //スコア加算の場合
            case EnumItem.addScore:
                //スコア加算
                gameManager.ScoreAdd(add_Score);
                //capsuleRB.velocity = new Vector2(-ItemmoveSpeed + playerRB.transform.position.x, playerRB.transform.position.y - transform.position.y);
                //capsuleRB.velocity = new Vector2(-ItemmoveSpeed + player.transform.position.x, player.transform.position.y - transform.position.y);

                break;

            //ライフ加算の場合
            case EnumItem.addLife:
                //スコア加算
                player.RemainingCounter((int)PlayerController.LifeType.add);

                break;

            //HP回復の場合
            case EnumItem.HPHeal:
                //HP回復
                player.PlayerHPChanged((int)PlayerController.HPCalcType.heal, healItemVolume);
                break;

            //プレイヤーの弾の強さを上げる場合
            case EnumItem.shotPowerUp:
                //プレイヤーの弾の強さを上げる
                PlayerController.playerShotPower++;
                //プレイヤーの弾が最大強さの場合
                if (PlayerController.playerShotPower > shotPowerMax)
                {
                    //弾の強さを最大値にする
                    PlayerController.playerShotPower = shotPowerMax;
                }
                // player.PlayerHPChanged((int)PlayerController.HPCalcType.heal, healItemVolume, col);
                break;

            case EnumItem.speedUp:
                //HP回復
                player.PlayerSpeedUp(speedUpItemVolume);
                capsuleRB.velocity = new Vector2(-ItemmoveSpeed, player.transform.position.y - transform.position.y);
                capsuleRB.velocity = new Vector2(-ItemmoveSpeed, player.transform.position.y - transform.position.y);

                break;
            case EnumItem.shield:
                capsuleRB.velocity = new Vector2(-ItemmoveSpeed, player.transform.position.y + transform.position.y);
                capsuleRB.velocity = new Vector2(-ItemmoveSpeed, player.transform.position.y + transform.position.y);

                player.ShieldActive();
                break;

            default:
                break;
        }

        //GameObject enemyBulletClone = Instantiate(enemyBullet, enemyFirePos.position, Quaternion.identity);
        // 弾のRigidbodyに速度ベクトルをつける
        //enemyBulletClone.GetComponent<Rigidbody2D>().velocity = new Vector2(-enemyShotSpeed, 0);
    }
    // 爆発演出
    //void EnemyExplosion(Collider2D collision)
    //{
    //    // 爆発エフェクトを生成
    //    Instantiate(enemyExplosion, transform.position, Quaternion.identity);
    //    // 自身を破棄
    //    Destroy(gameObject);

    //    // 接触した方（プレイヤー）を破棄
    //    Destroy(collision.gameObject);

    //    // 接触した方（プレイヤー）を非アクティブ
    //    collision.gameObject.SetActive(true);
    //}

}
