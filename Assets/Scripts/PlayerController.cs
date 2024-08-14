using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Rigidbody2D))]
public class PlayerController : MonoBehaviour
{
    [Header("移動関連")]
    [Header("Playerの動く速さ")] [SerializeField] float moveSpeed = 1f;
    [Header("移動制限の余白")] [SerializeField] float marginX = 1f, marginY = 1f;

    [SerializeField] Transform playerRespawnPos;


    [Header("ショット関連")]
    [Header("弾のオブジェクト")] [SerializeField] GameObject[] playerBullet;
    [Header("弾の速さ")] [SerializeField] float bulletSpeed = 10f;
    [Header("発射ポイント")] [SerializeField] Transform playerFirePos;
    [Header("弾の発射の閾値")] [SerializeField] float bulletDelay = 1f;

    [Header("バーチャルスティック")] [SerializeField] VariableJoystick joyStick;
    [Header("爆発エフェクト")] [SerializeField] GameObject playerExplosion;

    #region RemainingCount
    [Header("プレイヤーの残機")] [SerializeField] int remainingCount = 3;
    [Header("残機のUI")] [SerializeField] TMP_Text UI_RemainingCount;
    [SerializeField] GameObject[] UI_RemainingCountIcon;
    [SerializeField] float invincibleTime = 2.0f;
    [SerializeField] int invincibleVal = 10;


    #endregion

    #region var-PlayerHP
    [Header("プレイヤーのHP")] [SerializeField] int playerHPMax = 10;
    [Header("プレイヤーのHP")] [SerializeField] int playerHPMin = 0;
    [Header("プレイヤーのHP数字")] [SerializeField] TMP_Text playerHPText;
    [Header("プレイヤーのHPゲージ")] [SerializeField] Slider playerHPGauge;
    [Header("プレイヤーがダメージを受けた時の効果音")] [SerializeField] AudioClip playerDamagedSE;
    [Header("プレイヤーがダメージを受けた時の効果音量")] [SerializeField] float playerDamagedSEVolume = 0.3f;

    #endregion

    #region var-Shield
    [Header("シールド")] [SerializeField] GameObject shield;
    [Header("シールドのHP")] [SerializeField] int shieldDurableValue = 5;

    [Header("シールドがダメージを受けた時の効果音")] [SerializeField] AudioClip shieldDamagedSE;
    [Header("シールドがダメージを受けた時の効果音量")] [SerializeField] float shieldDamagedSEVolume = 0.3f;
    [Header("シールド破壊の効果音")] [SerializeField] AudioClip shieldBrokenSE;
    [Header("シールド破壊の効果音量")] [SerializeField] float shieldBrokenSEVolume = 0.3f;

    #endregion




    #region var-External
    [Header("ゲームマネージャー")]
    [SerializeField] GameManager gameManager;
    #endregion


    #region var-Internal
    Rigidbody2D playerRB;       // プレイヤーのRigidbody
    SpriteRenderer playerSR;
    Vector2 moveDirection, min, max;      // プレイヤーのベクトル
    Vector2 playerPos;      // プレイヤーの移動制限用

    public static int playerHPCurrent { set; get; }
    public static int playerShotPower { set; get; } = 1;

    int shotPowerInitVal = 1;
    float speedInit = 5f;

    int shieldDurableValueCurrent;

    int remainingCountCurrent, remainingCountMin = 0, remainingCountMax = 5;
    float playerColorValue = 1f;
    bool isInvincible = false;
    float bulletInterval;       //弾の発射間隔管理
    bool isShotPressed = false;                             // 発射ボタン管理用


    public enum LifeType
    {
        add, minus
    };

    public enum HPCalcType { damage, heal, display, shieldDamaged };
    #endregion

    void Start()
    {
        Application.targetFrameRate = 60; // 初期状態は-1になっている
        // プレイヤーのRigidbodyを取得
        playerRB = GetComponent<Rigidbody2D>();
        //プレイヤーのスプライトレンダラーを取得
        playerSR = GetComponent<SpriteRenderer>();
        //残機の初期化
        RemainingCountInit();
        //HPの最大値を現在のHPに設定
        playerHPCurrent = playerHPMax;
        //HP表示を更新
        PlayerHPDisplay();
    }

