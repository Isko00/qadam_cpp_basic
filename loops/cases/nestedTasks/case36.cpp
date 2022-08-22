#include <iostream>
// импортируем математическую библиотеку
#include <cmath>

using namespace std;

int main() {
	//cout << pow(2, 6);
	// инициализируем переменные
	int n, k;
	// вводим их значения с консоли
	cin >> n >> k;

	// создаем переменную суммы снаружи цикла
	int sum = 0;
	// создаем цикл для чисел от 1 до N
	for (int i = 1; i <= n; i++) {
		// создаем переменную произведения снаружи цикла
		int temp = 1;
		// создаем цикл для каждого перемножения
		// на пути к возведению в степень
		for (int j = 0; j < k; j++) {
			// находим произведение
			temp = temp * i;
			//cout << "temp = " << temp << " ";
		}
		//cout << "\t" << temp << endl;
		// находим сумму
		sum = sum + temp;

		// Альтернативное решение
		//sum = sum + pow(i, k);
	}
	// выводим ответ в консоль
	cout << sum;
	// конец функции
	return 0;
}