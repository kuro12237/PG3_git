#pragma once
#include"Fruis.h"
#include<iostream>

class Apple : public Fruits
{
public:
	Apple();
	~Apple() {};

	void Buy()override;
private:

};