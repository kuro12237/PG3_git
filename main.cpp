#include<stdio.h>
#include<random>
#include<Windows.h>
#include<functional>

using namespace std;

random_device randomDevice;
mt19937 mtrand(randomDevice());

typedef void (*pFunc)(int);

void DiceResultPrint(int diceRollNumber)
{
	printf("%dが出ました\n", diceRollNumber);
	
	if (diceRollNumber % 2 == 0) {
		printf("丁でした\n");
	}
	if (diceRollNumber % 2 == 1) {
		printf("半でした\n");
	}
};

void GameResult(int diceAns, int playerAns)
{
	if (diceAns % 2 == 0 && playerAns == 2) {
		printf("YouWin\n");
	}
	else if (diceAns % 2 == 1 && playerAns == 1) {
		printf("YouWin\n");
	}
	else {
		printf("YouLose\n");
	}
}

void DiceRoll(int ans)
{
	int diceResult = uniform_int_distribution<int>(1, 6)(randomDevice);
	DiceResultPrint(diceResult);
	GameResult(diceResult, ans);
}

void TimeCount(pFunc fanc,int ans,int &Timer)
{
	for (; Timer > 0; Timer--)
	{
		printf("%d秒前\n", Timer);
		Sleep(1000);
	}
	fanc(ans);
}

int main() {

	int PlayerAns = 0;
	int Timer = 3;
	bool isSelect = false;

	pFunc p;

	while (true)
	{
		if (!isSelect)
		{
			printf("1か2keyを入力してください\n");
			scanf_s("%d", &PlayerAns);

			//0以下3以上の場合スキップ
			if (PlayerAns <= 0 || PlayerAns >= 3)
			{
				continue;
			}
			isSelect = true;
		}

		if (isSelect)
		{
			p = DiceRoll;
			TimeCount(p,PlayerAns,Timer);
		
			isSelect = false;
			Timer = 3;
		}
	}

	return 0;
}