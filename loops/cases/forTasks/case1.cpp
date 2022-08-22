#include <iostream>
using namespace std;

int main() {    

    for (int i = 0; i < 10; i = i + 1) {
        for (int j = 0; j < 10; j = j + 1) {
            cout << "*" << " ";
        }

        cout << endl;

    }
/*
    for (int i = 0; i < 100; i = i + 1) {
        if (i % 10 == 0 && i > 0) {
            cout << endl;
        }
        cout << "* ";
    }
*/
    // Завершение функции
    return 0;
}