#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <windows.h> // Sleep 関数のため

// 1から6までのランダムな値を返すサイコロ関数
int RollDice() {
    return (rand() % 6) + 1;
}

// コールバック関数の型を定義
typedef void (*ResultCallback)(int, const char*);

// 偶数か奇数かを判定して正解か不正解かを表示する関数（コールバック）
void CheckGuess(int result, const char* guess) {
    const char* correctAnswer = (result % 2 == 0) ? "偶数" : "奇数";

    // 3秒間待機
    printf("正解を発表します...\n");
    Sleep(3000);

    // 予想とサイコロの出目が一致するか確認
    if (strcmp(guess, correctAnswer) == 0) {
        printf("正解！ サイコロの出目は %d で %s です。\n", result, correctAnswer);
    } else {
        printf("不正解！ サイコロの出目は %d で %s でした。\n", result, correctAnswer);
    }
}

int main() {
    // 乱数のシードを初期化
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // サイコロを振る
    int result = RollDice();
    // 文字列を入れる変数
    char guess[10];

    // ユーザーに奇数か偶数かを入力させる
    printf("サイコロの出目は「奇数」でしょうか「偶数」でしょうか？\n");
    scanf_s("%9s", guess, (unsigned)_countof(guess));

    // 関数ポインタを宣言して、コールバック関数をセット
    ResultCallback callback = &CheckGuess;

    // 関数ポインタを使ってコールバックを呼び出す
    (*callback)(result, guess);

    return 0;
}