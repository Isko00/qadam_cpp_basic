#include <iostream>

using namespace std;

void secondary(int a) {
	a = 13;
	cout << a;

}

int main() {
	int a = 1;

	secondary(a);

	cout << endl << a;
}