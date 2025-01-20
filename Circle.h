#pragma once
#include "IShape.h"
class Circle : public IShape
{
public:
	void Size() override;
	void Draw() override;
private:
	// 半径
	float radius_ = 3.0f;

	// 面積
	float area = 0.0f;
};

