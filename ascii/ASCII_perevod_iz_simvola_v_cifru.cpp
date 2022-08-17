/**
*
* Данная программа наглядно демонстрирует алгоритм,
* позволяющий переводить символы цифр в цифры.
*
* Т.Е. Если у вас есть например символ '5' (тип данных - char), то
* с помощью приведенного ноже алгоритма можно будет
* получить цифру 5 (тип данных - integer).
*
* Алгоритм перевода цифры в виде символа в цифру в виде числа:
* Используется ASCII код. Символ '0' в ASCII коде имеет числовой аналог,
* равный 48. Получается, что символ '1' - 49, '2' - 50, '3' - 51 и т.д.
* Как получить из символа '5' число 5? Надо из символа '5' отнять символ '0'.
* Получается, что из 53 отнимется 48, а это как раз таки 5.
*
**/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    /* Символьные представления цифр */
    char charZero = '0';
    char charThree = '3';
    char charFive = '5';
    char charSeven = '7';
    char charNine = '9';

    /* Переменная intZero имеет тип данных integer,
    а значит она не может хранить в себе символы, только ЧИСЛА,
    поэтому операцию вычитания СИМВОЛА из СИМВОЛА (charZero - '0')
    она видит как операцию вычитания ЧИСЛА из ЧИСЛА (48 - 48).
    И результат тоже хранить в виде числа, т.е. 48 - 48 = 0
    В итоге из СИМВОЛА '0' получили число 0 */
    int intZero = charZero - '0';

    /* Можно также писать не  - '0', а - 48,
    Разницы нет */
    int intThree = charThree - '0';
    int intFive = charFive - '0';
    int intSeven = charSeven - '0';
    int intNine = charNine - '0';

    cout<<"Цифра 0 из символа '0': "<<intZero<<endl;
    cout<<"Цифра 3 из символа '3': "<<intThree<<endl;
    cout<<"Цифра 5 из символа '5': "<<intFive<<endl;
    cout<<"Цифра 7 из символа '7': "<<intSeven<<endl;
    cout<<"Цифра 9 из символа '9': "<<intNine<<endl;

    //system("pause");
    return 0;
}