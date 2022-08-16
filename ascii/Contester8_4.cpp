#include <iostream>
#include <cctype>

using namespace std;

void Erzhan(char* c) {
    char new_c[100];
    int index = 0;

    for (int i = 0; c[i] != '\0'; i++)
        if (isalpha(*(c + i)))
            new_c[index++] = *(c + i);

    cout << new_c << endl;
}

int main() {
    char c[100];

    cin >> c;

    Erzhan(c);

    return 0;
}