#include <iostream>
#include <cmath>

using namespace std;

double power(double num, double *pNum, int a) {
    if (a > 0) {
        //cout << "num[" << num << "], a[" << a << "]" << endl;
        return power(num * (*pNum), --a);
    } 
    
    if (a == 0) {
        return 1.0;
    }
    
    return 1.0 / power(num, -a);
}

int main() {
    double num;
    int a;
    cin >> num >> a;

    cout << power(num, a);
    return 0;
}