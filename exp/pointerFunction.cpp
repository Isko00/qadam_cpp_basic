#include <iostream>

using namespace std;

int sum_of(int* arr) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum = sum + *(arr + i);
		// sum += *(arr + i);
	}
	return sum;
}

int main() {
	int arr[3] = {1, 2, 3};

	cout << sum_of(arr) << endl;

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}
}