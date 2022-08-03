#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int A = 2, B = 9;
    int sum = 0;

    for (int i = A; i <= B; i++) {
        sum += (int) pow(i, 2);
    }

    cout << "Sum = " << sum;

    return 0;
}