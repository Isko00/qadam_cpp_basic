#include <iostream>

using namespace std;

int main() {
	int mounth;
	cin >> mounth;

	switch (mounth) {
		case 12: case 1: case 2:
			cout << "Winter";
			break;
		case 3 ... 5:
			cout << "Spring";
			break;
		case 6 ... 8:
			cout << "Summer";
			break;
		case 9 ... 11:
			cout << "Autumn";
			break;
		default:
			cout << "not matched";
	}



	return 0;
}