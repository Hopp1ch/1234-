#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int UserNumber;
	int UserAnswer;
	int NumberCount=1;
	int CorrectAnswer;
	cout << "Введите число: " << endl;
	cin >> UserNumber;
	while (NumberCount <= 9) {
		cout << "Решите пример:" << UserNumber << "*" << NumberCount << endl;
		cout << "Ответ: ";
		cin >> UserAnswer;
		CorrectAnswer = UserNumber * NumberCount;
		if (UserAnswer == CorrectAnswer) {
			cout << "Пример решен правильно!" << endl;
			NumberCount = NumberCount + 1;
		}
		else {
			cout << "Пример решен неправильно!" <<"Повторите попытку"<< endl;
		}
	}
	cout << "Примеры решены" << endl;
	return 0;
}
