#pragma once

class Enemy
{
public:
	Enemy();
	~Enemy();

	void Init();

	void Update();

	void Draw();

private:

	//メンバ関数ポインタテーブル
	static void (Enemy::* pFuncTable[])();
};