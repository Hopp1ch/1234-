#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int num=1;
	int sum=0;
	float srar=0;
	int count=0;
	while (num != 0) {
		cout << "Введите число: ";
		cin >> num;
		if (num == 0) {
			break;
		}
		else {
			sum += num;
			count += 1;
		}
	}
	srar = sum / count;
	cout << "Среднее арифметическое:"<<srar<<endl;

	return 0;
}
