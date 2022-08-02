#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;

    switch (month) {
        case 1 ... 2: case 12:
            cout << "winter";
            break;
        case 3 ... 5:
            cout << "spring";
            break;
        case 6 ... 8:
            cout << "summer";
            break;
        case 9 ... 11:
            cout << "autumn";
            break;
        default:
            cout << "Wrong input!";
    }
    
    return 0;
}