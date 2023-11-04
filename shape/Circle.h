#pragma once
#include"Ishape.h"
#include<numbers>
#include<stdio.h>

class Circle : public Ishape
{
public:
	Circle() {};
	~Circle() {};

	void Size()override;

	void Draw()override;

private:

};