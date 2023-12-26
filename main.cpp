#include <stdio.h>
#include <list>
#include <iostream>

//std::stringを使ってはいけないということは
//std::を抜けばいいということ!?
using namespace std;

int main() {

	list<const char*> yamanoteStation{
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome",
		"Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucyo"

	};

	cout << "山手線の全駅" << "\n";
	cout << "1970年、2019年、2022年の一覧を表示" << "\n";
	cout << "表示したい年を入力" << "\n";


	//入力
	int selectYear = 0;
	cin >> selectYear;

	//1970年
	if (selectYear == 1970) {
		cout << "1970年の駅一覧を表示" << "\n";
	}

	//2019年
	if (selectYear == 2019) {
		cout << "2019年の駅一覧を表示" << "\n";
		for (list<const char*>::iterator itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {
			if (*itr == "Tabata") {
				itr = yamanoteStation.insert(itr, "Nishi-Nippori");
				++itr;
			}
		}

	}

	//2022年
	if (selectYear == 2022) {
		cout << "2022年の駅一覧を表示" << "\n";
		for (list<const char*>::iterator itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {
			if (*itr == "Tabata") {
				itr = yamanoteStation.insert(itr, "Nishi-Nippori");
				++itr;
			}
			if (*itr == "Tamachi") {
				itr = yamanoteStation.insert(itr, "Takanawa GateWay");
				++itr;
			}
		}

	}

	//追加した後に表示
	for (list<const char*>::iterator itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {

		cout << *itr << "\n";
	}

	return 0;
}