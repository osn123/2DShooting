using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[RequireComponent(typeof(Rigidbody2D))]

public class EnemyController : MonoBehaviour
{
    #region var-EnemyMove

    [Header("敵の移動の種類")] [SerializeField] int moveType = 0;
    [Header("敵の移動スピード")] [SerializeField] float moveSpeed = 1f;
    [Header("ボスの停止位置")] [SerializeField] Transform BossStopPos;
    #endregion

    #region var-EnemyShot
    [Header("敵の弾")] [SerializeField] GameObject enemyBullet;    //敵の弾
    [Header("敵の弾の速度")] [SerializeField] float enemyShotSpeed = 5f;    //敵の弾の速度
    [Header("敵の弾の発射位置")] [SerializeField] Transform enemyFirePos;    //敵の弾の発射位置
    [Header("敵の弾の発射間隔")] [SerializeField] float enemyShotThreshold = 1f;    //敵の弾の発射間隔
    [Header("敵の弾の発射パターン")] [SerializeField] int enemyShotType = 0;    //敵の弾の発射するパターン用

    [Header("複数方向へ弾を発射するときの弾数")] [SerializeField] int enemyShotCount = 1;
    [Header("複数方向へ弾を発射するときの角度")] [SerializeField] float multiWayShotAngle = 15f;
    [Header("弾を発射するときの音量")] [SerializeField] float shotVolume = 0.2f;

    [Header("速射砲の弾数")] [SerializeField] int rapidShotCount = 5;
    [Header("速射時の空白間隔")] [SerializeField] float rapidShotInterval = 2f;

    [Header("発射口の回転角度")] [SerializeField] float rotateAngle = 5f;
    [Header("回転撃ちの空白間隔")] [SerializeField] float rollingShotInterval = 4f;




    #endregion

    #region var-EnemyHP
    [Header("敵のHP")] [SerializeField] int enemyHP = 1;
    [Header("本体衝突ダメージ")] [SerializeField] int enemyDamage = 1;
    [Header("本体衝突ダメージ")] [SerializeField] int enemyBossDamaged = 9;

    #endregion

    #region EnemyDamaged
    [Header("敵ダメージ時の点滅時間")] [SerializeField] float blinkTime = 0.15f;
    [Header("点滅を繰り返す回数")] [SerializeField] int blinkCount = 3;

    [Header("敵がダメージを受けた時の効果音")] [SerializeField] AudioClip enemyDamagedSE;
    [Header("敵がダメージを受けた時の効果音量")] [SerializeField] float enemyDamagedSEVolume = 0.3f;

    [Header("敵撃墜の効果音")] [SerializeField] AudioClip enemyDeadSE;
    [Header("敵撃墜の効果音量")] [SerializeField] float enemyDeadSEVolume = 0.3f;


    #endregion

    #region var-EnemyExplosion

    [Header("爆発エフェクト")] [SerializeField] GameObject enemyExplosion;
    #endregion

    #region var-EnemyInternal

    Rigidbody2D enemyRB;        // 敵のリジッドボディ

    float enemyShotDelayReset = 0, enemyShotDelay = 0;  //弾の発射間隔の初期値、発射間隔の時間
    int score_MOB = 100;//敵激は時のスコア

    Rigidbody2D player;
    Transform target;
    SpriteRenderer enemySP;

    int enemyHPMin = 0;
    public static int enemyAttackDamage { set; get; }
    public static int enemyShotPower = 1;
    int shotCount = 0, shotCountReset = 0;
    bool isShot = true;

    enum EnemyMoveType
    {
        Normal, PlayerFollowY, PlayerAttack, EnemyBoss, NoMove
    }
    enum EnemyShotPattern
    {
        Normal, PlayerAim, multiWay, PAMultiWay, PARapidShot, RollingShot
    }
    enum EnemyDamageType
    {
        heal, damage
    }
    enum EnemyAttackDamage
    {
        Normal = 1, PlayerFollowY = 2, PlayerAttack = 3, EnemyBoss = 9
    }

    #endregion


    GameManager gameManager;

