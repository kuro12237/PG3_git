#pragma once
#include<stdio.h>
#include<string>

class Fruits
{
public:
	Fruits();
	virtual ~Fruits() {};

	virtual void Buy() {};

	void SetFruisName(std::string name) { fruitsName_ = name; }
	std::string GetFruiaName() { return fruitsName_; }

private:

	std::string fruitsName_ = "フルーツ";

};

