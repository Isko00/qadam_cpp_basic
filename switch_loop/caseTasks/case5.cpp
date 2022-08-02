#include <iostream>
using namespace std;

int main() {
    int operation;
    const int A = 8, B = 2;
    
    cin >> operation;

    switch (operation) {
        case 1:
            cout << A + B;
            break;
        case 2:
            cout << A - B;
            break;
        case 3:
            cout << A * B;
            break;
        case 4:
            cout << A / B;
            break;
        default:
            cout << "Wrong input!";
    }
    
    return 0;
}