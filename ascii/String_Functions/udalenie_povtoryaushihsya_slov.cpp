/**
*
* Данная программа демонстрирует алгоритм, позволяющий избавиться
* от повторяющихся слов в строке.
* Алгоритм использует токенизирование и массивы поинтеров.
*
*
* Задача: Изначальная строка содержит набор повторяющихся слов:
* Программа должна вывести строку без повторяющихся слов.
*
* Алгоритм следующий:
* Вначале нужно разделить строку на слова с помощью токенизирования.
* Все эти слова хранить в массиве поинтеров.
* Далее нужно пройтись по этому массиву поинтеров,
* и находясь на очередной ячейке (назовем ее X), сравнить все слова, начиная с ячейки (X + 1) и далее со словом,
* хранящимся в ячейке X, если случается совпадение, то сделать дубликат равный NULL.
* В итоге в массиве останутся только уникальные слова, а все дубликаты будут равны NULL.
* В конце нужно будет лишь вывести массив, пропуская те ячейки, в которых хранится NULL.
*
**/
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

void qwerty(char* cPtr)
{
    char* ptr = NULL;
    char* arrayOfTokens[100];
    ptr = strtok(cPtr, " ");
    int counter = 0;

    while(ptr != NULL)
    {
        arrayOfTokens[counter++] = ptr;
        ptr = strtok(NULL, " ");
    }

    for(int i = 0; i < counter; i++)
    {
        for(int j = i+1; j < counter; j++)
        {
            if(arrayOfTokens[i] != NULL && arrayOfTokens[j]!=NULL && strcmp(arrayOfTokens[i], arrayOfTokens[j]) == 0)
                arrayOfTokens[j] = NULL;
        }

    }

    for(int i = 0; i < counter; i++)
        if(arrayOfTokens[i] != NULL)
            cout<<arrayOfTokens[i]<<" ";

}

int main()
{
    char c[100] = "Happy Happy Happy New New New Year Year Year";
    qwerty(c);
    return 0;
}