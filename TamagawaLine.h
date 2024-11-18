#pragma once
#include "Train.h"
// 多摩川線クラス
class TamagawaLine : public Train
{
public:
	// コンストラクタ
	TamagawaLine();
	// デストラクタ
	~TamagawaLine();

	// 名乗る
	void MyName() override;
};

