#include <iostream>
using namespace std;

int main() {
    const int A = 1, B = 9;
    int n = 0;

    for (int i = B - 1; i > A; i--) {
        cout << i << " ";
        n++;
    }

    cout << "\nN = " << n;
    return 0;
}