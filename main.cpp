#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <windows.h>
#include <functional>
#include "Circle.h"
#include "Rectangle.h"
#include <list>
using namespace std;
int main() {
    // 山手線の駅名を英語表記でリストに追加
    list<const char*> yamanoteLineStations = {
        "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani",
        "Nippori", "Tabata", "Komagome", "Sugamo",
        "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Shin-Okubo",
        "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro",
        "Gotanda", "Osaki", "Shinagawa", "Tamachi", "Hamamatsucho",
        "Shimbashi", "Yurakucho"
    };

	// 1970年の山手線の駅名を表示
	printf("1970年\n");
    for (const auto& station : yamanoteLineStations) {
        std::cout << station << std::endl;
    }
    printf("\n2019年\n");

    for (list<const char*>::iterator itr = yamanoteLineStations.begin();itr != yamanoteLineStations.end();++itr) {
        // 田端の前に西日暮里を入れる
        if (*itr == "Tabata") {
			yamanoteLineStations.insert(itr, "Nishi-Nippori");
			break;
        }
    }
    // リストの内容を表示
    for (const auto& station : yamanoteLineStations) {
        std::cout << station << std::endl;
    }
    printf("\n2022年\n");
    for (list<const char*>::iterator itr = yamanoteLineStations.begin();itr != yamanoteLineStations.end();++itr) {
        // 田町の前に高輪ゲートウェイを入れる
        if (*itr == "Tamachi") {
            yamanoteLineStations.insert(itr, "TakanawaGateway");
            break;
        }
    }
    // リストの内容を表示
    for (const auto& station : yamanoteLineStations) {
        std::cout << station << std::endl;
    }
    return 0;
}