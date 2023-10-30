#pragma once
#include<stdio.h>

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

	//メンバ関数ポインタテーブル
	static void (Enemy::* phase_[])();
};