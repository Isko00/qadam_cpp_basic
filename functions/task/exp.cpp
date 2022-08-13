#include <iostream>

using namespace std;

void lololoshka(int num1, int num4) {
	if (num4 > 0) {
		cout << "num1 = " << num1 << "num4 = " << num4 << endl << endl;
		lololoshka(num1, num4 - 1);

	}
}

void multiply_by_ten(int num) {
	num = num + 100;
	cout << "myNum = " << num << endl;
}

bool wqeert(int num1, int num2) {

	return num1 < num2;
}

int main() {

	return 0;
}