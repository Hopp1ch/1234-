#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(0, "");
	srand = (time(NULL));
	int menu;
	bool exitmenu = false;
	while (!exitmenu) {
		cout << "[~] Угадайка\n";
		cout << "[1] Начать игру\n";
		cout << "[2] Выйти\n";
		cout << "[-] Выберите пункт: ";
		cin >> menu;
		if (menu == 1) {
			int num1, num2, num3;
			num1 = rand() % 10 + 1;
			do {
				num2 = rand() % 10 + 1;
			} while (num1 == num2);
			do {
				num3 = rand() % 10 + 1;
			} while (num3 == num2 || num3 == num1);
			int popitki = 5;
			int guessnum = 0;
			int guessnumcount = 0;
			while (popitki > 0 && guessnum < 3) {
				cout << "[+] Угаданных чисел: [ " << guessnum << " / 3 ]\n";
				cout << "[+] Попыток: [ " << popitki << " ]\n";
				cout << "Угадать число: \n";
				int userguess;
				cin >> userguess;
				if (userguess < 1 || userguess>10) {
					cout << "[!] Ошибка! Число должно быть от 1 до 10.\n";
					continue;
				}
				bool
			}
		}
	}			
	
	return 0;
}
