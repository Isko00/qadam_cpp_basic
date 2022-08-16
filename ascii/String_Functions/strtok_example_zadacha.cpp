/**
*
* Данная программа является примером простого калькулятора,
* реализованного, с помощью токенизирования.
*
* Задача: пользователь вводит выражение любой длины
* Программа выводит результат.
*
*
* P.S. Числа и знаки математических операция ОБЯЗАТЕЛЬНО
* должны быть разделены ПРОБЕЛОМ!
*
* Например: 8 + 7 / 3 * 4 - 7
* Программа выведет 13.
*
*
* P.P.S. В данном примере игнорируется приоритет операций умножения и деления
* над операциями сложения и вычитания.
* Т.Е. Программа считает просто по порядку следования операций.
*
**/
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main()
{
    char n[100];
    cin.getline(n, 100);

    char* token;
    token = strtok(n, " ");
    int sum = atoi(token);
    int otvet;
    while(token != NULL)
    {
        if(strcmp(token, "+") == 0)
        {
            token = strtok(NULL, " ");
            sum += atoi(token);
        }
        else if(strcmp(token, "-") == 0)
        {
            token = strtok(NULL, " ");
            sum -= atoi(token);
        }
        else if(strcmp(token, "*") == 0)
        {
            token = strtok(NULL, " ");
            sum *= atoi(token);
        }
        else if(strcmp(token, "/") == 0)
        {
            token = strtok(NULL, " ");
            sum /= atoi(token);
        }
        token = strtok(NULL, " ");
    }

   cout<<sum<<endl;
    return 0;
}