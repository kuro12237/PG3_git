﻿#include "Fruis.h"
#include<iostream>

Fruits::~Fruits()
{
	std::cout << "レジに持って行って買ってこよう" << std::endl;
}

void Fruits::Explain()
{
	std::cout << "どのフルーツを買う？" << std::endl;
}
