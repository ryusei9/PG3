#pragma once
// 電車クラス
class Train
{
public:
	// コンストラクタ
	Train();
	
	// デストラクタ
	virtual ~Train();

	// 名乗る
	virtual void MyName();

protected:
	// 名前
	const char* name = nullptr;

	const char* terminal = nullptr;
};

