#include <iostream>
using namespace std;

int main() {
    // Объявляем переменные
    int i = 1, n;
    // Ввод переменных
    cin >> n;
                          
    while (i <= n) {
        i *= 3;           
        cout << i << " ";             
    }

    cout << ((i == n) ? "True" : "False") << endl;

    return 0;
}