#include "Circle.h"
#include <corecrt_math_defines.h>
#include <stdio.h>

void Circle::Size()
{
	// 円形の面積を求める
	area = M_PI * radius_ * radius_;
}

void Circle::Draw()
{
	// 円形を描画する
	printf("Draw Circle\n");
	printf("Radius: %f\n", radius_);
	printf("Area: %f\n", area);
}
