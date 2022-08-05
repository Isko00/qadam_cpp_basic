// Импорт библиотеки консольного ввода и вывода
#include <iostream>
// Импорт пространства имен std
using namespace std;
// Объявление глобальной функции с именем main, которая является назначенным запуском программы
// Указывается тип возвращаемого значения int (integer) целое число
int main() {
    // Объявляем переменные
    int a, b;
    // Ввод переменных
    cin >> a >> b;

    /* Цикл While, с условием того, что остаток не отрицательное число
     * и по абсолютной величине меньше делителя
     */
    while (a - b > 0) {
        // Пошагово отнимаем длины отрезка "b" от отрезка "a"
        a -= b;
        // Вывод промежуточного результата для проверки
        //cout << a << endl;
    }
    // Вывод ответа
    cout << "Remainder: " << a;

    // Проверка через знак модуля, не требующая цикла
    cout << endl << "Extra chekout: " << a % b;

    /* Ключевое слово завершающее работу функции
     * значение 0 соответствует отсутствию возвращаемого значения
     * потому что функция локальная
     * с 1998 принято условие, что в функции main() завершение
     * работы функции объявляется по достижении конца функции,
     * однако для всех остальных функций с указанным типом возвращаемого 
     * значения, отсутсвие записи return приведет к ошибкам при запуске
     */
    return 0;
}