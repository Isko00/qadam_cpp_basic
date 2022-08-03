/**
 * ¬о втором типе задач на for нет измен€ющейс€ и повтор€ющейс€ частей.
 * “ам есть только 1 неизменна€ часть, котора€ просто повтор€етс€ несколько раз.
 *
 * » в этом типе задач переменна€ i не задаЄт никакую измен€ющуюс€ часть. ќна лишь отсчитывает, сколько раз
 * надо выполнить тело цикла */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    /* –ассмотрим самый простой пример задачи на второй тип:
     * ¬ывести 5 раз Hello, World!
     * ≈сли бы у нас не было бы циклов, то решение выгл€дело бы так:
     * cout << "Hello, World!" << endl;
     * cout << "Hello, World!" << endl;
     * cout << "Hello, World!" << endl;
     * cout << "Hello, World!" << endl;
     * cout << "Hello, World!" << endl;
     *
     *  ак мы видим, никакой измен€ющейс€ части нет, есть лишь повтор€юща€с€ часть, котора€ без изменений
     * повтор€етс€ 5 раз.
     *
     * “ак что в этом случае мы просто запускаем цикл for, который отсчитает 5 раз и 5 раз выполнит без каких-либо
     * изменений эту строчку код, другими словами, просто 5 раз повторит еЄ */

     for (int i = 0; i < 5; i++)
    {
        cout << "Hello, World!" << endl;
    }

    /* ¬ примере выше i всего лишь считает, сколько раз выполнитс€ команда
    * cout << "Hello, World" << endl;
    *
    * ¬начале i = 0, и как бы "Hello, World!" выведетс€ 0-ой раз,
    * затем i = 1, и "Hello, World" выведетс€ 1-ый раз и т.д.
    * ƒругими словами переменна€ i считает, сколько раз выполн€етс€ тело цикла.
    *
    * »з этого следует, что € могу пустить i в диапазоне от 0 до 4, и точно также могу пустить i в диапазоне от
    * 1 до 5. ¬едь и в случае 0 - 4 (0 1 2 3 4) € насчитаю 5 раз, что и в случае 1 - 5 (1 2 3 4 5) € насчитаю те же
    * 5 раз */

    return 0;
}