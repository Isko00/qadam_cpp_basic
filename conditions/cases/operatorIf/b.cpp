#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    // если первое число больше или равно второму
    if (num % 4 == 0 && num % 100 != 0 && num % 400 == 0) {
        cout << "YES";
    } else {
        // выводим второе число
        cout << "NO";
    }

    return 0;
}