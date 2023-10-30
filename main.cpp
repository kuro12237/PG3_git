#include<stdio.h>
#include<random>
#include<Windows.h>
#include<functional>

using namespace std;
typedef void (*DiceGame)(int *);

function<int()> AnsDice = []() {
	random_device seedGenerator;
	uniform_int_distribution<int>distribution(1, 6);
	int result = distribution(seedGenerator);
	return result;
};

function<void(int,int*)> AnsPrint = [](int diceAns,int *number)
{
	printf("‘I‘ğ‚µ‚½”‚Í%d‚Å‚·\n", *number);
	printf("Dice‚Í%d‚Ì–Ú‚ªo‚Ü‚µ‚½\n", diceAns);

	if (*number % 2 == 0 == diceAns % 2 == 0)
	{
		printf("YouWin\n");
	}
	else
	{
		printf("YouLose\n");
	}
};


void AnsFanc(int *number)
{
    int ansDice = AnsDice();
	AnsPrint(ansDice,number);
}

void TimeCount(DiceGame d,int SelectNumber,int &Timer,bool &IsSelect)
{
	Sleep(Timer * 1000);
	d(&SelectNumber);
	IsSelect = false;
}

int main() {

	int TestScanf = 0;
	int Timer = 3;
	bool isSelect = false;

	DiceGame diceGame;
	diceGame = AnsFanc;

	while (true)
	{
		if (!isSelect)
		{
			printf("1‚©2key‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
			scanf_s("%d", &TestScanf);

			if (TestScanf <= 0 || TestScanf >= 3)
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