    void Update()
    {
        // 入力受付
        InputProcess();

        // バーチャルスティック処理 ---
        // バーチャルスティックに何らかの入力が合った場合
        // (joyStickが0では無い場合)
        if (joyStick.Direction != Vector2.zero)
        {
            // moveDirectionをバーチャルスティックの入力にする
            moveDirection = joyStick.Direction;
        }
        // --- ここまで

        //弾の発射------
        //deltaTimeを加算
        bulletInterval += Time.deltaTime;
        //発射間隔が閾値未満の場合
        if (bulletInterval < bulletDelay)
        {
            //処理を中断
            return;
        }
        //スペースキーが押された場合
        if (Input.GetKey(KeyCode.F) || isShotPressed)
        {
            //弾の発射関数を呼ぶ
            PlayerShot(playerFirePos);

            //発射間隔をリセット
            bulletInterval = 0;

        }
        //-------ここまで

        //無敵フラグがtrueの場合
        if (isInvincible)
        {
            //透明度を計算する
            float invincileLevel = Mathf.Abs(Mathf.Sin(Time.time * invincibleVal));
            //プレイヤーの透明度を変更して点滅状態にする
            playerSR.color = new Color(playerColorValue, playerColorValue, playerColorValue, invincileLevel);
        }
        else
        {
            //プレイヤーの透明度を１に戻す
            playerSR.color = new Color(playerColorValue, playerColorValue, playerColorValue, playerColorValue);
        }

    }

    void FixedUpdate()
    {
        // プレイヤーを動かす
        PlayerMove();
    }

    // 入力受付
    void InputProcess()
    {
        // 入力を正規化して受け取る
        float x = Input.GetAxisRaw("Horizontal");
        float y = Input.GetAxisRaw("Vertical");
        // 入力を正規化する
        moveDirection = new Vector2(x, y).normalized;
    }

    // プレイヤーを動かす
    void PlayerMove()
    {
        //移動制限
        MoveClamp();
        // プレイヤーを動かす
        playerRB.velocity = moveDirection * moveSpeed;
    }
    //プレイヤーの移動制限
    void MoveClamp()
    {
        //最後の移動地点を取得
        playerPos = transform.position;
        //ビューポート座標からワールド座標を取得
        min = Camera.main.ViewportToWorldPoint(Vector2.zero);
        max = Camera.main.ViewportToWorldPoint(Vector2.one);
        //移動を制限する
        playerPos.x = Mathf.Clamp(playerPos.x, min.x + marginX, max.x - marginX);
        playerPos.y = Mathf.Clamp(playerPos.y, min.y + marginY, max.y - marginY);
        //プレイヤーの位置を取得した最後の地点にする
        transform.position = playerPos;
    }

    //弾の発射
    void PlayerShot(Transform firePos)
    {
        //弾を生成
        //GameObject bulletClone = Instantiate(playerBullet[playerShotPower - shotPowerInitVal], firePos.position, Quaternion.identity);
        GameObject bulletClone = Instantiate(playerBullet[playerShotPower - shotPowerInitVal], firePos.position, Quaternion.Euler(0,0,90));
        //弾のRigidbodyに速度ベクトルをつける
        //bulletClone.GetComponent<Rigidbody2D>().velocity = new Vector2(bulletSpeed, 0);
        bulletClone.GetComponent<Rigidbody2D>().velocity = new Vector2(0,bulletSpeed);
    }
    // 発射ボタンが押された時のイベント
    public void OnPointerDown()
    {
        // 発射ボタンのフラグを変更
        isShotPressed = true;
    }


