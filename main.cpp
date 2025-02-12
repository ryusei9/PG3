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
#include <vector>
#include <algorithm>
#include <thread>
using namespace std;
// スレッドで実行する関数
void printMessage(const char* message) {
    std::cout << message << std::endl;
}
int main() {
   
    // スレッドを作成して実行
    std::thread t1(printMessage, "thread 1");
    t1.join();
    std::thread t2(printMessage, "thread 2");
    t2.join();
    std::thread t3(printMessage, "thread 3");
    t3.join();

    return 0;
}