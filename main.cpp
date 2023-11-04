#include<stdio.h>
#include"shape/Rectangle.h"
#include"shape/Circle.h"

int main()
{
	Ishape* Rectangle_ = new Rectangle();

	Rectangle_->SetSize({ 10.0f,10.0f });
	Rectangle_->Size();
	Rectangle_->Draw();

    Ishape* Circle_ = new Circle();
    
    Circle_->SetSize({ 10.0f,10.0f });
    Circle_->Size();
    Circle_->Draw();
    
    delete Rectangle_;
    delete Circle_;

	return 0;
}