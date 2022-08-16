/**
 * Данная программа демонстрирует алгоритм сортировки одномерного массива,
 * который называется Bubble sort (пузырьковая сортировка).
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
/*    setlocale(LC_ALL, "Russian");

    //Создаем и заполняем с клавитуры тестовый массив.
    cout<<"Введите размер Вашего массива: ";
    int aSize;
    cin>>aSize;

    int a[100];

    cout<<"Введите с клавиатуры "<<aSize<<" целых чисел: "<<endl;
    for(int i = 0; i < aSize; i++)
        cin>>a[i];

    cout<<"\nМассив целых чисел до сортировки:"<<endl;
    for(int i = 0; i < aSize; i++)
        cout<<a[i]<<" ";
*/
    /*
     * Пузырьковый алгоритм работает следующим образом.
     * Алгоритм начинает прохождение по массиву и сравнивает за раз
     * "пузырёк" из 2-ух элементов - нынешнего и следующего за ним.
     * В зависимости от направления сортировки, алгоритм решает, следует ли
     * поменять местами эти 2 элемента или нет.
     *
     * Т.е.
     * Если идёт сортировка по возрастанию, и алгоритм находится в самом начале
     * массива, то он сравнивает текущий 0-ой элемент и следующий за ним первый.
     *
     * При возрастающей сортировке элемент слева должен быть меньше элемента справа.
     * Алгоритм проверяет это и если это не так - меняет эти 2 элемента местами.
     *
     * Одним таким проходом дело не ограничивается и поэтому проходов должно быть больше.
     *
     * А именно - даже при самом худшем варианте, например, если массив надо отсортировать по
     * возрастанию, а он отсортирован по убыванию, для полной сортировки понадобится
     * size - 1 проходов по массиву, где size - это размер массива.
     *
     * Т.е. если в массиве содержится 10 элементов, то для полной его сортировки,
     * даже в самом худшем варианте понадобится 9 проходов.
     *
     * Также при конкретном проходе по всем элементам массива необходимо идти
     * до предпоследнего элемента.
     *
     * Потому что если идти до последнего, то на последнем элементе алгоритм попытается взять
     * пузырёк ис последнего элемента и следующего за ним, а так как следующего элемента нет,
     * то вы выйдете за пределы массива.
     *
     * Когда же вы идетё до ПРЕДпоследнего элемента, то последний ВСЁ РАВНО будет учтён
     * в паре-пузырьке с ПРЕДпоследним.
     */
    int a[5] = {5, 4, 2, 3, 1};
    int aSize = 6;

    for (int i = 0; i < aSize - 1; i++){   // Первый цикл отсчитывает сколько раз мы будем проходиться по всему массиву
        for (int j = 0; j < aSize - 1; j++)// Вторым циклом мы будет проходиться по всем элементам массива в отдельно взятый проход
        {
            if (a[j] > a[j+1])           // Мы хотим отсортировать по возростанию, значит 2 элемента нужно будет поменять местами,
            {                           // если элемент находящийся слева будет больше элемента, находящего справа.
                cout << "\t" << a[j] << " " << a[j+1] << endl;
                int temp = a[j];        // переменная temp принимает значение элемента, хранящегося на j-ой ячейке массива
                a[j] = a[j+1];          // j-ая ячейка массива принимает значение элемента, хранящегося в ячейке j+1, то есть следующей после j
                a[j+1] = temp;          // ячейка j+1, то есть следующая после j, принимает значение элемента, хранящегося в temp
            }
            //cout << a[j] << " ";
        }
        //cout << endl;
    }
/*
    5 4 2 3 1
i = 0    
    4 5 2 3 1   j = 0
    4 2 5 3 1   j = 1
    4 2 3 5 1   j = 2
    4 2 3 1 5   j = 3
i = 1
    2 4 3 1 5   j = 0
    2 3 4 1 5   j = 1
    2 3 1 4 5   j = 2
    2 3 1 4 5   j = 3
i = 2
    2 3 1 4 5
    2 1 3 4 5
    2 1 3 4 5
    2 1 3 4 5
i = 3
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
i = 4
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
*/



/*
    cout<<"\n\nМассив целых чисел после сортировки по возрастанию:"<<endl;
    for(int i = 0; i < aSize; i++)
        cout<<a[i]<<" ";
*/
    /*
     * В примере выше мы рассмотрели действие Пузырькового алгоритма на примере целых чисел.
     * Однако он с таким же успехом может быть применён на массиве, например, строк (String).
     *
     * В следующем примере мы постараемся отсортировать массив строк по алфавиту.
     *
     * String-и стравниваются между собой согласно лексиграфическому порядку.
     * Проще говоря по алфавиту. Как в школьном журнале сортируются фамилии.
     * При сравнении символов в строках используются положения этих индексов в Unicode.
     *
     * Unicode - это кодировка, в которой каждому символу соответствует число.
     *
     * Например символу заглавной английской буквы 'A' соответствует номер 65,
     * а заглавной английской букву 'Z' - 90.
     *
     * То есть при сравнении строки "AAA" со строкой "AAB" выйдет -1. Так как 3-ий символ 'A'
     * расположен на 65-ой позиции, а символ 'B' - на 66-ой.
     */
/*
    cout<<"\n\nВведите размер Вашего массива строк: ";
    int strArrSize;
    cin>>strArrSize;
    string strArr[100];

    cout<<"Введите с клавиатуры "<<strArrSize<<" строк (слов): "<<endl;
    for(int i = 0; i < strArrSize; i++)
        cin>>strArr[i];

    cout<<"\nМассив строк до сортировки:"<<endl;
    for(int i = 0; i < strArrSize; i++)
        cout<<strArr[i]<<endl;

    for(int i = 0; i < strArrSize - 1; i++){
        for(int j = 0; j < strArrSize - 1; j++)
        {
            if(strArr[j] > strArr[j+1])
            {
                string temp = strArr[j];
                strArr[j] = strArr[j+1];
                strArr[j+1] = temp;
            }
        }
    }

    cout<<"\n\nМассив строк после сортировки по возрастанию:"<<endl;
    for(int i = 0; i < strArrSize; i++)
        cout<<strArr[i]<<endl;
*/
    //system("pause");
}