/**
 * Цикл (Loop) - это одна из самых основных конструкций в программировании.
 * Циклы присутствуют практически во всех Языках Программирования и применяются на постоянной основе в любой
 * мало-мальски серьёзной программе.
 *
 * Циклы необходимы для того, чтобы лаконично и коротко записать блок кода, который состоит, в основном,
 * из повторяющихся частей.
 *
 * Циклы бывают 3-ёх основных видов:
 * 1) Цикл с предусловием (while)
 * 2) Цикл с постусловием (do...while)
 * 3) for
 *
 * Этот файл будет посвящён 1-ому типу.
 */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    /* Сразу рассмотрим яркий, но при этом очень простой пример задачи, в которой необходимо
     * использование цикла. Мне необходимо вывести на консоль числа от 1 до 15. Если бы у меня не было
     * бы такого инструмента как цикл, но код для решения этой задачи выглядел бы примерно так:
     * cout << 1 << endl;
     * cout << 2 << endl;
     * cout << 3 << endl;
     * cout << 4 << endl;
     * ...
     * cout << 15 << endl;
     * Естественно, такой код примитивен и огромен, если нужно будет вывести числа от 1 до 100, то выводить
     * каждое число по отдельности, то это будет 100 команд вывода.
     * При этом мы видим, что большая часть кода на каждой строчке повторяется, а именно каждый раз это команда
     * вывода, меняется лишь число, которая эта команда выводит на консоль. Цикл while в этом случае будет
     * составлен примерно так: */

    int i = 1;                      // задаём начальное значение вспомогательной переменной i, которое равно 1
    while (i < 16)                  // запускаем цикл, который будет продолжаться до тех пор, пока i остаётся меньше 16
    {
        cout << i << " ";           // на каждом шаге цикла будет выводиться ТЕКУЩЕЕ значение переменной i
        i = i + 1;                  // после того, как текущее значение переменной i вывелось на строке выше, то его значение повышается на 1 от предыдущего
    }                               // закрывающаяся фигурная скобка заканчивает ТЕЛО цикла

    /* Разберём верхний цикл. Переменная i в нашём случае вспомогательная, её мы могли назвать как угодно.
     * Забегая вперёд, эта переменная i в течение цикла будет менять своё значение от 1 до 15, как раз в том
     * диапазоне, который нам нужен. А теперь вернёмся к циклу:
     *
     * Каждый цикл состоит из 3-ёх основных частей:
     * 1) Начало цикла (откуда он начинается)
     * 2) Конец цикла (когда он закончится)
     * 3) Шаг цикла (с каком шагом он шагает от начала до конца)
     *
     * В начале мы задали начальное значение переменной i:
     * int i = 1;
     * Это и есть начало цикла.
     *
     * Затем запускаем цикл while:
     * while (i < 16)
     * Тут мы указываем конец цикла,то есть условие, которое
     * !) должно СОБЛЮДАТЬСЯ (быть true), чтобы мы заходили внутрь тела цикла и он продолжался
     * !) должно НАРУШИТЬСЯ (стать false), чтобы мы вышли из цикла и цикл закончился
     * То есть внутри круглых скобок () должен стоять boolean (true или false)
     *
     * В примере выше мы видим, что таковым условием является (i < 16), пока это условие остаётся true, цикл продолжается.
     * Когда это условие станет false, цикл закончится.
     *
     * Затем внутри фигурных скобок {}. Идёт тело цикла. То есть то, что будет выполняться НА КАЖДОМ шаге цикла.
     * В нашем примере, на каждом шаге цикла будет выводиться ТЕКУЩЕЕ значение переменной i:
     * cout << i << " ";
     * После чего значение i возрастает на 1 от предыдущего. То есть, последовательность примерно такая:
     * 1) Начальное значение переменной i = 1;
     * 2) Начинается цикл, проверяем, текущее значение i (1) меньше 16? Да, меньше.
     * 3) Заходим в цикл
     * 4) Выводим 1
     * 5) Повышаем значение переменной i до 2-ух.
     * 6) Проверяем, текущее значение i (2) меньше 16? Да, меньше.
     * 7) Заходим в цикл
     * 8) Выводим 2
     * 9) Повышаем значение переменной i до 3-ёх.
     * 10)... и так далее до тех пор, пока соблюдается условие (i < 16)
     *
     * Насчёт записи i = i + 1. Означает, что НОВОЕ значение переменной i = СТАРОЕ значение переменной i + 1.
     * Короче можно записать i += 1.
     * Когда идёт повышение на 1, то можно записать ещё короче: i++. Это называется increment.
     * Понижение на 1 можно записать как i--. Это называется decrement.
     *
     * (!!!) Подробнее про особенности разной формы записи increment/decrement обязательно посмотреть в классе
     * IncrementDecrementPeculiarities (!!!) */

    /* Бывает случаи, когда программа застревает в цикле и не может из него выйти, такой цикл называется
     * Infinite Loop или Бесконечный цикл.
     * Ситуация с бесконечным циклом возникает тогда, когда цикл никогда не заканчивается.
     * А это в свою очередь происходит тогда, когда условие выхода из цикла ВСЕГДА true и никогда не становится false.
     *
     * Например, представим, что в примере выше отсутствует повышение i на 1, и цикл выглядит следующим образом:
     * int i = 1;
     * while (i < 16) {
     *      cout << i << " ";
     * }
     * В данной случае мы попадём в бесконечный цикл и на консоль будет бесконечно выводиться 1.
     *
     * Потому что i никогда не увеличитчя, а значит i всегда будет 1, а это в свою очередь означает, что условие
     * (i < 16) всегда будет true, так как 1 всегда меньше 16. А раз условие захода в цикл всегда true и никогда не станет
     * false, значит этот цикл никогда не знакончится. */

    cout << endl << endl;

    /* Есть ещё подход, который использует while(true). Что это такое?
     * Когда мы пишем while(true), мы на место условия захода в цикл намеренно ставим true, то есть там всегда будет
     * стоять true, что в свою очередь означает, что мы намеренно делаем цикл бесконечным. Зачем так делать?
     * Суть такого подхода можно описать так: мы НАМЕРЕННО делаем цикл бесконечным, чтобы САМИМ сказать, когда ему
     * остановиться. А остановить цикл своими руками мы можем с помощью команды break;
     * Суть в том, что while теперь не проверяет на каждом шаге условие захода, так как на месте условия захода стоит
     * true, то есть он просто напросто всегда продолжается. А мы уже сами скажем ему, когда надо остановиться.
     * В примере ниже мы делаем то же самое, что и в примере выше, то есть выводим числа от 1 до 15, то на этот раз
     * используем while(true)*/
    i = 1;
    while (true)
    {
        if (i == 16)
            break;
        cout << i++ << " ";
    }

    /* Иногда while(true) позволяет сократить код, сделать его более лаконичным и избавиться от лишних повторений.
     * Но не всегда.
     * В примере выше мы видим, что конкретно для этой задачи вывода чисел от 1 до 15 на консоль короче и лаконичнее
     * будет использовать первый вариант, так как в данном примере while (true) выглядит более громоздким и ничем не улучшает
     * первый варинт. Случаи, когда while(true) действительно будет смотреть лучше, рассмотрим в последующих примерах/уроках.*/

    cout << "\n\nВывод чисел, кратных 3, в диапазоне от 1 до 20: ";
    /* В теле while можем использовать любые другие конструкции и прописывать любую логику, например, дана такая задача:
     * В диапазоне от 1 до 20 вывести ТОЛЬКО числа кратные 3. */
    i = 1;                          // запускаем цикл с начального значения переменной i равного 1
    while (i < 21)                  // идём до тех пор, пока значение переменной i не превысит 20
    {
        if (i % 3 == 0)             // Только, если очередное рассматриваемое число делится на 3 нацело
            cout << i << " ";       // Выводим его
        i++;                        // Повышаем значение переменной i на 1, чтобы не попасть в бесконечный цикл
    }

    cout << endl << endl;

    /* Рассмотрим несколько самых простых, но при этом самых часто используемых алгоритмов, которые используются
     * для решения многих повседневных задач.
     * 1) Когда нам нужно что-то посчитать или узнать количество чего-либо
     * Для этого используем так называемый СЧЁТЧИК. Счётчик - это простая int переменная, которая щёлкает каждый раз,
     * как мы встречаем что-то, что мы хотим посчитать.
     * Рассмотрим сразу на ярком примере. Дана задача:
     * Посчитать количество чисел, кратных 5, в диапазоне от 1 до 50.
     * (!!!) Первое, что надо сделать, это создать счётчик и обнулить его (!!!)
     * Затем, каждый раз, как мы будем встречать подходящее число, счётчик будет щёлкать и считать его.
     * В самом конце мы выведем значение счётчика, то есть сколько он насчитал.*/
    int counter = 0;        // создаём счётчик и (!!!)обязательно(!!!) обнуляем его
    i = 1;
    while (i < 51)
    {
        if (i++ % 5 == 0) { // Если очередное число соответствует нашим критериям поиска
            counter++;      // считаем его
        }
    }
    // В конце (уже ПОСЛЕ цикла) выводим значение счётчика
    cout << "Чисел, кратных 5 от 1 до 50: " << counter << endl << endl;

    /* Ещё одним очень часто используемым алгоритмом является подсчёт суммы какого-то ряда чисел.
     * Ну или, проще говоря, сумму каких-то значений.
     * Для примера рассмотрим следующую задачу:
     * Посчитать сумму чисел от 1 до 10.
     * Первым делом нам нужна переменная, в которую будут суммироваться все необходимые нам числа.
     * Другими словами, переменная, в которой будет храниться непосредственно итоговая сумму.
     * (!!!) Обязательно (!!!) начальное значение этой переменной делаем равным 0.
     * Это логично, так как изначально, в этой переменной ничего нет, она пуста, мы ещё ничего туда не просуммировали.
     * Затем мы проходимся по интересующим нас числам и суммируем их в нашу переменную.
     * В конце выводим получившееся значение итоговой переменной с суммой. */
    int sum = 0;        // объявляем переменную, в которой будет храниться итоговая сумма
    i = 1;              // начинаем проходиться от 1
    while (i < 11)      // до 10
    {
        sum += i;       // каждое очередное значение переменной i суммируем в переменную sum
        i++;            // не забываем увеливать i, чтобы не попасть в бесконечный цикл
    }
    // В самом конце (ПОСЛЕ окончания цикла) выводим получившееся в итоге значение переменной sum
    cout << "Сумма чисел от 1 до 10 = " << sum << endl << endl;

    /*
     * Рассмотрим пример выше повнимательнее. Значения переменной i идут от 1 до 10.
     * Каждое очередное значение переменной i мы суммируем в переменную sum командой
     * sum = sum + i
     * Или сокращённо
     * sum += i;
     *
     * Чтобы понять, как это работает, рассмотрим алгоритм пошагово:
     * Изначально значение переменной sum = 0;
     * На 1-ом шаге значение переменной i = 1:
     * 1) sum = sum + i; ===> sum = 0 + 1 ===> sum = 1
     * То есть после первого шага переменная sum хранит только первое значение переменной i
     * На 2-ом шаге значение переменной i = 2:
     * 2) sum = sum + i; ===> sum = 1 + 2 ===> sum = 3
     * То есть на втором шаге мы к переменной sum, которая хранит первое значение i прибавили второе значение i,
     * то есть после второго шага переменная sum хранит сумму первых 2-ух значений (1 и 2)
     * На 3-ем шаге значение переменной i = 3:
     * 3) sum = sum + i; ===> sum = 3 + 3 ===> sum = 6
     * То есть после третьего шага переменная sum хранить сумму первых 3-ёх значений (1, 2 и 3)
     *
     * и так далее.
     *
     * В конце концов переменная sum будет хранить сумму всех нужных нам чисел, а именно:
     * sum = 1 + 2 + 3 + 4 + ... + 10 = 55 */

    /* Ниже пример с нахождением произведения ряда чисел. Логика тут абсолютно такая же, как в случае нахождения сумму.
     * Разница лишь в том, что начальное значение переменной, в которой будет храниться итоговое произведение должно быть
     * равно 1, а не 0, потому что, если будет 0, то всё произведение просто обнулится, так как что угодно, умноженное на 0, даёт 0.
     * Ну и, естественно, каждое очередное число не суммируется в итоговую перменную, а перемножается.
     * В конце концов итоговая перенная будет хранить произвдение нужных нам чисел.
     *
     * В примере ниже необходимо найти произведение числео от 1 до 10.
     * Итоговая переменная prod в конце будет хранить значение
     * prod = 1 * 2 * 3 * 4 * ... * 10 = 3628800 */
    int prod = 1;
    i = 1;
    while (i <= 10)
    {
        prod *= i++;
    }
    cout << "Произведение чисел от 1 до 10 = " << prod << endl;

    return 0;
}