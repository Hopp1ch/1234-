#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(0, "");
	int menu;
	bool exitmenu = false;
	while (!exitmenu) {
		cout << "[~] Угадайка\n";
		cout << "[1] Начать игру\n";
		cout << "[2] Выйти\n";
		cout << "[-] Выберите пункт: ";
		cin >> menu;
		if (menu == 1) {
			cout << "Start game\n";
			srand(time(NULL));
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
			bool found1 = false, found2 = false, found3 = false;
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
				bool correctguess = false;
				if (!found1 && userguess == num1) {
					found1 = true;
					guessnum++;
					correctguess = true;
				}
				if (!found2 && userguess == num2) {
					found2 = true;
					guessnum++;
					correctguess = true;
				}
				if (!found3 && userguess == num3) {
					found3 = true;
					guessnum++;
					correctguess = true;
				}
				if (correctguess) {
					cout << "[+] Вы угадали число!\n";
				}
				else {
					cout << "[-] Число не угадано\n";
				}
				popitki--;
				cout << endl;
			}
			if (guessnum == 3) {
				cout << "Поздравляем! Вы угадали все 3 числа!\n";
			}
			else {
				cout << "К сожалению, вы не угадали все числа.\n";
				cout << "Загаданные числа были: " << num1 << ", " << num2 << ", " << num3 << endl;
			}
			cout << endl;
			break;
		}
		if (menu == 2) {
			cout << "Exit from programm....\n";
			exitmenu = true;
		}
		else {
			cout << "Wrong choice! Try again.\n";
			cout << endl;
		}
	}

	return 0;
}
