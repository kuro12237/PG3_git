#include "Orange.h"

Orange::Orange()
{
	SetFruisName("オレンジ");
}

void Orange::Buy()
{
	std::cout << "この" + GetFruiaName() + "は広島県産だ" << std::endl;
}