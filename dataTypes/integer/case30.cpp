#include <iostream>

using namespace std;

int main() {
	int year, century;
	cin >> year;

	century = year / 100 + 1;

	cout << century;

	return 0;
}