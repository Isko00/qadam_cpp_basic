#include <iostream>
#include <string>
using namespace std;

// создать структуру компьютер 
// создать у этой структуры аттрибут вес = 10
// создать метод типа инт, который возвращает нам вес
// использовать структуру в функции мейн
struct Computer {
    int weight = 10;
    
    int get_weight() {
        return weight;
    }
};

int main() {
    Computer my_computer;

    cout << my_computer.get_weight();

    return 0;
}
