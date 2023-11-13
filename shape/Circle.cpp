#include "Circle.h"

void Circle::Size()
{
	float result = GetSize().x * GetSize().y * std::numbers::pi;
	SetArea(result);
}

void Circle::Draw()
{
	printf("半径xは :%0.3f\n", GetSize().x);
	printf("半径yは :%0.3f\n", GetSize().y);
	printf("円周率は:%0.3f\n", float(std::numbers::pi));
	printf("面積は  :%0.3f\n", float(GetArea()));
}