    // 発射ボタンが元に戻った時のイベント
    public void OnPointerUp()
    {
        // 発射ボタンのフラグを変更
        isShotPressed = false;
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        //無敵フラグがtrueの場合
        if (isInvincible)
        {
            //処理を中断
            return;
        }
        // 敵の場合
        if (collision.gameObject.CompareTag("Enemy"))
        {
            if (shield.activeInHierarchy)   //シールドがアクティブ
            {
                PlayerHPChanged((int)HPCalcType.shieldDamaged, EnemyController.enemyAttackDamage, collision);
            }
            else
            {
                //プレイヤーのHP管理
                PlayerHPChanged((int)HPCalcType.damage, EnemyController.enemyAttackDamage, collision);
            }
            // 爆発演出
            //PlayerExplosion(collision);
        }
        // 敵の弾の場合
        else if (collision.gameObject.CompareTag("EnemyBullet"))
        {
            if (shield.activeInHierarchy)   //シールドがアクティブ
            {
                PlayerHPChanged((int)HPCalcType.shieldDamaged, EnemyController.enemyShotPower, collision);
            }
            else
            {
                PlayerHPChanged((int)HPCalcType.damage, EnemyController.enemyShotPower, collision);
            }
            // 爆発演出
            //PlayerExplosion(collision);
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {

        // 敵の場合
        if (collision.gameObject.CompareTag("EnemyBoss"))
        {
            if (shield.activeInHierarchy)   //シールドがアクティブ
            {
                PlayerHPChanged((int)HPCalcType.shieldDamaged, EnemyController.enemyAttackDamage, collision);
            }
            else
            {
                //プレイヤーのHP管理
                PlayerHPChanged((int)HPCalcType.damage, EnemyController.enemyAttackDamage, collision);
            }
            // 爆発演出
            //PlayerExplosion(collision);
        }



    }


    // 爆発演出
    void PlayerExplosion(Collider2D collision)
    {
        // プレイヤーの位置に爆発オブジェクトを作成
        Instantiate(playerExplosion, playerPos, Quaternion.identity);
        // 自身を破棄
        //Destroy(gameObject);
        //自身を非アクティブ
        gameObject.SetActive(false);
        // 接触した方を破棄
        // Destroy(collision.gameObject);
        // コンテニュー
        //Continue();
        //RemainingCounter((int)LifeType.minus);
    }

    #region Continue
    void Continue()
    {
        // コンテニューUIを表示
        gameManager.VisibleUI_Continue();
        #endregion
    }

    void RemainingCountInit()
    {
        //残機を初期値にする
        remainingCountCurrent = remainingCount;
        //残機ＵＩの更新
        RemainingCountDisplay();
    }

    public void RemainingCounter(int countType)
    {
        switch (countType)
        {
            //残機が減る場合
            case (int)LifeType.minus:
                //残機を減らす
                remainingCountCurrent--;
                //残機が最小値未満の場合
                if (remainingCountCurrent < remainingCountMin)
                {
                    //残機を最小値
                    remainingCountCurrent = remainingCountMin;
                    //コンテニュー
                    Continue();
                    //処理を中断
                    return;
                }
                //残機のＵＩの更新
                RemainingCountDisplay();
                // プレイヤーの再登場
                PlayerRespawn(playerRespawnPos);
                //コルーチン開始：無敵
                StartCoroutine(Invincible());
                break;

            case (int)LifeType.add:

                remainingCountCurrent++;
                //残機が最大値以上の場合
                if (remainingCountCurrent > remainingCountMax)
                {
                    //残機を最大値
                    remainingCountCurrent = remainingCountMax;
                }
                RemainingCountDisplay();
                break;



            default:
                break;
        }


    }
    void RemainingCountDisplay()
    {
        //残機を更新
        UI_RemainingCount.SetText(remainingCountCurrent.ToString() + "/" + remainingCountMax.ToString());
        //残機のアイコンを更新
        for (int i = 0; i < remainingCountMax; i++)
        {
            //残機が残っている分だけUIをアクティブにする
            //現在の残機がi以下の場合
            if (remainingCountCurrent <= i)
            {
                //残機アイコンを非アクティブ
                UI_RemainingCountIcon[i].SetActive(false);
            }
            else
            {
                //残機アイコンをアクティブ
                UI_RemainingCountIcon[i].SetActive(true);
            }
        }
    }

    void PlayerRespawn(Transform respawnPosition)
    {
        //プレイヤーの位置を初期位置にする
        gameObject.transform.position = respawnPosition.position;
        //プレイヤーの現在のHPを最大値にする
        playerHPCurrent = playerHPMax;
        //HP表示を更新
        PlayerHPDisplay();

        //プレイヤーをアクティブ
        gameObject.SetActive(true);
    }
    IEnumerator Invincible()
    {
        //無敵フラグをtrue
        isInvincible = true;
        //３秒待つ
        yield return new WaitForSeconds(invincibleTime);
        //無敵フラグをfalse
        isInvincible = false;
    }

    void PlayerHPDisplay()
    {
        //HP数字を更新
        playerHPText.SetText(playerHPCurrent + "/" + playerHPMax);
        //HP数字を更新
        playerHPGauge.value = playerHPCurrent;
    }
    public void PlayerHPChanged(int calcType, int volume, Collider2D collider = null)
    {
        switch (calcType)
        {
            case (int)HPCalcType.heal:
                //volume文を回復
                playerHPCurrent += volume;
                //接触オブジェクトを破棄
                //Destroy(collider.gameObject);
                //プレイヤーのHPが最大値以上の場合
                if (playerHPCurrent >= playerHPMax)
                {
                    playerHPCurrent = playerHPMax;
                }
                PlayerHPDisplay();
                break;
            case (int)HPCalcType.damage:
                //ダメージを受けた効果音を再生
                AudioSource.PlayClipAtPoint(playerDamagedSE, Camera.main.transform.position, playerDamagedSEVolume);

                //volume分を引く
                playerHPCurrent -= volume;
                if (collider.gameObject.CompareTag("EnemyBullet"))
                {
                    //オブジェクトを破棄
                    Destroy(collider.gameObject);
                }
                //プレイヤーのHPが最小値以下の場合
                if (playerHPCurrent <= playerHPMin)
                {
                    playerHPCurrent = playerHPMin;
                    //爆発処理
                    PlayerExplosion(collider);
                    //残機を更新
                    RemainingCounter((int)LifeType.minus);
                    //プレイヤーの状態をリセット
                    ResetPlayerStatus();
                }

                //HP表示を更新
                PlayerHPDisplay();
                break;

            case (int)HPCalcType.shieldDamaged:
                //シールドがダメージを受けた効果音を再生
                AudioSource.PlayClipAtPoint(shieldDamagedSE, Camera.main.transform.position, shieldDamagedSEVolume);
                //シールドの耐久値減産
                shieldDurableValueCurrent -= volume;
                //接触したオブジェクトが敵の弾の場合
                if (collider.gameObject.CompareTag("EnemyBullet"))
                {
                    Destroy(collider.gameObject);
                }
                //シールド耐久値が０以下
                if (shieldDurableValueCurrent <= 0)
                {
                    ShieldInActive();
                }

                break;

            //接触オブジェクトを破棄
            //Destroy(collider.gameObject);
            ////プレイヤーのHPが最大値以上の場合
            //if (playerHPCurrent >= playerHPMax)
            //{
            //    playerHPCurrent = playerHPMax;
            //}
            //break;


            default:
                break;
        }
    }

    public void PlayerSpeedUp(float speedUpVolume)
    {
        //現在のプレイヤーの速度を加算
        moveSpeed += speedUpVolume;
    }
    void ResetPlayerStatus()
    {
        //現在の弾の強さを初期化
        playerShotPower = shotPowerInitVal;
        //現在の速度を初期可
        moveSpeed = speedInit;
    }

    public void ShieldActive()
    {
        //シールドの現在の耐久値へ初期値を代入
        shieldDurableValueCurrent = shieldDurableValue;
        //シールドをアクティブ
        shield.SetActive(true);
    }

    public void ShieldInActive()
    {
        //シールドの現在の耐久値へ初期値を代入
        AudioSource.PlayClipAtPoint(shieldBrokenSE, Camera.main.transform.position, shieldBrokenSEVolume);

        //シールドをアクティブ
        shield.SetActive(false);
    }
}