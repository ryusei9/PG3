#pragma once
#include "IShape.h"
class Rect : public IShape
{
public:
	void Size() override;
	void Draw() override;
private:
	// 幅
	float width_ = 5.0f;
	// 高さ
	float height_ = 3.0f;

	// 面積
	float area = 0.0f;
};

