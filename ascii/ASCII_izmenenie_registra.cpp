/**
*
* Данная программа наглядно демонстрирует алгоритм,
* позволяющий переводить символы строчных букв в символы прописных и наоборот
* с помощью ASCII кода.
*
* Т.Е. Если у вас есть например символ 'А' (символ прописная буква), то
* с помощью приведенного ноже алгоритма можно будет
* получить символ 'a' (символ строчной буквы) и наоборот.
*
* Алгоритм перевода из строчных букв в прописные и наоборот:
* Символ прописной буквы 'A' имеет ASCII-кодный аналог 65,
* а символ строчной буквы 'a' - 97, т.е. разница между ними
* равно 32.
*
* Для того, чтобы из символа строчной буквы
* получить символ прописной буквы, надо от символа строчной отнять 32,
* т.е. 'a' - 32 = 97 - 32 = 65 = 'A'
*
* Для того, чтобы из символа прописной буквы
* получить символ строчной буквы, надо к символу прописной прибавить 32,
* т.е. 'А' + 32 = 65 + 32 = 97 = 'а'
*
**/

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char c[13] = {'h', 'e', 'l', 'l', 'o', ' ', 'W', 'O', 'R', 'L', 'D', '!'};
    cout << "At beginning: " << c << endl;

    for (int i = 0; i < strlen(c); i++) {
        if (c[i] >= 65 && c[i] <= 90) {
            c[i] = c[i] + 32;
        } else if (c[i] >= 97 && c[i] <= 122) {
            c[i] = c[i] - 32;
        }
    }

    cout << "After conversion: "<< c <<endl;

    //system("pause");
    return 0;
}