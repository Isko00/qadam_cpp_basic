#include <iostream>
#include <vector>

using namespace std;

int main() {
	int sum;
	int arr[3] = {4, 5, 6};

	for (int i = 0; i < 3; i++) {
		sum += i;
	}

	cout << sum;


/*
	vector<int> v = {1, 2, 3};

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	v.clear();

	cout << endl << "After clear:\n";
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
*/
	return 0;
}