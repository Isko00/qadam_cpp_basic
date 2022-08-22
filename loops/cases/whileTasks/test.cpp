#include <iostream>

using namespace std;

int main() {
    char arr[2][3] = {{'a', 'b', 'c'}, {'q', 'w', 'e'}};
/*
       9a      9b      9c
    {{1, 2}, {2, 2}, {3, 4}}

    {1, 2, 3};
*/
//  cout << arr[0][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = 'w';
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}