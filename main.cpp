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
int Min<int>(int a, int b)
{
	if (a < b) {
		printf("%d\n",a);
		return a;
	}
	if (b < a) {
		printf("%d\n", b);
		return b;
	}
};

template<>
float Min<float>(float a, float b)
{
	if (a < b) {
		printf("%f\n", a);
		return a;
	}
	if (b < a) {
		printf("%f\n", b);
		return b;
	}
};

template<>
double Min<double>(double a, double b)
{
	if (a < b) {
		printf("%lf\n", a);
		return a;
	}
	if (b < a) {
		printf("%lf\n", b);
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
	Min<int>(512, 6);
	//float
    Min<float>(40.5f, 60.0f);
	//double
    Min<double>(30.5, 70.0);
	//char
	Min<char>('a', 'g');

	return 0;
}