#include<stdio.h>
#include<random>
#include<Windows.h>
#include<functional>

using namespace std;
typedef void (*DiceGame)(int *);

//function<int()> AnsDice = []() {
//	random_device seedGenerator;
//	uniform_int_distribution<int>distribution(1, 6);
//	int result = distribution(seedGenerator);
//	return result;
//};

function<void()> AnsPrint = []()
{
	//printf("選択した数は%dです\n", *number);
	//printf("Diceは%dの目が出ました\n", diceAns);

	//if (*number % 2 == 0 == diceAns % 2 == 0)
	//{
	//	printf("YouWin\n");
	//}
	//else
	//{
	//	printf("YouLose\n");
	//}
};


void SelectNumber(int *number)
{
    //int ans = AnsDice();


}

void TimeCount(DiceGame d,int SelectNumber,int &Timer,bool &IsSelect)
{
	Sleep(Timer * 1000);
	d(&SelectNumber);
	IsSelect = false;
}

int main() {

	int TestScanf = {};
	int Timer = 3;
	bool isSelect = false;

	DiceGame diceGame;
	diceGame = SelectNumber;

	while (true)
	{
		if (!isSelect)
		{
			printf("1か2keyを入力してください\n");
			scanf_s("%d", &TestScanf);

			if (TestScanf<=0||TestScanf>=3)
			{
				continue;
			}
			isSelect = true;
		}

		if (isSelect)
		{
			TimeCount(diceGame, TestScanf, Timer,isSelect);
		}
	}
	return 0;
}