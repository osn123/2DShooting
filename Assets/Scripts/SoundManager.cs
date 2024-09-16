using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    #region bgm
    [Header("入れ替えるBGM")] [SerializeField] AudioClip changeBGM;
    [Header("入れ替えるBGM音量")] [SerializeField] float changeBGMVolume;
    [Header("フェードする時間")] [SerializeField] float fadeTime=3f;

    AudioSource audioSource;
    float bgmVolume = 0;
    float fadeDeltaTime = 0, FadeDeltaTimeReset = 0;
    float volumeMin = 0;
    bool isFadeIn = false, isFadeOut = false;
    bool changeBGMStart = false;
    #endregion

    void Start()
    {
        //オーディオソースを取得
        audioSource = GetComponent<AudioSource>();
        //現在の音量を取得
        bgmVolume = audioSource.volume;
    }
    void Update()
    {
        //BGM入れ替えフラグがfalse
        if (!changeBGMStart)
        {
            if (audioSource==null || changeBGM == null)
            {
                //処理を中断
                return;
            }
        }

        if (isFadeOut)
        {
            fadeDeltaTime += Time.deltaTime;
            if (fadeDeltaTime>=fadeTime)
            {
                fadeDeltaTime = fadeTime;
                isFadeOut = false;
            }
            audioSource.volume = bgmVolume - (fadeDeltaTime / fadeTime);
            if(audioSource.volume<=volumeMin)
            {
                audioSource.volume = volumeMin;
                isFadeOut = false;
                isFadeIn = true;
                fadeDeltaTime = FadeDeltaTimeReset;
            }
        }
        if (isFadeIn)
        {
            fadeDeltaTime += Time.deltaTime;
            audioSource.clip = changeBGM;
            audioSource.Play();

            if (fadeDeltaTime >= fadeTime)
            {
                fadeDeltaTime = fadeTime;
                isFadeIn = false;
            }

            audioSource.volume = (fadeDeltaTime / fadeTime);
            if (audioSource.volume >= changeBGMVolume)
            {
                audioSource.volume = changeBGMVolume;
                isFadeIn = false;
                fadeDeltaTime = FadeDeltaTimeReset;
                changeBGMStart = false;
            }
        }

    }
    public void ChangeBGMStart()
    {
        changeBGMStart = true;
        isFadeOut = true;
    }
    public void BGMStop()
    {
        audioSource.Stop();
    }
}
