#include <iostream>

using namespace std;

void multiply_by_ten(int num) {
	cout << num * 10 << endl;
}

bool is_less(int num1, int num2) {
	return (num1 < num2);
}

int multiply(int num1, int num2) {
	return (num1 * num2);
}

int multiply_by_thirteen(int num) {
	return multiply(num, 13);
}

int main() {
	multiply_by_ten(5); 		// 50
	
	if (is_less(12, 15)) { 		// true
		cout << "less" << endl;
	} else {
		cout << "greater" << endl;
	}

	cout << "multiply(31, 12) = " << multiply(31, 12) << endl; // 372
	cout << "multiply_by_thirteen(-2) = " << multiply_by_thirteen(-2) << endl; // -26
}