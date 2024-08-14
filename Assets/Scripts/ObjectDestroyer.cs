using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectDestroyer : MonoBehaviour
{
    // オブジェクトが接触したら消す
    private void OnTriggerEnter2D(Collider2D collision)
    {
        // オブジェクトのタグがPlayerではない場合
        if (!collision.gameObject.CompareTag("Player"))
        {
            // 接触してきたオブジェクトを削除
            Destroy(collision.gameObject);
        }
    }

}
