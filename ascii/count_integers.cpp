#include <iostream>
using namespace std;

void count_integers(char const * c, int* counter) {
    for (int i = 0; c[i] != '\0'; i++) {
        if (*(c + i) >= 48 && *(c + i) <= 57) {
            *counter = *counter + 1;
        }
    }
}

int main() {
    char c[100];

    cin.getline(c, 100);

    int counter = 0;

    count_integers(c, &counter);

    cout << counter << endl;

    return 0;
}