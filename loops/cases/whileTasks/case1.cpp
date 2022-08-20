// Импорт библиотеки консольного ввода и вывода
#include <iostream>
// Импорт пространства имен std
using namespace std;
// Объявление глобальной функции с именем main, которая является назначенным запуском программы
// Указывается тип возвращаемого значения int (integer) целое число
int main() {
    // Объявляем переменные
    //int a, b;
    // Ввод переменных
    //cin >> a >> b;

    /* Цикл While, с условием того, что остаток не отрицательное число
     * и по абсолютной величине меньше делителя
     */
    int a = 7;
    while (a < 7) {
        // Пошагово отнимаем длины отрезка "b" от отрезка "a"
        cin >> a;
        // Вывод промежуточного результата для проверки
        cout << a << endl;
    }
    /*
    1) повторяем пока число равно 7
    2) если не равно 7 цикл закончится
    3) вводим число каждый раз с консоли
    4) потом сразу его каждый раз в консоль выводим
    */

    //cout << "\ta = " << a;
    // Вывод ответа
    /*cout << "Remainder: " << a;

    // Проверка через знак модуля, не требующая цикла
    cout << endl << "Extra chekout: " << a % b;
    */
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