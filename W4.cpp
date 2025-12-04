#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int num;
	cout << "Введите число:";
	cin >> num;
	int count = 0;
	while (num != 0) {
		num = num / 10;
		count += 1;
	}
	cout << "Кол-во цифр:" << count << endl;
	return 0;
}
