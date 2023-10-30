#include<stdio.h>
#include<Windows.h>
#include"Enemy/Enemy.h"

int main()
{
	Enemy* enemy = new Enemy();
	enemy->Init();

	bool isGameLoop = true;

	while (isGameLoop)
	{
		enemy->Update();

		isGameLoop = enemy->GetIsGameLoop();
	}
	printf("終了\n");
	delete enemy;
	return 0;
}
