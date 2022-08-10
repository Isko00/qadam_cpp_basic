#include <iostream>

using namespace std;

void foo(int a) {
    a++;
    cout << "in foo a = " << a << endl;
}

void doo(int *pa) {
    (*pa)++;
    cout << "in doo a = " << *pa << endl;
}

int main() {
    int a = 0;
    cout << "at beginning a = " << a << endl;

    foo(a);

    cout << "after foo() a = " << a << endl;

    doo(&a);

    cout << "after doo() a = " << a << endl;    
}