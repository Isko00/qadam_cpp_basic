#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << num1 << num2;
    // если первое число больше или равно второму
    if (num1 > num2) {
        // выводим первое число
        cout << num1;
    // если условие не выполнилось,
    // то есть второе число оказалось больше
    } else {
        cout << "ravny";
    }

    return 0;
}