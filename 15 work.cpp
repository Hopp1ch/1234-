#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	bool exit = false;
	bool exitLine = false;
	bool exitSquare = false;
	bool exitRectangle = false;
	bool exitTriangle = false;
	int choice;
	int choicetype;
	int length;
	int size;
	int width;
	int height;
	int count = 0;
	string texture;
	do {
		cout << "[+] Программа - “Геометрические фигуры\n\n";
		cout << "[1] Линия\n";
		cout << "[2] Квадрат\n";
		cout << "[3] Прямоугольник\n";
		cout << "[4] Треугольник\n";
		cout << "[5] Выход\n";
		cout << "[+] Выберите действие: ";
		cin >> choice;
		if (choice == 1) {
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
					while (length >= 0) {
						cout << texture;
						length -= 1;
					}
					cout << endl;
					exitLine = true;
					cout << "Нажмите для продолжения...";
					cin.ignore();
					cin.get();
					system("cls");
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
					exitLine = true;
					cout << "Нажмите для продолжения...";
					cin.ignore();
					cin.get();
					system("cls");
				}
				else {
					system("cls");
					cout << "Нет такого значения! Повторите попытку\n";
				}

			} while (!exitLine);
		}
		else if (choice == 2) {
			system("cls");
			cout << "Фигура: 'Квадрат'\n";
			cout << "[1] Заполненный\n";
			cout << "[2] Пустой\n";
			do {
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
						cout << " ";
					}
					cout << "\n";
					for (int column = 0; column != size - 2; column++)
					{
						cout << texture;
						cout << " ";
						for (int column = 0; column != size - 2; column++)
						{
							cout << texture;
							cout << " ";
						}
						cout << texture << endl;
					}
					for (int column = 0; column != size; column++)
					{
						cout << texture;
						cout << " ";
					}
					cout << "\n";
					exitSquare = true;
					cout << "Нажмите для продолжения...";
					cin.ignore();
					cin.get();
					system("cls");
				}
				if (choicetype == 2) {
					system("cls");
					cout << "Размер: ";
					cin >> size;
					cout << "Текстура: ";
					cin >> texture;
					cout << "Результат: \n";
					for (int column = 0; column != size; ++column)
					{
						cout << texture;
						cout << " ";
					}
					cout << "\n";
					for (int column = 0; column < size - 2; ++column)
					{
						cout << texture;
						cout << " ";
						for (int column = 0; column < size - 2; ++column)
						{
							cout << " ";
							cout << " ";
						}
						cout << texture << endl;
					}
					for (int column = 0; column != size; ++column)
					{
						cout << texture;
						cout << " ";
					}
					cout << "\n";
					exitSquare = true;
					cout << "Нажмите для продолжения...";
					cin.ignore();
					cin.get();
					system("cls");
				}
				else {
					system("cls");
					cout << "Нет такого значения! Повторите попытку\n";
				}
			} while (!exitSquare);
		}
		else if (choice == 3) {
			system("cls");
			cout << "Фигура: 'Прямоугольник'\n";
			cout << "[1] Заполненный\n";
			cout << "[2] Пустой\n";
			do {
				cin >> choicetype;
				if (choicetype == 1) {
					system("cls");
					cout << "Ширина: ";
					cin >> width;
					cout << "Высота: ";
					cin >> height;
					cout << "Текстура: ";
					cin >> texture;
					cout << "Результат: \n";
					for (int column = 0; column != width; column++)
					{
						cout << texture;
						cout << " ";
					}
					cout << "\n";
					for (int column = 0; column != height - 2; column++)
					{
						cout << texture;
						cout << " ";
						for (int column = 0; column != width - 2; column++)
						{
							cout << texture;
							cout << " ";
						}
						cout << texture << endl;
					}
					for (int column = 0; column != width; column++)
					{
						cout << texture;
						cout << " ";
					}
					cout << "\n";
					exitRectangle = true;
					cout << "Нажмите для продолжения...";
					cin.ignore();
					cin.get();
					system("cls");
				}
				if (choicetype == 2) {
					system("cls");
					cout << "Ширина: ";
					cin >> width;
					cout << "Высота: ";
					cin >> height;
					cout << "Текстура: ";
					cin >> texture;
					cout << "Результат: \n";
					for (int column = 0; column != width; column++)
					{
						cout << texture;
						cout << " ";
					}
					cout << "\n";
					for (int column = 0; column != height - 2; column++)
					{
						cout << texture;
						cout << " ";
						for (int column = 0; column != width - 2; column++)
						{
							cout << " ";
							cout << " ";
						}
						cout << texture << endl;
					}
					for (int column = 0; column != width; column++)
					{
						cout << texture;
						cout << " ";
					}
					cout << "\n";
					exitRectangle = true;
					cout << "Нажмите для продолжения...";
					cin.ignore();
					cin.get();
					system("cls");
				}
				else {
					system("cls");
					cout << "Нет такого значения! Повторите попытку\n";
				}
			} while (!exitRectangle);
		}
		else if (choice == 4) {
			system("cls");
			cout << "Фигура: 'Треугольник'\n";
			cout << "[1] Заполненный\n";
			cout << "[2] Пустой\n";
			do {
				cin >> choicetype;
				if (choicetype == 1) {
					system("cls");
					cout << "Высота: ";
					cin >> height;
					cout << "Текстура: ";
					cin >> texture;
					cout << "Результат: \n";
					for (int i = 0; i < height; i++)
					{
						for (int j = 1; j < height - i; j++) {
							cout << ' ';
						}
						for (int j = height - 2 * i; j <= height; j++) {
							cout << texture;
						}

						cout << endl;
					}
					cout << "\n";
					exitTriangle = true;
					cout << "Нажмите для продолжения...";
					cin.ignore();
					cin.get();
					system("cls");
				}
				if (choicetype == 2) {
					system("cls");
					cout << "Высота: ";
					cin >> height;
					cout << "Текстура: ";
					cin >> texture;
					cout << "Результат: \n";
					for (int i = 0; i < height; i++)
					{
						for (int j = 1; j < height - i; j++) {
							cout << ' ';
						}
						for (int j = height - 2 * i; j <= height; j++)
						{
							if (i == height - 1)
							{
								for (count = 0; count < i * 2 + 1; count++) {
									cout << texture;
									break;
								}
							}
							if (j == height - 2 * i || j == height - 1) {
								cout << texture;
							}
							if (j > height - 2 * i || j < height - 1) {
								cout << ' ';
							}
						}
						cout << endl;
					}
				}
			} while (!exitTriangle);
		}
		else if (choice == 5) {
			cout << "Выход из программы......\n";
			exit = true;
			break;
		}
		else {
			system("cls");
			cout << "Нет такого значения! Повторите попытку\n";
			break;
		}
		} while (!exit);
		return 0;
	}
