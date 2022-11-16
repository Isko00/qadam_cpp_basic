#include <graphics.h>
#include <iostream>

using namespace std;

int main() {
    initwindow(400, 300, "First Sample");
    circle(100, 50, 40);
    while (!kbhit( ))
    {
        delay(200);
    }
}
