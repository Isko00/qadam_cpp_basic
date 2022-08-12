#include <iostream>
#include <cmath>

using namespace std;

bool Election(bool x, bool y, bool z) {
    int sum = x + y + z;
    return sum >= 2;
}

int main() {
    bool x, y, z;
    cin >> x >> y >> z;
    
    cout << Election(x, y, z);

    return 0;
}