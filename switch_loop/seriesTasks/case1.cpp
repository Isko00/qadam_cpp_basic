#include <iostream>
#include <cmath>
using namespace std;

int main() {    
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;

        sum += n;
    }

    cout << "Sum = " << sum;

    return 0;
}