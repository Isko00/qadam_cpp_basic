#include <iostream>

using namespace std;

int main() {
    char simbol;
    cin >> simbol;
    // если 'А', тогда вывести в консоль "letter A"
    // если 'B' до 'F', тогда вывести в консоль "from B to F"
    // если 'R', 'T' или 'Y', тогда вывести в консоль "rty"
    switch (simbol) {
        case 'A':
            cout << "simbol = #";
            break;
        case 101:
            cout << "number = 101";
            break;
        case 3 ... 12:
            cout << "from 3 to 12";
            break;
        case 17: case 15: case 23:
            cout << "17, 15 or 23";
            break;
        default:
            cout << "number error";
    }

    return 0;
}