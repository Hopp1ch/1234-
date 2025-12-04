#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int num;
	cout << "Введите число:";
	cin >> num;
	int mnoj=1;
	while (mnoj!=11) {
		cout << num << "x" << mnoj << "=" << num * mnoj<<endl;
		mnoj += 1;
	}
	return 0;
}
