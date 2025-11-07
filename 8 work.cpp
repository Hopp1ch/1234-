#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int choice;
	int word;
	string RusWords[15] = { "Дом","Дорога","Город","Мышь","Глаз","Окно","Дверь","Стул","Стол","Монитор","Этаж","Комната","Колесо","Джинсы","Клавиатура" };
	string EngWords[15] = { "House","Road","City","Mouse","Eye","Window","Door","Chair","Table","Screen","Floor","Room","Wheel","Jeans","Keyboard" };
	string TranslateRus[15]= { "House","Road","City","Mouse","Eye","Window","Door","Chair","Table","Screen","Floor","Room","Wheel","Jeans","Keyboard" };
	string TranslateEng[15]= { "Дом","Дорога","Город","Мышь","Глаз","Окно","Дверь","Стул","Стол","Монитор","Этаж","Комната","Колесо","Джинсы","Клавиатура" };
	do {
		cout << "[~] Переводчик\n";
		cout << "[1] Русские слова\n";
		cout << "[2] Английские слова\n";
		cout << "[3] Выйти\n";
		cout << "Выберите действие: ";
		cin >> choice;
		switch (choice) {
		case 1: {
			for (int i = 0; i < 15; i++) {
				cout << "[" << (i + 1) << "]" << RusWords[i] << endl;
			}
			cout << "Выберите номер слова: ";
			cin >> word;
			if (word >= 1 and word <= 15) {
				cout << "Перевод: " << RusWords[word - 1] << "-->" << TranslateRus[word - 1] << endl;
			}
			else {
				cout << "Error\n";
			}
			break;
		}
		case 2: {
			for (int i = 0; i < 15; i++) {
				cout << "[" << (i + 1) << "]" << EngWords[i] << endl;
			}
			cout << "Выберите номер слова: ";
			cin >> word;
			if (word >= 1 and word <= 15) {
				cout << "Перевод: " << EngWords[word - 1] << "-->" << TranslateEng[word - 1] << endl;
			}
			else {
				cout << "Error\n";
			}
			break;
		}
		case 3: {
			cout << "Goodbye\n";
			break;
		}
		default:
			cout << "Error choice the point 1-3\n";
			break;
		}
	}while (choice != 3);
	return 0;
}
