#include "Enemy.h"
#include <stdio.h>

void Enemy::Initialize()
{
	// フェーズを初期化
	phese_ = APPROACH;
}

void Enemy::Update()
{
    // 現在のフェーズの関数を実行
    (this->*spFuncTable[static_cast<size_t>(phese_)])();

    // デバッグ用表示
    switch (phese_)
    {
    case APPROACH:
        printf("現在のフェーズ: 接近\n");
        break;
    case FIRE:
        printf("現在のフェーズ: 射撃\n");
        break;
    case LEAVE:
        printf("現在のフェーズ: 離脱\n");
        break;
    default:
        printf("未知のフェーズ\n");
        break;
    }

    // フェーズ切り替え条件（例: 切り替えタイミングを設定）
    // ここで、フェーズの変更条件を追加します
    // 例えば、一定時間後に次のフェーズに切り替えます
    if (phese_ == APPROACH)
    {
        // 接近フェーズから射撃フェーズへ
        phese_ = FIRE;
    } else if (phese_ == FIRE)
    {
        // 射撃フェーズから離脱フェーズへ
        phese_ = LEAVE;
    } else if (phese_ == LEAVE)
    {
        // 離脱フェーズから接近フェーズへ戻す
        phese_ = APPROACH;
    }

}

void Enemy::Approach()
{
	printf("接近\n");
}

void Enemy::Fire()
{
	printf("射撃\n");
}

void Enemy::Leave()
{
	printf("離脱\n");
}

void (Enemy::*Enemy::spFuncTable[])() =
{
	&Enemy::Approach,	// 要素番号0
	&Enemy::Fire,		// 要素番号1
	&Enemy::Leave		// 要素番号2
};
