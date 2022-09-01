#include <iostream>

using namespace std;

// 1) функцию которая будет вычислять сумму всех чисел до а
// 2) функцию которая будет проверять четная ли сумма чисел до а

int sum_till_a(int a) {
	int sum = 0;

	for (int i = 0; i <= a; i++) {
		//cout << "	sum = " << sum << " i = " << i << endl;
		sum += i;
	}

	return sum;
}

bool is_even(int sum) {
	return sum % 2 == 0;
}

void output(int a) {
	if (is_even(sum_till_a(a))) {
		cout << "even";
	} else {
		cout << "not even";
	}
}

int main() {
	int a = 5;

	int b = sum_till_a(2) + 1;

	output(a);

	return 0;
}