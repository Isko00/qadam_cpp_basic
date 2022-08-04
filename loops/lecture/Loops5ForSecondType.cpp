/**
 * Во втором типе задач на for нет изменяющейся и повторяющейся частей.
 * Там есть только 1 неизменная часть, которая просто повторяется несколько раз.
 *
 * А в этом типе задач переменная i не задает никакую изменяющуюся часть. Она лишь отсчитывает, сколько раз
 * надо выполнить тело цикла */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    /* Рассмотрим самый простой пример задачи на второй тип:
     * Вывести 5 раз Hello, World!
     * Если бы у нас не было бы циклов, то решение выглядело бы так:
     * cout << "Hello, World!" << endl;
     * cout << "Hello, World!" << endl;
     * cout << "Hello, World!" << endl;
     * cout << "Hello, World!" << endl;
     * cout << "Hello, World!" << endl;
     *
     * Как мы видим, никакой изменяющейся части нет, есть лишь повторяющаяся часть, которая без изменений
     * повторяется 5 раз.
     *
     * Так что в этом случае мы просто запускаем цикл for, который отсчитает 5 раз и 5 раз выполнит без каких-либо
     * изменений эту строчку код, другими словами, просто 5 раз повторит ее */

     for (int i = 0; i < 5; i++)
    {
        cout << "Hello, World!" << endl;
    }

    /* В примере выше i всего лишь считает, сколько раз выполнится команда
    * cout << "Hello, World" << endl;
    *
    * Вначале i = 0, и как бы "Hello, World!" выведется 0-ой раз,
    * затем i = 1, и "Hello, World" выведется 1-ый раз и т.д.
    * Другими словами переменная i считает, сколько раз выполняется тело цикла.
    *
    * Из этого следует, что я могу пустить i в диапазоне от 0 до 4, и точно также могу пустить i в диапазоне от
    * 1 до 5. Ведь и в случае 0 - 4 (0 1 2 3 4) я насчитаю 5 раз, что и в случае 1 - 5 (1 2 3 4 5) я насчитаю те же
    * 5 раз */

    return 0;
}