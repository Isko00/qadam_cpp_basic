#include <iostream>

using namespace std;

int main() {
    // "||" или
    // "&&" и

    int num1, num2;
    cin >> num1 >> num2;

    if (num1 > num2 || num1 > 0) {
        cout << "greater than 5";
    } else {
        cout << "less than 5";
    }

/*
    1) создать переменную num, прировнять ее к 3
    2) создать условный оператор if else    
    3) если num больше нуля вывести в консоль "bolshe"
    4) если нет вывести в констоль "menshe"
*/
    return 0;
}