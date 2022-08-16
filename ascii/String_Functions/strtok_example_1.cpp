/**
*
* Данная программа демонстрирует, как можно хранить
* все токены в массиве поинтеров для дальнейших манипуляций.
*
**/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char n[100]; /* Делимая строка */
    cin.getline(n, 100); /* Вводим делимую строку с клавиатуры */

    char* ptr = NULL; /* Поинтер, который будет указывать
                        на текущий токен, изначально равен NULL */

    char* aPtr[100]; /* Массив поинтеров, в котором будут храниться все токены */

    ptr = strtok(n, " "); /* Сейчас поинтер указывает на самый первый токен
                            т.е. логический кусок от самого начала строки с
                            до ближашего делиметра (разделителя), коим в данном
                            примере служит пробел */
    int counter = 0;   /* Счетчик для подсчета токенов */
    /* Условие цикла "Пока поинтер не равен NULL", как я
    упоминал выше, поинтер будет NULL только когда больше
    не будет токенов, т.е. когда будет достигнут конец делимой строки */
    while(ptr != NULL)
    {
        aPtr[counter] = ptr; /* Добавляем поинтер, указывающий на
                                очередной токен в массив поинтеров, тем самым мы
                                добавили туда очередной токен */

        counter++; /* Подсчитываем текущий токен */
        ptr = strtok(NULL, " "); /* Теперь наш поинтер указывает на СЛЕДУЮЩИЙ токен */
    }

    /* Выводим слова в обратном порядке */
    for(int i = counter - 1; i >= 0; i--)
        cout<<aPtr[i]<<endl;

    cout<<counter<<endl; /* Под конец выводим общее количество токенов */

    //system("pause");
    return 0;
}