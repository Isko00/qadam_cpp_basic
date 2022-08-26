#include <iostream>

using namespace std;

// создать структуру компьютер 
// создать у этой структуры аттрибут вес = 10
// создать метод типа инт, который возвращает нам вес
// использовать структуру в функции мейн
struct EnemySpaceShip {
    int x_coordinate = 2;
    int y_coordinate = 3;
    int weapon_power;
    
    int getNewEnemy() {
        return 0;
    }
};

int main() {
    EnemySpaceShip a;
    int number = a.getNewEnemy();
}
