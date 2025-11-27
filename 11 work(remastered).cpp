#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[ + ] Программа - “Геометрические фигуры\n";
	cout << "[1] Линия\n";
	cout << "[2] Выход\n";
	bool exitline = false;
	bool exit = false;
	do {
		cout << "[+] Выберите действие: ";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			cout << "Фигура: 'Линия'\n";
			cout << "[1] Горизонтальная\n";
			cout << "[2] Вертикальная\n";
			do {
				int choicetype;
				cin >> choicetype;
				if (choicetype == 1) {
					cout << "Длина линии: ";
					int length;
					cin >> length;
					cout << "Текстура линии: ";
					string texture;
					cin >> texture;
					cout << "Результат:\n";
					while (length>=0) {
						cout << texture;
						length -= 1;
					}
					cout << endl;
					exitline = true;
				}
				else if (choicetype == 2) {
					cout << "Длина линии: ";
					int length;
					cin >> length;
					cout << "Текстура линии: ";
					string texture;
					cin >> texture;
					cout << "Результат:\n";
					while (length) {
						cout << texture << endl;
						length -= 1;
					}
					cout << endl;
					exitline = true;
				}
				else {
					cout << "Нет такого значения! Повторите попытку\n";
				}

			} while (!exitline);
		case 2:
			cout << "Выход из программы......\n";
			exit = true;
			break;
		default:
			cout << "Нет такого значения! Повторите попытку\n";
			break;
		}
	} while (!exit);
	return 0;
}
