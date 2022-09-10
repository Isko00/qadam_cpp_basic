#include <iostream>

using namespace std;

void rec(int number) {
    if (number > 0) { 
        rec(number - 1);
    }
    cout << number << endl;
}

int main() {
    rec(5);

    return 0;
}