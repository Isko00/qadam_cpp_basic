#include <iostream>

using namespace std;

int main() {
    int n, power = 1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        //cout << power << " ";
        power *= 2;
    }

    cout << power;
}