#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Введите число: ";
	int num;
	cin >> num;
	while (num >= 1) {
		cout << "Отсчет: "<<num<<endl;
		num -= 1;
	}
	return 0;
}
