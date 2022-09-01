#include <iostream>

using namespace std;

void find_sum(int number, int* sum) {
    *sum += number % 10;

    if (number > 10) {
        find_sum(number / 10, sum);
    }
}

int main() {
    int n = 12445, sum = 0;

    find_sum(n, &sum);

    cout << sum;
}