    void Start()
    {
        // 敵のリジッドボディを取得
        enemyRB = GetComponent<Rigidbody2D>();

        //スプライトレンダラーを取得
        enemySP = GetComponent<SpriteRenderer>();

        player = GameObject.FindWithTag("Player").GetComponent<Rigidbody2D>();

        // ゲームマネージャーを取得
        gameManager = GameObject.FindGameObjectWithTag("GameManager").GetComponent<GameManager>();

        //ターゲットを取得
        target = GameObject.FindWithTag("Player").GetComponent<Transform>();

        //ボスの停止位置
        BossStopPos = GameObject.FindWithTag("BossStopPos").GetComponent<Transform>();

        //敵の接触ダメージを設定
        switch (enemyDamage)
        {
            //normalの場合
            case (int)EnemyAttackDamage.Normal:
                //接触ダメージを設定
                enemyAttackDamage = (int)EnemyAttackDamage.Normal;
                break;
            case (int)EnemyAttackDamage.PlayerFollowY:
                //接触ダメージを設定
                enemyAttackDamage = (int)EnemyAttackDamage.PlayerFollowY;
                break;
            case (int)EnemyAttackDamage.PlayerAttack:
                //接触ダメージを設定
                enemyAttackDamage = (int)EnemyAttackDamage.PlayerAttack;
                break;
            case (int)EnemyAttackDamage.EnemyBoss:
                //接触ダメージを設定
                enemyAttackDamage = (int)EnemyAttackDamage.EnemyBoss;
                break;
            default:
                break;
        }
    }
    void Update()
    {
        // 弾の発射 ---
        // deltaTimeを加算
        enemyShotDelay += Time.deltaTime;
        //速射
        if (enemyShotType == (int)EnemyShotPattern.PARapidShot)
        {
            if (isShot)
            {
                EnemyBulletShot();
                //発射した弾数が設定した数以上の場合
                if (shotCount >= rapidShotCount)
                {
                    isShot = false;
                    StartCoroutine(ShotInterval(rapidShotInterval));
                }
            }
        }
        //回転
        else if (enemyShotType == (int)EnemyShotPattern.RollingShot)
        {
            if (isShot)
            {
                EnemyBulletShot();
                //発射した弾数が設定した数以上の場合
                if (shotCount >= rapidShotCount)
                {
                    isShot = false;
                    StartCoroutine(ShotInterval(rollingShotInterval));
                }
                else
                {
                    //発射口の角度を０にする
                    enemyFirePos.transform.Rotate(Vector3.zero);
                }
            }
        }
        else
        {
            EnemyBulletShot();
        }
    }
    // Update is called once per frame
    void FixedUpdate()
    {
        // 敵を動かす
        EnemyMove(moveType);
    }

    void EnemyMove(int type_Move)
    {
        switch (type_Move)
        {
            case (int)EnemyMoveType.Normal:
                enemyRB.velocity = new Vector2(-moveSpeed, 0);
                break;
            case (int)EnemyMoveType.PlayerFollowY:
                //プレイヤーの高さに合わせて追跡
                enemyRB.velocity = new Vector2(-moveSpeed, player.transform.position.y - transform.position.y);
                break;

            case (int)EnemyMoveType.PlayerAttack:
                //プレイヤーを目標にして追跡
                enemyRB.velocity = new Vector2(-moveSpeed + player.transform.position.x, player.transform.position.y - transform.position.y);
                break;

            case (int)EnemyMoveType.EnemyBoss:
                //敵に左ベクトル
                enemyRB.velocity = new Vector2(-moveSpeed, 0);
                //ボスのX座標が停止位置以上になった場合
                if (BossStopPos.position.x >= gameObject.transform.position.x)
                {
                    //ベクトルを０
                    enemyRB.velocity = Vector2.zero;
                    enemyRB.velocity = new Vector2(0, player.transform.position.y - transform.position.y);
                }
                break;

            case (int)EnemyMoveType.NoMove:
                break;


            default:
                break;
        }
        // 敵に左方向のベクトルを持たせる
        //enemyRB.velocity = new Vector2(-moveSpeed, 0);
    }

