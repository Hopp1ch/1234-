#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[~] ЦИКЛ WHILE" << endl;
	cout << "Для выхода из программы нажмите на 0\n";
	int number;
	do {
		cout << "Введите число: ";
		cin >> number;
		if (number >= 1 and number <= 15) {
			for (int i = 0; i != number; i++) {
				cout << "Цикл отработал. Круг:" << i+1 << endl;
			}
		}
		else if (number < 1 and number != 0) {
			cout << "Цикл не может отработать если значения меньше единицы\n";
			cout << "Повторите операцию\n";
		}
		else if(number > 15 and number !=0){
			cout << "Цикл не может отработать если значение больше пятнадцати\n";
			cout << "Повторите операцию\n";
		}
	}while (number != 0);
	return 0;
}
