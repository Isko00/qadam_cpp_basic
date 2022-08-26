#include <iostream>

using namespace std;
// создаем функцию типа данных void с параметром переменной
//      целочисленного значения
void foo(int a) {
    // применяем на переменной постфиксный инкремент
    a++;
    // выводим значение переменной
    cout << "in foo a = " << a << endl;
}
// создаем функцию типа данных void с параметром указателя
//      целочисленного значения
void doo(int* pa) {
    // применяем на разыменованном указателе постфиксный инкремент
    (*pa)++;
    // выводим в консоль значение через разыменованный указатель
    cout << "in doo a = " << *pa << endl;
}

int main() {
    // создаем целочисленную перменную со значением 0
    int a = 0;
    // выводим в консоль значение переменной через ее имя
    cout << "at beginning a = " << a << endl;
    // вызываем функцию и передаем ей значение переменной
    foo(a);
    // выводим в консоль значение переменной через ее имя
    cout << "after foo() a = " << a << endl;
    // вызываем функцию и передаем ей адрес переменной
    doo(&a);
    // выводим в консоль значение переменной через ее имя
    cout << "after doo() a = " << a << endl;    
    
    int arr[2] = {-1, 2};

    int arr2[2];

    doo(arr);
}