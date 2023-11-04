#include"NumberCompare.h"
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	//int,int
	NumberCompare<int, int>Int_IntCompare;
	Int_IntCompare.SetNumber(2, 4);
	cout << Int_IntCompare.Min() << endl;

	//int,float
	NumberCompare<int, float>Int_FloatCompare;
	Int_FloatCompare.SetNumber(6, 4.0f);
	cout << Int_FloatCompare.Min() << endl;

	//int,double
	NumberCompare<int, double>Int_DoubleCompare;
	Int_DoubleCompare.SetNumber(7, 6.0);
	cout << Int_DoubleCompare.Min() << endl;

	//float float
	NumberCompare<float, float>Float_FloatCompare;
	Float_FloatCompare.SetNumber(2.0f, 4.0f);
	cout << Float_FloatCompare.Min() << endl;

	//float,double
	NumberCompare<float, double>Float_DoubleCompare;
	Float_DoubleCompare.SetNumber(2.0f, 4.0);
	cout << Float_DoubleCompare.Min() << endl;

	//double,double
	NumberCompare<double, double>Double_DoubleCompare;
	Double_DoubleCompare.SetNumber(7.0, 3.0);
	cout << Double_DoubleCompare.Min() << endl;

	return 0;
}