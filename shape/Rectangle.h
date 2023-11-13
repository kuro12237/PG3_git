#pragma once
#include"IShape.h"
#include<stdio.h>

class Rectangle : public IShape
{
public:
	Rectangle() {};
	~Rectangle() {};

	void Size()override;

	void Draw()override;
private:

};

