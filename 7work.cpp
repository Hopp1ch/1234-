#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(0, "");
	int month;
	int day;
	string Suf_Month;
	string Suf_Day;
	cout << "Календарь" << endl;
	cout << "[1] Январь" << endl;
	cout << "[2] Февраль" << endl;
	cout << "[3] Март" << endl;
	cout << "[4] Апрель" << endl;
	cout << "[5] Май" << endl;
	cout << "[6] Июнь" << endl;
	cout << "[7] Июль" << endl;
	cout << "[8] Август" << endl;
	cout << "[9] Сентябрь" << endl;
	cout << "[10] Октябрь" << endl;
	cout << "[11] Ноябрь" << endl;
	cout << "[12] Декабрь" << endl;
	cout << "Введите месяц";
	int maxday;
	cin >> month;
	switch (month) {
	case 1:
		Suf_Month = "Январь";
		maxday = 31;
		break;
	case 2:
		Suf_Month = "Февраль";
		maxday = 29;
		break;
	case 3:
		Suf_Month = "Март";
		maxday = 31;
		break;
	case 4:
		Suf_Month - "Апрель";
		maxday = 30;
		break;
	case 5:
		Suf_Month = "Май";
		maxday = 31;
		break;
	case 6:
		Suf_Month = "Июнь";
		maxday = 30;
		break;
	case 7:
		Suf_Month = "Июль";
		maxday = 31;
		break;
	case 8:
		Suf_Month = "Август";
		maxday = 31;
		break;
	case 9:
		Suf_Month = "Сентябрь";
		maxday = 30;
		break;
	case 10:
		Suf_Month = "Октябрь";
		maxday = 31;
		break;
	case 11:
		Suf_Month = "Ноябрь";
		maxday = 30;
		break;
	case 12:
		Suf_Month = "Декабрь";
		maxday = 31;
		break;
	default:
		cout << "Неправильно введено значение месяца" << endl;
	}
	cout << "Выберите день месяца: ";
	cin >> day;
	if (day<1 or day>maxday) {
		cout << "Такого дня нет в этом месяце" << endl;
		return 1;
	}
	switch (day) {
	case 1:
		Suf_Day = "1";
		break;
	case 2:
		Suf_Day = "2";
		break;
	case 3:
		Suf_Day = "3";
		break;
	case 4:
		Suf_Day = "4";
		break;
	case 5:
		Suf_Day = "5";
		break;
	case 6:
		Suf_Day = "6";
		break;
	case 7:
		Suf_Day = "7";
		break;
	case 8:
		Suf_Day = "8";
		break;
	case 9:
		Suf_Day = "9";
		break;
	case 10:
		Suf_Day = "10";
		break;
	case 11:
		Suf_Day = "11";
		break;
	case 12:
		Suf_Day = "12";
		break;
	case 13:
		Suf_Day = "13";
		break;
	case 14:
		Suf_Day = "14";
		break;
	case 15:
		Suf_Day = "15";
		break;
	case 16:
		Suf_Day = "16";
		break;
	case 17:
		Suf_Day = "17";
		break;
	case 18:
		Suf_Day = "18";
		break;
	case 19:
		Suf_Day = "19";
		break;
	case 20:
		Suf_Day = "20";
		break;
	case 21:
		Suf_Day = "21";
		break;
	case 22:
		Suf_Day = "22";
		break;
	case 23:
		Suf_Day = "23";
		break;
	case 24:
		Suf_Day = "24";
		break;
	case 25:
		Suf_Day = "25";
		break;
	case 26:
		Suf_Day = "26";
		break;
	case 27:
		Suf_Day = "27";
		break;
	case 28:
		Suf_Day = "28";
		break;
	case 29:
		Suf_Day = "29";
		break;
	case 30:
		Suf_Day = "30";
		break;
	case 31:
		Suf_Day = "31";
		break;
	default:
		cout << "Такого дня нет" << endl;
	}
	cout << Suf_Day << Suf_Month << endl;

	return 0;
}