    void OnTriggerEnter2D(Collider2D collision)
    // 接触判定
    {
        // プレイヤーに接触した場合
        if (collision.gameObject.CompareTag("Player"))
        {
            // EnemyExplosion(collision);
            if (gameObject.CompareTag("EnemyBoss"))
            {
                //
                EnemyHPChanged((int)EnemyDamageType.damage, enemyBossDamaged, collision);
            }
            else
            {
                EnemyHPChanged((int)EnemyDamageType.damage, enemyHP, collision);
            }
        }
        // プレイヤーの弾に接触した場合
        else if (collision.gameObject.CompareTag("PlayerBullet"))
        {
            EnemyHPChanged((int)EnemyDamageType.damage, PlayerController.playerShotPower, collision);
            //EnemyExplosion(collision);
            //スコアを加算
            //gameManager.ScoreAdd(score_MOB);
        }
        else if (collision.gameObject.CompareTag("Shield"))
        {
            if (collision.gameObject.CompareTag("Player"))
            {
                // EnemyExplosion(collision);
                if (gameObject.CompareTag("EnemyBoss"))
                {
                    //
                    EnemyHPChanged((int)EnemyDamageType.damage, enemyBossDamaged, collision);
                }
                else
                {
                    EnemyHPChanged((int)EnemyDamageType.damage, enemyHP, collision);
                }
            }
        }

        // ObjectDestroyerに接触した場合
        else if (collision.gameObject.CompareTag("ObjectDestroyer"))
        {
            // 自身を破棄
            Destroy(gameObject);
        }
    }
    void EnemyShot(Transform enemyFirePos, int sType)
    {
        // 弾を生成

        switch (sType)
        {
            case (int)EnemyShotPattern.Normal:
                GameObject enemyBulletClone = Instantiate(enemyBullet, enemyFirePos.position, Quaternion.identity);
                //弾の発射時の音量を設定
                enemyBulletClone.GetComponent<AudioSource>().volume = shotVolume;

                enemyBulletClone.GetComponent<Rigidbody2D>().velocity = new Vector2(-enemyShotSpeed, 0);
                break;
            case (int)EnemyShotPattern.PlayerAim:
                GameObject enemyBulletClone_PlayerAim = Instantiate(enemyBullet, enemyFirePos.position, Quaternion.identity);
                //弾の発射時の音量を設定
                enemyBulletClone_PlayerAim.GetComponent<AudioSource>().volume = shotVolume;

                enemyBulletClone_PlayerAim.GetComponent<Rigidbody2D>().velocity = new Vector2(-enemyShotSpeed,
                    target.position.y - transform.position.y);
                break;
            case (int)EnemyShotPattern.multiWay:
                //角度をつけて設定した弾数分を発射する
                for (int i = 0; i < enemyShotCount; i++)
                {
                    //弾のコピーを作成
                    GameObject enemyBulletClone_MultiWay = Instantiate(enemyBullet, enemyFirePos.position, Quaternion.identity);
                    //弾の発射時の音量を設定
                    enemyBulletClone_MultiWay.GetComponent<AudioSource>().volume = shotVolume / enemyShotCount;
                    //ベクトルを作成
                    enemyBulletClone_MultiWay.GetComponent<Rigidbody2D>().velocity = new Vector2(
                        //x座標：弾の発射速度
                        -enemyShotSpeed,
                        //y座標：（設定した角度／設定した弾数）ー（設定した角度／設定した弾数）*i
                        (multiWayShotAngle / enemyShotCount) - (multiWayShotAngle / enemyShotCount) * i);
                }
                break;

            case (int)EnemyShotPattern.PAMultiWay:
                //角度をつけて設定した弾数分を発射する
                for (int i = 0; i < enemyShotCount; i++)
                {
                    //弾のコピーを作成
                    GameObject enemyBulletClone_PAMultiWay = Instantiate(enemyBullet, enemyFirePos.position, Quaternion.identity);
                    //弾の発射時の音量を設定
                    enemyBulletClone_PAMultiWay.GetComponent<AudioSource>().volume = shotVolume / enemyShotCount;
                    //ベクトルを作成
                    enemyBulletClone_PAMultiWay.GetComponent<Rigidbody2D>().velocity = new Vector2(
                        //x座標：弾の発射速度
                        -enemyShotSpeed,
                        //y座標：ターゲットのy座標ー自身のy座標*i
                        (target.position.y - transform.position.y) * i);
                }
                break;

            case (int)EnemyShotPattern.PARapidShot:
                PARapidShot();
                break;

            case (int)EnemyShotPattern.RollingShot:
                RollingShot();
                break;


            default:
                break;

        }
        // 弾のRigidbodyに速度ベクトルをつける
    }
    // 爆発演出
    //void EnemyExplosion(Collider2D collision)
    void EnemyExplosion()
    {
        // 爆発エフェクトを生成
        //Instantiate(enemyExplosion, transform.position, Quaternion.identity);
        Instantiate(enemyExplosion, gameObject.transform.position, Quaternion.identity);
        // 自身を破棄
        Destroy(gameObject);

        // 接触した方（プレイヤー）を破棄
        //Destroy(collision.gameObject);

        // 接触した方（プレイヤー）を非アクティブ
        //collision.gameObject.SetActive(true);
    }

