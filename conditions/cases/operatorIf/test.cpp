#include <iostream>

using namespace std;

int main() {
    int a = 12;

    if (a >= 10) {
        cout << "a >= 10" << endl;
        
        if (a > 11) {
            cout << "a > 11" << endl;
        }
    } else if (a < 9) {
        cout << "a < 9";
    } else {
        cout << "else";
    }


    if (false) {
        ;
    }
}