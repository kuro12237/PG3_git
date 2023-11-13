#pragma once
#include<iostream>
#include"Fruis.h"

class Apple : public Fruits
{
public:
	Apple();
	~Apple() {};

	void Explain()override;

private:

};