#include <iostream>
#include <cmath>

using namespace std;

int power(int num, int a) {
    cout << "num[" << num << "], a[" << a << "]" << endl;
    if (a > 0) {
        if (a % 2 == 1 && a > 1) {
            cout << "\t\tnum[" << num << "], a[" << a << "]" << endl;
            return power(num * num, a / 2);
        }

        cout << "\tnum[" << num << "], a[" << a << "]" << endl;
        return num * power(num, --a);
    } 

    return 1;
}

int main() {
    int num;
    int a;
    cin >> num >> a;

    cout << power(num, a);
    return 0;
}