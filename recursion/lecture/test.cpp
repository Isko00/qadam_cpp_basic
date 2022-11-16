#include <iostream>

using namespace std;

void rec(int *a) {
    cout << *a;
    (*a)--;

    if (*a > 0) {
        rec(a);
    }
}

    // 5 4 3 2 1

int main() {
    int a = 5;

    rec(&a);

    return 0;
}