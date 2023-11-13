#include"Apple.h"

Apple::Apple()
{
	SetFruisName("リンゴ");
}

void Apple::Buy()
{
	std::cout << "この" + GetFruiaName() + "は青森県産だ" << std::endl;
}
