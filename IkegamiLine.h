#pragma once
#include "Train.h"
// 池上線クラス
class IkegamiLine : public Train
{
public:
	// コンストラクタ
	IkegamiLine();

	// デストラクタ
	~IkegamiLine();

	void MyName() override;
private:
};

