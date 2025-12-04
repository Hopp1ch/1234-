#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int num=1;
	int sum=0;
	while (num != 0) {
		cout << "Введите число: ";
		cin >> num;
		sum += num;
	}
	cout << "Сумма всех чисел: "<<sum<<endl;

	return 0;
}
