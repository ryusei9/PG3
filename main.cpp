#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <windows.h>
#include <functional>
#include "Enemy.h"

int main() {
    // Enemyの宣言
    Enemy* enemy_ = nullptr;
    enemy_ = new Enemy;
    enemy_->Initialize();
    
    // `LEAVE` フェーズが完了するまでループ
    while (enemy_->phese_ != Enemy::LEAVE) {
        enemy_->Update();
    }
    // `LEAVE` 処理を実行し、終了
    enemy_->Update();
    printf("敵は去っていった\n");
    return 0;
}