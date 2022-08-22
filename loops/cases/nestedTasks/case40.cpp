#include <iostream>
// импортируем математическую библиотеку
#include <cmath>

using namespace std;

int main() {
    //cout << pow(2, 6);
    // инициализируем переменные
    int a, b;
    // вводим их значения с консоли
    cin >> a >> b;

    // создаем цикл для чисел от a до b
    for (int i = a; i <= b; i++) {
        // создаем цикл для каждого перемножения
        // на пути к возведению в степень
        for (int j = 0; j <= i - a; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    // конец функции
    return 0;
}