#pragma once
#include"../math/Vec2.h"

class Ishape
{
public:
	Ishape() {};
	virtual ~Ishape() {};

	virtual void Size() = 0;
	virtual void Draw() = 0;
	
	void SetSize(Vec2 size) { size_ = size; }
	void SetArea(float area) { area_ = area; }

	Vec2 GetSize() { return size_; }
	float GetArea() { return area_; }

private:

	Vec2 size_ = {};
	float area_ = {};
};

