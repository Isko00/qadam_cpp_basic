#include <iostream>
#include <cmath>

using namespace std;

int power(int num, int *pNum, int a) {
    if (a - 1) {
        // cout << num << " " << a << endl;
        return power((*pNum) * num, &num, --a);
    }

    return num;
}

int main() {
    int num, a;
    cin >> num >> a;
    
    if (a > 0) {
        cout << power(num, &num, a);   
    } else if (a == 0) {
        cout << 0;
    } else {
        double answer = 1.0 / power(num, &num, a * -1);
        cout << answer;
    }

    return 0;
}