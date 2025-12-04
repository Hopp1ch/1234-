#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int season;
	cout << "[ 1 ] Лето,[2] Осень,[3] Зима,[4] Весна" << endl;
	cout << "Введите время года:";
	cin >> season;
	if (season == 1) {
		cout << "Сейчас лето, следует одеться легко и взять с собой головной убор" << endl;
	}
	else if (season == 2) {
		cout << "Сейчас осень, следует одеться тепло и взять с собой зонт" << endl;
	}
	else if (season == 3) {
		cout << "Сейчас зима,следует одеться очень тепло и надеть перчатки" << endl;
	}
	else if (season == 4) {
		cout << "Сейчас весна,следует одеться умерено тепло и надеть сапоги" << endl;
	}
	else {
		cout << "Error" << endl;
	}
	return 0;
}
