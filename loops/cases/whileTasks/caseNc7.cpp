#include <iostream>

using namespace std;

int main() {
    int n, k = 0; // n = 28, k = 0
    cin >> n;

    while ((k + 1) * (k + 1) <= n) { 
        k = k + 1;
    }
    
    cout << "K: " << k;

    return 0;
}