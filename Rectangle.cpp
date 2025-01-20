#include "Rectangle.h"
#include <stdio.h>

void Rect::Size()
{
	// 長方形の面積を求める
	area = width_ * height_;
}

void Rect::Draw()
{
	// 長方形を描画する
	printf("Draw Rectangle\n");
	printf("Width: %f\n", width_);
	printf("Height: %f\n", height_);
	printf("Area: %f\n", area);
}
