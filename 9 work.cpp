#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[~] ЦИКЛ WHILE" << endl;
	cout << "Для выхода из программы нажмите на 0" << endl;
	int number;
	do {
		cout << "Введите число: ";
		cin >> number;
		if (number >= 1 and number <= 15) {
			cout << "Цикл отработал. Круг:" << number << endl;
		}
		else if (number < 1 and number != 0) {
			cout << "Цикл не может отработать если значения меньше единицы" << endl;
			cout << "Повторите операцию" << endl;
		}
		else if(number > 15 and number !=0){
			cout << "Цикл не может отработать если значение больше пятнадцати" << endl;
			cout << "Повторите операцию" << endl;
		}
	}while (number != 0);
	return 0;
}
