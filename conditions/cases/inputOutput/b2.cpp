#include <iostream>

using namespace std;

int main() {
    int vvod;
    cin >> vvod;

    cout << "The next number for the number " << vvod 
        << " is " << vvod + 1 << "." << endl;
    cout << "The previous number for the number " << vvod 
        << " is " << vvod - 1 << ".";

    return 0;
}