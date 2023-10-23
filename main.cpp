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

	printf("%d時間働いたときの給料\n", workingTime);
	printf("一般的賃金体系の給料 : %d\n",NormalTotalWage);
	printf("再起的賃金体系の給料 : %d\n", RecursiveTotalWage);

	return  0;
}