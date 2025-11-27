#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[ + ] Программа - “Геометрические фигуры\n";
	cout << "[1] Линия\n";
	cout << "[2] Выход\n";
	cout << "[+] Выберите фигуру : ";
	int choice;
	cin >> choice;
	int choicetype;
	bool exit = false;
	do {
		switch (choice) {
		case 1:
			system("cls");
			cout << "Фигура: 'Линия'";
			cout << "[1] Горизонтальная\n";
			cout << "[2] Вертикальная\n";
			bool exitline = false;
			do{
				cin >> choicetype;
        if(choicetype==1){
					cout << "Длина линии: \n";
					int length;
					cin >> length;
					cout << "Текстура линии: \n";
					string texture;
					cin >> texture;
					while (length) {
						cout << "Результат:\n";
						cout << texture;
					}
          exitline = true;
        }
				if(choicetype==2){
					cout << "Длина линии: \n";
					int length;
					cin >> length;
					cout << "Текстура линии: \n";
					string texture;
					cin >> texture;
					while (length) {
						cout << "Результат:\n";
						cout << texture << endl;
					}
					exitline = true;
        }
				else{
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
