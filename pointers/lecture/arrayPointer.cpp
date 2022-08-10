#include <iostream>

using namespace std;

int main() {
    int arr[5] = {4, 55, 79, 1, 4};

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    cout << string(25, '=') << endl;

    int *pArr = arr;

    cout << "arr address[" << arr << "]" << endl;
    cout << "pArr address[" << pArr << "]" << endl;

    cout << string(25, '=') << endl;

    for (int i = 0; i < 5; i++) {
        // cout << pArr[i] << endl;
        cout << *(pArr + i) << endl;
    }
}