#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int num=1;
	int count=0;
	int sum=0;
	while (num != 0) {
		cout << "Введите число: ";
		cin >> num;
		if (num==0){
			break;
		}
		else {
			count += 1;
			sum += num;
		}
	}
	cout << "Кол-во чисел:" << count << endl;
	cout << "Сумма:" << sum << endl;
	return 0;
}
