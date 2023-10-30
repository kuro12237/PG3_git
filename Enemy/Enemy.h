#pragma once
#include<stdio.h>
#include<Windows.h>

class Enemy
{
public:
	Enemy();
	~Enemy();

	void Init();

	void Update();

	bool GetIsGameLoop() { return isGameLoop_; }

private:

	void Approach();
	void Leave();

	enum class Phase {
	     Approach,
	     Leave
	};
	
	Phase phase_{};

	//メンバ関数ポインタテーブル
	static void (Enemy::* sPhaseTable_[])();

	const int PhaseTimerMax_ = 5;
	int PhaseTimer_ = PhaseTimerMax_;

	bool isGameLoop_ = true;
};