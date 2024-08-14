using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    #region var-External
    [SerializeField] GameObject forMobileControl;
    [SerializeField] GameObject UI_Continue;
    [SerializeField] GameObject UI_Pause;       // ゲーム中断のUI

    [SerializeField] TMP_Text UI_score;       // 
    #endregion

    #region var_Boss

    [Header("ボスのオブジェクト")] [SerializeField] GameObject enemyBoss;
    [Header("ボスの出現位置")] [SerializeField] Transform bossSpawnPoint;
    [Header("ボスの出現スコア")] [SerializeField] int bossSpawnScore = 100;

    #endregion

    #region var-BossHP
    [Header("ボスのHPの最大値")] [SerializeField] int bossHPMax = 100;
    [Header("ボスのHPのUI")] [SerializeField] GameObject UI_BossStatus;
    [Header("ボスのHPのHP(テキスト)")] [SerializeField] TextMeshProUGUI UI_BossHPText;
    [Header("ボスのHPのHP(ゲージ)")] [SerializeField] Slider UI_BossHPGauge;

    #endregion

    #region var-Internal
    EnemyGenerator enemyGenerator;

    int pause = 0, pauseRelease = 1;
    int totalScore = 0, scoreMin = 0;
    public int scoreMax = 5000;
    int bossHPMin = 0;
    bool isBossSpawn = false;

    public int bossHPCurrent { get; set; }
    SoundManager soundManager;
    #endregion
    AudioSource audioSource;

    void Start()
    {
        //#if PLATFORM_STANDALONE_WIN
        //        ShotButton.SetActive(false);
        //#endif

        //int ySize = Screen.height;
        //int xSize = ySize * 9 / 16;//アスペクト比9:16の縦長に設定する
        //Screen.SetResolution(xSize, ySize, FullScreenMode.Windowed);

        enemyGenerator = GameObject.FindWithTag("EnemyGenerator").GetComponent<EnemyGenerator>();
        soundManager = GameObject.FindWithTag("SoundManager").GetComponent<SoundManager>();

        ScoreInit();
    }

    // Update is called once per frame
    void Update()
    {
        // Escキーが押された場合
        if (Input.GetKey(KeyCode.Escape))
        {
            // ゲーム中断のUIをアクティブ
            UI_Pause.SetActive(true);
            // ゲーム中断処理
            GamePause();
        }

        // BOSS破壊された場合
        //if (isBossSpawn && bossHPCurrent <= 0)
        //{
        //    SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        //}

        //ボスの出現スコア
        if (totalScore >= bossSpawnScore)
        {
            //ボスの出現フラグがfalseの場合
            if (!isBossSpawn)
            {
                if (enemyBoss.activeSelf)   //ボスがアクティブの状態
                {
                    isBossSpawn = true; //ボスフラグ
                    Instantiate(enemyBoss, bossSpawnPoint.position, Quaternion.identity);//ボス生成
                    //敵の生成を停止
                    enemyGenerator.CancelInvoke();
                    //ボスのHP更新
                    bossHPCurrent = bossHPMax;
                    //ボスのHP用UI表示
                    UI_BossStatus.SetActive(true);
                    //ボスのHP表示UI更新
                    EnemyBossHPDisplay();
                    //BGM切り替え
                    soundManager.ChangeBGMStart();
                }
            }
        }

        if (isBossSpawn && bossHPCurrent<=0)
        {
            //BGM停止
            soundManager.BGMStop();
        }
    }

    void GamePause()
    {
        //一時停止
        Time.timeScale = pause;
    }

    public void GamePauseRelease()
    {
        //一時停止を解除
        Time.timeScale = pauseRelease;
        // ゲーム中断のUIを非アクティブ
        UI_Pause.SetActive(false);
    }
    public void VisibleUI_Continue()
    {
        //一時停止
        GamePause();
        //コンテニューUIをアクティブ
        UI_Continue.SetActive(true);
    }
    public void StageContinue()
    {
        //一時停止を解除
        Time.timeScale = pauseRelease;
        //GamePauseRelease();
        //ステージのリロード
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    #region GameExit
    public void GameExit()
    {
        //ゲーム終了
        Application.Quit();
    }
    #endregion

    void ScoreInit()
    {
        totalScore = scoreMin;
        UI_score.SetText(totalScore.ToString());
    }
    public void ScoreAdd(int addScore)
    {
        totalScore += addScore;

        if (totalScore >= scoreMax)
        {

            totalScore = scoreMax;
        }
        UI_score.SetText(totalScore.ToString());
    }

    public void EnemyBossHPDisplay()
    {
        //ボスのHP（テキスト）を更新
        UI_BossHPText.SetText(bossHPCurrent + " / " + bossHPMax);

        //ボスのHPゲージの最大値を更新
        UI_BossHPGauge.maxValue = bossHPMax;
        //もしボスのHPが最小値以下の場合
        if (bossHPCurrent <= bossHPMin)
        {
            //ボスのHPを最小値にする
            bossHPCurrent = bossHPMin;
        }
        //ボスのHPゲージの現在地を更新
        UI_BossHPGauge.value = bossHPCurrent;

    }
}
