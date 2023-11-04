#include "Rectangle.h"

void Rectangle::Size()
{
	float result = GetSize().x* GetSize().y;
	SetArea(result);
}

void Rectangle::Draw()
{
	printf("横は  :%0.3f\n", GetSize().x);
	printf("縦は  :%0.3f\n", GetSize().y);
	printf("面積は:%0.3f\n",GetArea());
}
