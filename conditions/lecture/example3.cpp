#include <iostream>

using namespace std;

int main() {
    int points;

    cin >> points;

    switch (points) {
        case 0:
            cout << "No way!";
            break;
        case 1 ... 50:
            cout << "F";
            break;
        case 51 ... 65:
            cout << "D";
            break;
        case 66 ... 80:
            cout << "C";
            break;
        case 81 ... 90:
            cout << "B";
            break;
        case 91 ... 94:
            cout << "A";
            break;
        case 95 ... 100:
            cout << "A+";
            break;
        default:
            cout << "Wrong input!";
    }
}