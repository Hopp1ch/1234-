#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	string password = "12345";
	string userinput;
	while (userinput != password) {
		cout << "Введите пароль:";
		cin >> userinput;
		if (userinput == password) {
			continue;
		}
		else {
		cout << "Неверный пароль!\n";
		}
	}
	cout << "Добро пожаловать!";
	return 0;
}
