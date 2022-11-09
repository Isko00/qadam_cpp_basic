#include <iostream>

using namespace std;

int main() 
{ 
    int ar[100];
    int index = 0;
    while (true) {
        int x;
        cin >> x;
        if (x == 4) {
            break;
        } 

        ar[index] = x;
        cout << "ar[" << index << "] = " << x << endl;

        index++;
        cout << "index = " << index << endl;
    } 
    int sum = 0;
    sum = sum + ar[index];
    cout << sum;

    return 0;
}