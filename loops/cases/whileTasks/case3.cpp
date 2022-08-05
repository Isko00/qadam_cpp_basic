// Импорт библиотеки консольного ввода и вывода
#include <iostream>
// Импорт пространства имен std
using namespace std;

int main() {
    // Объявляем переменные
    int n, k;
    // Ввод переменных
    cin >> n >> k;

    /* Цикл While, с условием того, что остаток не отрицательное число
     * и по абсолютной величине меньше делителя
     */
    while (n - k > 0) {
        // Пошагово отнимаем длины отрезка "k" от отрезка "n"
        n -= k;
        // Вывод промежуточного результата для проверки
        //cout << n << endl;
    }
    // Вывод ответа
    cout << "Remainder: " << n;

    // Проверка через знак модуля, не требующая цикла
    cout << endl << "Extra chekout: " << n % k;

    return 0;
}