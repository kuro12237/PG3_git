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

	void Draw();

private:

	void Approach();
	void Leave();

	const int PhaseTimerMax_ = 10;
	int PhaseTimer_ = 10;
	//メンバ関数ポインタテーブル
	static void (Enemy::* phase_[])();

	char ModePrint_ = 'None';
};