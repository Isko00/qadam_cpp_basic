#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int scale, mass;
    cin >> scale >> mass;

    switch (scale) {
        case 1:
            cout << mass;
            break;
        case 2:
            cout << fixed << mass * pow(10, -6);
            break;
        case 3:
            cout << defaultfloat << mass * pow(10, -3);
            break;
        case 4:
            cout << (int) mass * pow(10, 3);
            break;
        case 5:
            cout << (int) mass * pow(10, 2);
            break;
        default:
            cout << "Wrong input!";
    }
    
    return 0;
}