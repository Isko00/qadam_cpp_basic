/**
 * В данном примере рассмотрим nested loop или, по-русски, вложенный цикл.
 * Суть в том, что один цикл назодится внутри тела другого цикла.
 *
 * Главное правило, которое необходимо запомнить:
 * (!!!) Для КАЖДОГО шага внешнего цикла выполняются ВСЕ шаги внутреннего цикла. (!!!)
 *
 * Это логично, так как мы знаем, что на каждом шаге цикла выполняется код внутри его тела.
 * А в случае с вложеннным циклом внутри тела внещнего цикла находится внутренний цикл, другими словами
 * внутренний цикл является телом внешнего цикла, соответственно, на каждый шаг внешнего цикла выполняется
 * весь внутренний цикл.
 */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    /* В примере ниже внешний цикл идёт от 0 до 2 с шагом +1, то есть 0 -> 1 -> 2.
    * Внутри этого внещнего цикла находится ещё один цикл, который идёт в диапазоне от 10 до 12, тоже
    * с шагом +1, то есть 10 -> 11 -> 12.
    * Так как внутренний цикл является ТЕЛОМ внешнего цикла, то внутренний цикл будет выполняться ВЕСЬ для
    * КАЖДОГО шага внешнего цикла.
    *
    * Другими словами, в примере ниже, для КАЖДОГО значения i будут проходиться ВСЕ значения j.
    * Рассмотрим пошагово:
    * На 1-ом шаге внешнего цикла i = 0. Заходим в цикл. И для i = 0 выполнится ВЕСЬ внутренний цикл.
    * То есть для i = 0 переменная j пройдёт по всем своим значениям от 10 до 12 и выведется:
    * i = 0     j = 10
    * i = 0     j = 11
    * i = 0     j = 12
    * Затем, когда внутренний цикл полностью закончится, закончится 1-ый шаг внещнего цикла и переменная i
    * внешнего цикла щёлкнет и станет 1 и опять начнёт выполняться весь внутренний цикл и выведется дальше:
    * i = 1     j = 10
    * i = 1     j = 11
    * i = 1     j = 12
    *
    * и так далее, то есть, ещё раз:
    * На КАЖДЫЙ шаг внешнего цикла выполняются ВСЕ шаги внутреннего */

    for (int i = 0; i < 3; i++)
    {
        for (int j = 10; j < 13; j++)
        {
            cout << "i = " << i << "\t\tj = " << j << endl;
        }
        cout << endl;
    }

    return 0;
}