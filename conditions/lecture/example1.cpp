#include <iostream>

using namespace std;

int main() {
    bool hasPassword;

    cout << "Enter number:" << endl;
    cout << "0: if you do not have password\n";
    cout << "1: if you have password\n";

    cin >> hasPassword;

    // проверка адекватности ввода
    if (cin.fail()) {
        cout << "Please enter a valid input";
        cin.ignore(80, '\n');
        cin.clear();
        // конец
        return 0;
    }

    // реакция на выбранный вариант
    if (hasPassword) {
        cout << "log in succesful!";
    } else {
        cout << "no log in without password!";
    }

    // конец
    return 0;
}