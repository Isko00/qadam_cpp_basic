#include <iostream>

using namespace std;

int main() {
	//       97 => 35
	char name = 'a';

	int num = name - 32;

	cout << num << " " << endl;

	char name2 = num;

	cout << name2;
/*
	char c3 = c - 22;

	cout << "Lower to Upper: " << c3;

	char c3 = c + 62;
	cout << c3;
*/
	return 0;
}