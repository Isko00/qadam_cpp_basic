#include <iostream>
using namespace std;

int main() {
    
    for (int i = 0; i > 10; i = i + 1) {
        // действие выполняемое каждый оборот цикла
        cout << i << endl;
    }

    cout << "\ti = " << i;
    // Завершение функции
    return 0;
}