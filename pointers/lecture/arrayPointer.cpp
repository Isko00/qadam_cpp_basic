#include <iostream>

using namespace std;

int main() {
    // создаем массив целочисленных значений длиной 5 
    //      и заполняем его случайно
    int arr[5] = {4, 55, 79, 1, 4};
    // создаем цикл и в нем выводим значения массива через индекс
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    // просто для красоты
    cout << string(25, '=') << endl;
    // создаем указатель на массив
    int *pArr = arr;
    // выводим в консоль второй элемент массива под индексом "1"
    cout << "arr[1] = " << *(pArr + 1) << endl;
    // выводим адрес массива (адрес первого элемента) через имя массива
    cout << "arr address[" << arr << "]" << endl;
    // выводим адрес массива (адрес первого элемента) через указатель
    cout << "pArr address[" << pArr << "]" << endl;
    // для красоты
    cout << string(25, '=') << endl;
    // создаем цикл и выводим все значения массива через 
    //      разыменованные указатели
    for (int i = 0; i < 5; i++) {
        // cout << pArr[i] << endl;
        cout << *(pArr + i) << endl;
    }
}