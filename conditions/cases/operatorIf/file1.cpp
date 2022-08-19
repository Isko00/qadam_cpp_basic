#include <iostream>

using namespace std;

int main() {
    char n = 'i';
    cin >> n;
    cout << "n = " << (int) n << endl;
    bool b = n;
    cout << "b = " << b;
    
    // логические операторы
    // && и
    // || или

    bool a = (1 || 0); // 1 + 0 = 1
    bool b = (1 && 0); // 1 * 0 = 0

    bool d = (1 || 1); // 1 + 1 = 1
    bool c = (1 && 1); // 1 * 1 = 1

    bool e = (0 || 0); // 0 + 0 = 0
    bool f = (0 && 0); // 0 * 0 = 0

    bool g = num > 4;
    
    if (num > 4 && num < 0) {
        cout << "num > 4";
    } else {
        cout << "num <= 4";
    }
    
    return 0;
}