#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <windows.h>
#include <functional>
#include "Train.h"
#include "TamagawaLine.h"
#include "IkegamiLine.h"

int main() {
    // 電車クラス
    Train *trains[2];

    // 多摩川線クラスと池上線クラスを代入
    trains[0] = new TamagawaLine;
    trains[1] = new IkegamiLine;

    // 多摩川線
    trains[0]->MyName();

    delete trains[0];

    // 池上線
    trains[1]->MyName();

    delete trains[1];
    return 0;
}