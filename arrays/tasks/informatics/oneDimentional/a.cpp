#include <iostream>

using namespace std;

int main() { 
                //       0       1        2       3
    int arr[3][2] = {{3, 4}, {5, 2}, {7, 0}};

    cout << arr[2][1] << endl;

    for (int i = 0; i < 3; i++) {
        cout << "arr[" << i << "]:";

        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}