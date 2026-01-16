#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int pause;
	bool exit = false;
	bool exitline = false;
	bool exitSquare = false;
	int choice;
	int choicetype;
	int length;
	int size;
	string texture;
	do {
		cout << "[+] Программа - “Геометрические фигуры\n\n";
		cout << "[1] Линия\n";
		cout << "[2] Квадрат\n";
		cout << "[3] Выход\n";
		cout << "[+] Выберите действие: ";
		cin >> choice;
		if (choice==1) {
			system("cls");
			cout << "Фигура: 'Линия'\n";
			cout << "[1] Горизонтальная\n";
			cout << "[2] Вертикальная\n";
			do {
				cin >> choicetype;
				if (choicetype == 1) {
				    system("cls");
					cout << "Длина линии: ";
					cin >> length;
					cout << "Текстура линии: ";
					cin >> texture;
					cout << "Результат:\n";
					while (length>=0) {
						cout << texture;
						length -= 1;
					}
					cout << endl;
					exitline = true;
					cin >> pause;
				}
				else if (choicetype == 2) {
				    system("cls");
					cout << "Длина линии: ";
					cin >> length;
					cout << "Текстура линии: ";
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
				    system("cls");
					cout << "Нет такого значения! Повторите попытку\n";
				}

			} while (!exitline);
		}
		else if(choice==2){
		    system("cls");
		    cout<<"Фигура: 'Квадрат'\n";
		    cout<<"[1] Заполненный\n";
		    cout<<"[2] Пустой\n";
		    do{
				cin >> choicetype;
				if (choicetype == 1) {
					system("cls");
					cout << "Размер: ";
					cin >> size;
					cout << "Текстура: ";
					cin >> texture;
					cout << "Результат: \n";
					for (int column = 0; column != size; column++)
					{
						cout << texture;
					}
					cout << "\n";
					for (int column = 0; column != size-2; column++)
					{
						cout << texture;
						for (int column = 0; column != size - 2; column++)
						{
							cout << texture;
						}
						cout << texture << endl;
					}
					for (int column = 0; column != size; column++)
					{
						cout << texture;
					}
					cout << "\n";
					exitSquare = true;
				}
		        if(choicetype==2){
		            system("cls");
		            cout<<"Размер: ";
		            cin>>size;
		            cout<<"Текстура: ";
		            cin>>texture;
		            cout<<"Результат: \n";
					for (int column = 0; column!=size; ++column)
					{
						cout << texture;
					}
					cout << "\n";
					for (int column = 0; column < size-2; ++column)
					{
						cout << texture;
						for (int column = 0; column < size-2; ++column)
						{
							cout << " ";
						}
						cout << texture<<endl;
					}
					for (int column = 0; column != size; ++column)
					{
						cout << texture;
					}
					cout << "\n";
					exitSquare = true;
		        }
		    }while(!exitSquare);
		}
		else if(choice==3){
			cout << "Выход из программы......\n";
			exit = true;
			break;
		}
		else{
		    system("cls");
			cout << "Нет такого значения! Повторите попытку\n";
			break;
		}
	} while (!exit);
	return 0;

}
