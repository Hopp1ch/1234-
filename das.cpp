#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int number;
	cout << "Введите число: ";
	cin >> number;
	if (number >= 0 and number <= 10) {
		cout << "Цифра в диапозоне: 0-10" << endl;
	}
	else if (number >= 11 and number <= 20) {
		cout << "Цифра в диапозоне: 11-20" << endl;
	}
	else if (number >= 21 and number <= 30) {
		cout << "Цифра в диапозоне: 21-30" << endl;
	}
	else if (number >= 31 and number <= 40) {
		cout << "Цифра в диапозоне: 31-40" << endl;
	}
	else if (number >= 41 and number <= 50) {
		cout << "Цифра в диапозоне: 41-50" << endl;
	}
	else if (number >= 51 and number <= 60) {
		cout << "Цифра в диапозоне: 51-60" << endl;
	}
	else if (number >= 61 and number <= 70) {
		cout << "Цифра в диапозоне: 61-70" << endl;
	}
	else if (number >= 71 and number <= 80) {
		cout << "Цифра в диапозоне: 71-80" << endl;
	}
	else if (number >= 81 and number <= 90) {
		cout << "Цифра в диапозоне: 81-90" << endl;
	}
	else if (number >= 91 and number <= 100) {
		cout << "Цифра в диапозоне: 91-100" << endl;
	}
	else {
		if (number < 0) {
			cout << "Цифра находится вне диапозона и меньше нуля" << endl;
		}
		else {
			cout << "Цифра находится вне диапозона и больше сотни" << endl;
		}
	}
	return 0;
}
