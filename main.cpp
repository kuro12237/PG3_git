#include<stdio.h>
#include<random>
#include<Windows.h>
#include<functional>

using namespace std;

random_device randomDevice;
mt19937 mtrand(randomDevice());

int SetTimeCount(function<int()> coll,int &Timer)
{
	for (; Timer > 0; Timer--)
	{
		printf("%d秒前\n", Timer);
		Sleep(1000);
	}
	return coll();
}

int main() {

	int PlayerAns = 0;
	int Timer = 3;
	bool isSelect = false;

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
			function<int()> DiseRoll = []() 
			{
				return std::uniform_int_distribution<int>(1, 6)(randomDevice); 
			};

			int DiceResult = SetTimeCount(DiseRoll, Timer);
			
			function<void(int)> DiceResultPrint = [](int diceRollNumber)
			{
				printf("%dが出ました\n", diceRollNumber);

				if (diceRollNumber % 2 == 0) {
					printf("丁でした\n");
				}
				if (diceRollNumber % 2 == 1) {
					printf("半でした\n");
				}
			};

			DiceResultPrint(DiceResult);

			function<void(int, int)>PrintGameOutcome = [](int DiceResult, int PlayerAns) 
			{
				if (DiceResult % 2 == 0 && PlayerAns == 2) {
					printf("YouWin\n");
				}
				else if (DiceResult % 2 == 1 && PlayerAns == 1) {
					printf("YouWin\n");
				}
				else {
					printf("YouLose\n");
				}
			};

			PrintGameOutcome(DiceResult, PlayerAns);

			isSelect = false;
			Timer = 3;
		}
	}

	return 0;
}