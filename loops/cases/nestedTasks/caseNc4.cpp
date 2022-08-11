#include <iostream>
using namespace std;

int main() {
    int sum = 0, k, prod = 1;
    
    for (int i = 0; i < 10; i++) {
        cin >> k;
        sum = sum + k;
        prod = prod * k;
    }
    
    cout << "Sum = " << sum << endl;
    cout << "Prod = " << prod << endl;

    return 0;
}