#pragma once
#include<iostream>
#include"Fruis.h"

class Orange : public Fruits
{
public:
	Orange();
	~Orange() {};

	void Buy()override;

private:

};