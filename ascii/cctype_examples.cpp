#include <iostream>
#include <cctype>

using namespace std;

int main() {
    // библиотека "ctype.h"
    char c = 'A';

    c = tolower(c);

    cout << c << endl;

    c = toupper(c);

    cout << c << endl;

    cout << isalpha(c) << endl;
    cout << isdigit(c) << endl;

    c = '1';

    cout << isalpha(c) << endl;
    cout << isdigit(c) << endl;

    return 0;
}