#include<stdio.h>

template<typename T>
T Min(T a,T b)
{
	if (a<b){
		return a;
	}
	if (b<a){
		return b;
	}
};

template<>
char Min<char>( char a, char b)
{
	printf("数字以外は代入できません\n");
	return 0;
}

int main(void)
{

	//int
	printf("%d\n",Min<int>(512, 6));
	
	//float
	printf("%f\n", Min<float>(40.5f, 60.0f));

	//double
    printf("%lf\n",Min<double>(30.5, 70.0));

	//char
	Min<char>('a', 'g');

	return 0;
}
