/**
*
* Данная программа попросит пользователя ввести 10 целых чисел, потом выведет среднее арифметическое всех не отрицательных чисел
Напоминаю, для нахождения среднего арифметического необходимо знать сумму всех этих чисел и их количество, потом просто
разделить сумму на количество.
*
**/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int ar[10];

    double sum = 0.0;        // Переменная, которая будет обозначать сумму всех не отрицательных чисел
    int schetchik = 0;  // Переменная, которая будет обозначать количество всех не отрицательных чисел

    cout<<"Введите 10 целых чисел:"<<endl;
    for(int i = 0; i <= 9; i++) // Проходимся по каждой ячейке массива и вносим туда свои значение, то есть
        cin>>ar[i];      // заполняем массив с клавиатуры

    for(int i = 0; i <= 9; i++){    // Опять проходимся по всем элементам массива
        if(ar[i] >= 0)       // Проверяем каждый элемент на не отрицательность
        {
            schetchik++;            // Если таковой найдется, щелкаем счетчиком, чтобы считал такие элементы
            sum = sum+ar[i]; // И суммируем их

        }
    }

    // На консоль выведется результат деления суммы на количество, то есть среднее арифметическое
    cout<<"\nСреднее арифметическое неотрицательных чисел: "<<sum/schetchik<<endl;

    // Расскомментируйте следующую строку, если Вы работете в Visual Studio
    // system("pause");
    return 0;
}