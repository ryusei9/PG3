#pragma once
class Enemy
{
public:
	enum Phese {
		APPROACH,
		FIRE,
		LEAVE
	};

	Phese phese_;


	void Initialize();

	void Update();
	// 接近
	void Approach();
	// 射撃
	void Fire();
	// 離脱
	void Leave();
private:
	
	// メンバ関数ポインタのテーブル
	static void (Enemy::*spFuncTable[])();


};

