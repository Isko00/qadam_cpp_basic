#include <iostream>

using namespace std;

int min (int a, int b, int c, int d) {
    if (a < b) {
        b = a;
    }
    
    if (c < d) {
        d = c;
    }

    if (b < d) {
        d = b;
    }

    return d;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int minimal = min(a, b, c, d);
    cout << minimal;

    return 0;
}