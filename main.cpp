#include <stdio.h>
#include <iostream>
#include<vector>
#include<thread>

using namespace std;

void DrawText(const string text)
{
	cout << text << endl;
}

int main() {

	vector<string> texts{ "thread 1","thread 2","thread 3" };

	thread th1(DrawText, texts[0]);
	th1.join();

	thread th2(DrawText, texts[1]);
	th2.join();

	thread th3(DrawText, texts[2]);
	th3.join();

	return 0;
}