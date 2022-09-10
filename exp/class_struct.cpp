#include <iostream>

using namespace std;

class Node {
    int value = 10;

public:
    int get_value() {
        return value;
    }

    bool set_value(int number) {
        if (number > 5 && number < 15) {
            value = number;
            return 1;
        } else {
            return 0;
        }
    }
};

int main() {
    Node my_node;

    cout << my_node.get_value() << endl;

    my_node.value = 30;

    cout << my_node.get_value() << endl;

    return 0;
}