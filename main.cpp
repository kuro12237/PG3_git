#include<stdio.h>

int RecursiveSalary(int workingTime)
{
	if (workingTime == 1) {
		return 100;
	}else if (workingTime > 1) {
		return RecursiveSalary(workingTime - 1) * 2 - 50;;
	}
}

int main() 
{
	const int workingTime = 9;
	const int hourlyWage = 1072;

	int NormalTotalWage = hourlyWage * workingTime;
	int RecursiveTotalWage = RecursiveSalary(workingTime);

	printf("%d“­‚¢‚½‚Æ‚«‚Ì‹‹—¿\n", workingTime);
	printf("ˆê”Ê“I’À‹à‘ÌŒn‚Ì‹‹—¿ : %d\n",NormalTotalWage);
	printf("Ä‹N“I’À‹à‘ÌŒn‚Ì‹‹—¿ : %d\n", RecursiveTotalWage);

	return  0;
}