    void EnemyHPChanged(int damageType, int volume, Collider2D collider)
    {
        switch (damageType)
        {
            case (int)EnemyDamageType.heal:
                //敵の回復処理
                break;
            case (int)EnemyDamageType.damage:
                //ダメージ処理
                enemyHP -= volume;
                //接触オブジェクトがプレイヤーの弾
                if (collider.gameObject.CompareTag("PlayerBullet"))
                {
                    Destroy(collider.gameObject);
                }
                //敵のHPが最小値以下になる場合
                if (enemyHP <= enemyHPMin)
                {
                    //スコア加算
                    gameManager.ScoreAdd(score_MOB);
                    //爆発処理
                    EnemyExplosion();
                    AudioSource.PlayClipAtPoint(enemyDeadSE, Camera.main.transform.position, enemyDeadSEVolume);

                }
                if (gameObject.CompareTag("EnemyBoss"))
                {
                    //ゲームマネージャーのボスの現在HPを更新
                    gameManager.bossHPCurrent = enemyHP;
                    //ボスのHPのUI表示を更新
                    gameManager.EnemyBossHPDisplay();
                }



                //ダメージを受けた時に点滅させる
                StartCoroutine(EnemyDamagedBlink());
                AudioSource.PlayClipAtPoint(enemyDamagedSE, Camera.main.transform.position, enemyDamagedSEVolume);

                break;

            default:
                break;
        }
    }

    IEnumerator EnemyDamagedBlink()
    {
        //ダメージを受けた際に指定時間分待つ
        yield return new WaitForSeconds(blinkTime);
        //スプライトレンダラーをオフ
        enemySP.enabled = false;
        //指定時間分待つ
        yield return new WaitForSeconds(blinkTime);
        //スプライトレンダラーをオン
        enemySP.enabled = true;
    }

    void EnemyBulletShot()
    {
        //発射間隔が閾値以下の場合
        if (enemyShotDelay <= enemyShotThreshold)
        {
            return;
        }
        else
        {
            // 弾の発射関数を呼ぶ
            EnemyShot(enemyFirePos, enemyShotType);
        }
        // 発射間隔をリセット
        enemyShotDelay = enemyShotDelayReset;
    }

    void PARapidShot()
    {
        GameObject enemyBulletClone_PARapidShot = Instantiate(enemyBullet, enemyFirePos.position, Quaternion.identity);
        //弾の発射時の音量を設定
        enemyBulletClone_PARapidShot.GetComponent<AudioSource>().volume = shotVolume;
        //ベクトルを作成
        enemyBulletClone_PARapidShot.GetComponent<Rigidbody2D>().velocity = new Vector2(-enemyShotSpeed,
            target.position.y - transform.position.y);
        //撃った弾数を加算
        shotCount++;
    }

    void RollingShot()
    {
        GameObject enemyBulletClone_RollingShot = Instantiate(enemyBullet, enemyFirePos.position, gameObject.transform.rotation);
        //弾の発射時の音量を設定
        enemyBulletClone_RollingShot.GetComponent<AudioSource>().volume = shotVolume;
        //ベクトルを作成
        enemyBulletClone_RollingShot.GetComponent<Rigidbody2D>().velocity = new Vector2(
            Mathf.Sin(gameObject.transform.rotation.z*rotateAngle)*enemyShotSpeed*2,
            Mathf.Cos(gameObject.transform.rotation.z*rotateAngle)*enemyShotSpeed*2);
        //発射ポイントを回転
        gameObject.transform.Rotate(0, 0, rotateAngle);
        //撃った弾数を加算
        shotCount++;
    }


    IEnumerator ShotInterval(float interval)
    {
        //指定した秒数分待機
        yield return new WaitForSeconds(interval);
        //弾を撃つフラグをtrue
        isShot = true;
        //撃った弾数をリセット
        shotCount = shotCountReset;
    }
}
