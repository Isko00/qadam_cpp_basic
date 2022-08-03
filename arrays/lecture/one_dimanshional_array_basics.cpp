/**
 * Данная программа демонстрирует базовую теорию по массивам.
 * Массив - это хранилище однотипной информации фиксированного размера.
 *
 * "Однотипной информации" - значит, что массив может хранить, например,
 * только целые числа, или только строки.
 *
 * "Фиксированного размера" - значит, что если создан массив на 10 элементов,
 * то больше 10 он вместить никогда не сможет и размер его всегда будет 10.
 *
 * В массиве элементы имеют свои индексы, т.е. номер позиции, на которой конкретный
 * элемент стоит в этом массиве.
 *
 * Индексация начинает с 0.
 * Т.е. если массив имеет размер 6, то самый первый элемент массива имеет индекс 0,
 * а самый последний - 5.
 *
 */
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    /*
     * 1-ый способ создания массива.
     * С использованием так называемого initializer list
     * или по-другому "листа инициализации".
     *
     * Когда на одной строчке с объявлением массива идёт
     * список всех элементов, который в нём хранятся.
     */
    cout<<"Создаём массив."<<endl;
    cout<<"Называем его \"testArray1\""<<endl;
    cout<<"Заполяем его элементами 78, 47, 12, 45, 69, 15, 42, 24"<<endl;
    int testArray1[] = {78, 47, 12, 45, 69, 15, 42, 24};

     /*
     * Чтобы обратиться к конкретному элементу массива,
     * необходимо написать имя массива и в квадратных скобках
     * индекс того элемента, к которому Вы хотите обратиться.
     */

    cout<<"Обращаемся к 5-ому элементу массива: "<<testArray1[5]<<endl;
    /*
     * В примере выше:
     * testArray1[5] - это ЭЛЕМЕНТ, который хранится в массиве под номером 5.
     * 5 - это ИНДЕКС элемента.
     */

    /*
     * 2-ой способ создания массива.
     * Без указания элементов.
     * Только имя массива и его размер.
     */

    cout<<"\nСоздаём массив."<<endl;
    cout<<"Называем его \"testArray2\""<<endl;
    cout<<"Указываем его размер, равный 10."<<endl;
    int testArray2[10];

    /*
     * С помощью цикла for проходимся по всем элементам массива.
     * С 0-ого до 9-ого.
     * И вводим их с клавиатуры.
     */
    cout<<"Заполняем массив с клавиатуры."<<endl;
    cout<<"Введите 10 целых чисел: "<<endl;
    for(int i = 0; i < 10; i++)
        cin>>testArray2[i];

    /*
     * С помощью цикла for проходимся по всем элементам массива.
     * С 0-ого до 9-ого.
     * И выводим их на консоль.
     */
    cout<<"Массив \"testArray2\" содержит следующие элементы: ";
    for(int i = 0; i < 10; i++)
        cout<<testArray2[i]<<" ";

    cout<<endl;

    // Расскомментируйте следующую строку, если Вы работете в Visual Studio
    // system("pause");

    return 0;
}