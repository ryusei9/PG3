#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <windows.h> // Sleep 関数のため
#include <functional>

// 1から6までのランダムな値を返すサイコロ関数
int RollDice() {
    return (rand() % 6) + 1;
}

// 指定された秒数待つ関数
void SetTimeOut(int time) {
    // 3秒間待機
    printf("正解を発表します...\n");
    Sleep(time);
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

    // 3秒間待つ
    SetTimeOut(3000);

   // ラムダ式を使って入力された値を処理する関数
    auto handleGuess = [guess,result](const char* correctAnswer) -> void {
        // 予想とサイコロの出目が一致するか確認
        if (strcmp(guess, correctAnswer) == 0) {
            printf("正解！ サイコロの出目は %d で %s です。\n", result, correctAnswer);
        } else {
            printf("不正解！ サイコロの出目は %d で %s でした。\n", result, correctAnswer);
        }
    };
    // サイコロの出目に応じて、正解を「奇数」または「偶数」としてラムダに渡す
    const char* correctAnswer = (result % 2 == 0) ? "偶数" : "奇数";

    // ラムダ式を使って結果を確認
    handleGuess(correctAnswer);

    return 0;
}