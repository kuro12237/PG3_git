#include"Apple.h"

Apple::Apple()
{
	SetFruisName("リンゴ");
	
}

void Apple::Buy()
{
	std::cout << GetFruiaName() + "を買おう" << std::endl;

	std::cout << "このフルーツは" << std::endl;
}
