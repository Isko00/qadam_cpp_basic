/**
 * Одним из основополагающих и самых простых принципов в программировании является
 * D.R.Y. - это аббревиатура, означает Do Not Repeat Yourself
 * Смысл этого принципа в том, чтобы не повторять код. Не до фанатизма, конечно. Это не значит, что
 * в коде не должно повторяться ни одной строки. Но если есть повторения, которых можно избежать,
 * то лучше этих лишний повторений избежать.
 *
 * Данная программа представляет собой простую игру "Угадать число".
 * Правила очень простые. Компьютер загадывает рандомное число от 1 до 100.
 * Игрок (тот, кто будет играть в эту игру в консоле) этого числа не знает.
 * Его задача угадать это число с наименьшим колчеством попыток.
 * Игра также будет давать подсказки.
 * Если очередная попытка игрока оказалась больше, чем загаданное число, игра выдаст подсказку,
 * что надо ввести меньше. И наоборот, если очередная попытка игрока оказалась меньше, чем загаданное число,
 * то игра выдаст подсказку, что надо следующая его попытка должна быть больше.
 * Когда игрок угадает, игра его поздравит и скажет, сколько всего попыток он истратил.
 *
 * P.S. Количество попыток неограниченно
 *
 * Ниже представлен вариант реализации через while (true) */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    srand(time(0));
    int random_number = rand() % 100 + 1;

    int guess_counter = 0;

    int user_try;

    while (true)
    {
        cout << "Введите Вашу " << ++guess_counter << " попытку: ";
        cisn >> user_try;

        if (user_try < random_number)
            cout << "Надо больше!\n" << endl;
        else if (user_try > random_number)
            cout << "Надо меньше!\n" << endl;
        else
        {
            cout << "\nВы победили! Всего попыток затрачено: " << guess_counter << endl;
            break;
        }
    }

    return 0;
}