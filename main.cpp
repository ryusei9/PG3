#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <windows.h>
#include <functional>
#include "Circle.h"
#include "Rectangle.h"

int main() {
	// インスタンス生成
	Circle circle;
	Rect rectangle;

	// サイズを求める
	circle.Size();
	rectangle.Size();

	// 描画する
	circle.Draw();
	rectangle.Draw();

    return 0;
}