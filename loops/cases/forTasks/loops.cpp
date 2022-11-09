#include <iostream>

using namespace std;

int main() {
	// 1) точно знаем сколько повторений
	// 2) когда у переменной узкая зона использования
	/*
	for (int i = 0; i < 10; i = i + 1) {
		cout << "i = " << i << endl;
	}
	*/
	int i;
	
	while (true) {
		cout << "i = " << i << endl;
		cin >> i;

		if (i > 10) {
			break;
		}
	}

	/*
	do {
		cin >> i;
		cout << "i = " << i << endl;
	} while(i > 10);
	*/
	return 0;
}