#include <iostream>

using namespace std;

// объявляем главную функцию
int main() {
    // инициализация целочисленной переменной со значением 3
    int number = 3;
    // инициализация вещественной переменной со значением 10.5
    double number2 = 10.5;
    /* инициализация символьной переменной со значением 51,
     * само значение обычно храниться в виде числа,
     * но при выводе мы увидим символ тройки
     */
    char simbol = '3';
    // инициализация логической переменной со значением 1
    bool boolean = 1;
    /* начало условного оператора if else
     * проверка равно ли значение переменной number 
     * значению переменной simbol
     */
    if (number == simbol) 
    // открываем тело условного оператора
    {
        // если равно, тогда произойдет
        // вывод в консоль строки текста
        cout << "equal" << endl;
    // закрываем тело условного оператора
    } 
    else 
    // открываем тело условного оператора
    {   
        // если не равно, тогда произойдет
        // вывод в консоль строки текста
        cout << "not equal" << endl;
    // закрываем тело условного оператора
    } 

    // вывод строк текста и значений различных переменных
    // в конце стоит перенос строки endl
    cout << "number = " << number << endl;
    cout << "number2 = " << number2 << endl;
    cout << "simbol = " << simbol << endl;
    cout << "boolean = " << boolean << endl;
    // конец функции 
    return 0;
}