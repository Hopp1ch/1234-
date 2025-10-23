#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Программа калькулятор" << endl;
	cout << "1 складывать			| +" << endl;
	cout << "2 вычитать				| -" << endl;
	cout << "3 умножать				| *" << endl;
	cout << "4 делить				| /" << endl;
	cout << "5 деление от остатка	| %" << endl;
	cout << "Выберите операцию:1,2,3,4,5" << endl;
	int operation;
	int Number_One;
	int Number_Two;
	cin >> operation;
	cout << "Введите первое число" << endl;
	cin >> Number_One;
	cout << "Введите второе число" << endl;
	cin >> Number_Two;
	if (operation == 1) {
		cout << "Ваш результат = " << Number_One + Number_Two << endl;
	}
	if (operation == 2) {
		cout << "Ваш результат = " << Number_One - Number_Two << endl;
	}
	if (operation == 3) {
		cout << "Ваш результат = " << Number_One * Number_Two << endl;
	}
	if (operation == 4) {
		if (Number_Two == 0) {
			cout << "На ноль делить нельзя повторите еще раз" << Number_One / Number_Two << endl;
			return 0;
		}
		else {
			cout << "Ваш результат = " << Number_One / Number_Two << endl;
		}
	}
	if (operation == 5) {
		if (Number_Two == 0) {
			cout << "На ноль делить нельзя повторите еще раз" << Number_One + Number_Two << endl;
			return 0;
		}
		else {
			cout << "Ваш результат = " << Number_One % Number_Two << endl;
		}
	}
	return 0;
}
