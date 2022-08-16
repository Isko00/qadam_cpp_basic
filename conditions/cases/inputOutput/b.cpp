#include <iostream>

using namespace std;

int main() {
    // инициализация целочисленных переменных
    int num1, num2, num3;
    // ввод значения переменной с консоли
    cin >> num1;
    // присваивание значений переменных
    num2 = num1 + 1;
    num3 = num1 - 1;
    // вывод строк текста, с целочисленными переменными поочереди
    cout << "The next number for the number " << num1 << " is " << num2
        << "." << endl;
    // "endl" это перенос на новую строчку, 
    //    без него все будет выводиться в одну строку
    cout << "The previous number for the number " << num1
        << " is " << num3 << ".";

    return 0;
}