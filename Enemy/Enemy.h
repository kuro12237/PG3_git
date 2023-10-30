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

	int PhaseTimer_ = 10;
	//メンバ関数ポインタテーブル
	static void (Enemy::* phase_[])();
};