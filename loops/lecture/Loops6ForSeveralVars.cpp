/**
 * До этого мы рассмативали цикл for, который "следит" лишь за одной переменной.
 * Во всех наших предыдущих примерах такой переменной была i.
 * То есть мы запускали цикл и в нём только 1 переменная i шла по заданным нами для неё значениям.
 *
 * Но один цикл for может "следить" за несколькими переменными одновременно.
 * Рассмотрим пример ниже:
 */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    /* В примере ниже я запускаю цикл for, но теперь он будет "следить" не только лишь за 1 переменной i,
    * но теперь (!!!)одновременно(!!!) с этим он будет следить за 2-ой переменной j.
    * Взглянем на первую часть загаловка цикла: int i = 0, j = 100
    * Мы видим, что тут инициализируются сразу 2 переменные.
    * i с начальным значением 0 и j с начальным значением 100
    * Затем идёт условие захода в цикл: i < 20
    * Важный момент здесь состоит в том, что цикл будет продолжаться ТОЛЬКО, если i остаётся меньше 20.
    * То есть, цикл зависит ТОЛЬКО от 1 переменной i, если её текущее значение превысит 19, цикл закончится.
    * Теперь посмотрим на третью часть загаловка: i++, j -= 5, k += 3
    * Переменная i имеет шаг +1, то есть на каждом шаге её значение увеличивается на 1.
    * Переменная j имеет шаг -5, то есть на каждом шаге её значение уменьшается на 5.
    *
    * Рассмотрим ход цикла пошагово.
    * На 1-ом шаге выведется: i = 0     j = 100
    * На 2-ом шаге: i = 1       j = 95
    * На 3-ем шаге: i = 2       j = 90
    *
    * И так далее, то есть переменная i и перемення j "шагают" (!!!)одновременно(!!!).
    * И будут так шагать, пока значение переменной i остаётся меньше 19.
    * Это означает, что цикл никак не зависит от переменной j в нашем случае, только от переменной i.
    * Другими словами: переменная j будет уменьшаться на 5 до тех пор, пока переменная i,
    * повышающаяся с каждым шагом на 1, не превысит 19 */

    for (int i = 0, j = 100, k = 50; i < 20; i++, j -= 5, k += 3)
    {
        cout << "i = " << i << "\t\tj = " << j << "\t\tk = " << k << endl;
    }

    return 0;
}