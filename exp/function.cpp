#include <iostream>

using namespace std;

void delete_array(int array[], int* size) {
    for (int i = 0; i < *size; i++) {
        array[i] = 0;
    }

    *size = 34;
}

int main () {
    int array[3] = {1, 2, 3};
    int size = 3;

    delete_array(array, &size);

    for (int i = 0; i < 3; i++) {
        cout << array[i];
    }

    cout << endl << size;

    return 0;
}