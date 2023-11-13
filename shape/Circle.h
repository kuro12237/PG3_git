#pragma once
#include"IShape.h"
#include<numbers>
#include<stdio.h>

class Circle : public IShape
{
public:
	Circle() {};
	~Circle() {};

	void Size()override;

	void Draw()override;

private:

};