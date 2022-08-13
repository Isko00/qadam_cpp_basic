#include <iostream>

using namespace std;

int rec(int a, int b) {
	cout << "a = " << a << " b = " << b << endl;
	if (a < 8) {
		rec(++a, --b);
	}

	return b;
}

int main() {
	cout << rec(0, 10);
}