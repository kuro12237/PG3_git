#include<stdio.h>
#include<random>
#include<Windows.h>

using namespace std;
typedef void (*DiceGame)(int *);

int AnsDice(void) 
{
	random_device seedGenerator;
	uniform_int_distribution<int>distribution(1,6);
	int result = distribution(seedGenerator);
	return result;
}

void SelectNumber(int *number)
{
	int ans = AnsDice();

	printf("‘I‘ğ‚µ‚½”‚Í%d‚Å‚·\n", *number);
	printf("Dice‚Í%d‚Ì–Ú‚ªo‚Ü‚µ‚½\n", ans);
	if (*number % 2 == 0 == ans % 2 == 0)
	{
		printf("YouWin\n");
	}
	else
	{
		printf("YouLose\n");
	}
}

void TimeCount(DiceGame d,int SelectNumber,int &Timer,bool &IsSelect)
{
	Sleep(Timer * 1000);
	d(&SelectNumber);
	IsSelect = false;
}

int main() {
	int TestScanf;
	int Timer = 3;
	bool isSelect = false;

	DiceGame diceGame;
	diceGame = SelectNumber;

	while (true)
	{
		if (!isSelect)
		{
			printf("1‚©2key‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
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