#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    float sum = 0;

    for (int i = 0; i <= n; i++) {
        cout << n + i << " " << pow(n + i, 2) << " " << sum << "\n";
        sum += pow(n + i, 2);
    }

    cout << "Sum = " << sum;

    return 0;
}