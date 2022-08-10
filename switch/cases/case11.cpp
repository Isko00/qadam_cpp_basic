#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    const string N = "North", E = "East", S = "South", W = "West";
    int d;
    cin >> d;

    switch (d) {
        case 'N': dir = 0; break;
        case 'E': dir = 1; break;
        case 'S': dir = 2; break;
        case 'W': dir = 3; break;
        default: cout << "bad input"; return -1;
    }
 
    short choise;
    cout << "-n: -90 * n\n n: 90 * n\nChoise:";
    cin >> choise;
 
    if (choise > 4) choise = choise % 4;
    if (choise < 0) choise = - ( - choise % 4);
    dir = (dir + choise + 4) % 4;
    cout << "New direction is " << Direction_names[dir];
 
    return 0;
}