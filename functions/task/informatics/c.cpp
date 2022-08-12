#include <iostream>
#include <cmath>

using namespace std;

bool Xor (bool x, bool y) {
    return (x == 0 || y == 0) && (x != y);
}

int main() {
    bool x, y;
    cin >> x >> y;
    
    cout << Xor(x, y);

    return 0;
}