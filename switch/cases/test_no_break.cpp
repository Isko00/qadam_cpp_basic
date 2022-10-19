#include <iostream>

using namespace std;

int main() {
	int q;
	cin >> q;

	switch (q) {
		case 1:
			cout << 1;
			break;
		case 2:
			cout << 2;
		case 3: 
			cout << 3;
			break;
		case 4:
			cout << 4;
		default:
			cout << 0;
	}
}