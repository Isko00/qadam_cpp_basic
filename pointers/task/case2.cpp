#include <iostream>

using namespace std;

int main() {
	int arr[3] = {1, 2, 8};

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << endl;
	}

	cout << *(arr + 0) << endl; 	// 1
	cout << *(arr + 1) << endl; // 2
	cout << *(arr + 2) << endl;

	for (int i = 0; i < 3; i = i + 1) {
		cout << *(arr + 1) << endl;
	}
}