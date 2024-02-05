#include <stdio.h>
#include <iostream>
#include<vector>
#include<thread>

using namespace std;

int main() {

	const int Text_Size = 100000;
	string Text_A(Text_Size, 'a');
	cout << Text_Size << "文字コピーと移動を比較\n";
	chrono::steady_clock::time_point now;
	chrono::steady_clock::time_point end;

	///copy
	now = chrono::steady_clock::now();
	string CopyText_A = Text_A;
    end = chrono::steady_clock::now();

   int copyResult = chrono::duration_cast<chrono::microseconds>(end - now).count();

	cout << "コピーの場合" << "\n";
	cout << copyResult << "\n";

	///move
	now = chrono::steady_clock::now();
	string MoveText_A = move(Text_A);
	end = chrono::steady_clock::now();

	int MoveResult = chrono::duration_cast<chrono::microseconds>(end - now).count();

	cout << "移動の場合" << "\n";
	cout << MoveResult << " \n";

	return 0;
}