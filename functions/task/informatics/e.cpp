#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    for (int i = 2; i * i <= num; i++) {
        // cout << "[" << i << "] = " << num % i << endl;
        if (num % i == 0) {
            //cout << i << endl;
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;
    cin >> num;
    
    if (isPrime(num))
        cout << "prime";
    else 
        cout << "composite";

    return 0;
}