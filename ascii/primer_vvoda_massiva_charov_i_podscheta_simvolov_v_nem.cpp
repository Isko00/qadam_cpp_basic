/**
*
* Данная программа просит пользователя ввести какое-то слово (ввод будет производиться до первого пробела или нажания enter)
* и выводит количесво символов в этом слове.
*
*/
#include <iostream>

using namespace std;

int main()
{
    char array_of_chars[100];   // Объявляем массив символов, который может содержать 100 элементов

    int counter = 0;            // Объявляем переменную, которая будет играть роль счетчика и считать количество символов в нащем слове

    cin>>array_of_chars;        // Вводим наше слово

    for(int i = 0; array_of_chars[i]!='\0'; i++)    // Проходимся по каждому элементу массива, начиная от нулевого, и пока
                                                    // мы не достигнем символа конца строки. Напоминаю, символ конца строки ставится
                                                    // в конце любого слова, в конце каждого массива символов последним элементов является символ конца строки

        counter++;                                  // Проходясь по каждому элементу, инкрементируем счетчик, то есть счетчик посчитает
                                                    // общее количество символов того, что мы ввели

    cout<<counter<<endl;                // Выводим счетчик на консоль, он покажет нам количество символов в том, что мы ввели
    return 0;
}