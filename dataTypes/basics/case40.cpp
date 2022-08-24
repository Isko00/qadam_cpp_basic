#include <iostream>

using namespace std;

int main() {
	int a1, b1, c1, a2, b2, c2;

	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

	int d = a1 * b2 - a2 * b1;

	int x = (c1 * b2 - c2 * b1) / d;
	int y = (a1 * c2 - a2 * c1) / d;
	
	cout << "x = " << x << endl << "y = " << y;

	return 0;
}