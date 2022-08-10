#include <iostream>

using namespace std;

int main() {
    int a = 5;

    int *pa = &a;

    int *pa2 = &a;

    cout << "pa address[" << pa << "], value = " << *pa << endl;
    cout << "pa2 address[" << pa2 << "], value = " << *pa2 << endl;

    *pa2 = 2;

    cout << "a = " << a << endl;
    cout << "pa address[" << pa << "], value = " << *pa << endl;
    cout << "pa2 address[" << pa2 << "], value = " << *pa2 << endl;
}