#include <iostream>

using namespace std;

struct Elem { 
    int val; 
    Elem *prev; 
};

struct Stack { 
    Elem *last;

    Stack() { last = NULL; }

    void push (int a) { 
        Elem *temp;
        temp = new Elem();
        temp->val = a;
        temp->prev = last;
        last = temp;
    }

    int pop () {
        if (last != NULL) {
            int v = last->val;
            Elem *temp = last;
            last = last->prev;
            delete temp;
            return v;
        } else {
            cerr << "empty stack" << endl;
            return 0;
        } 
    }

    int top () { 
        return last->val; 
    }

    bool empty () { 
        return last == NULL; 
    }

    void free () { 
        while (!empty ()) pop (); 
    }

    ~Stack () {
        free (); 
    }
};

int main () {
    int stacksAmount, stackCapacity, boxNumber, boxesInStack;
    cin >> stacksAmount;
    Stack stacksArray[stacksAmount + 1];

    if (stacksAmount == 1) {
        return 0;
    } else if (stacksAmount == 2) {
        cout << 1 << " " << 2;
        return 0;
    }

    for (int i = 1; i <= stacksAmount; ++i) {
        cin >> stackCapacity;
        if (stackCapacity > 0) {
            cin >> boxNumber;
            boxesInStack = 1;

            while (boxNumber == i && boxesInStack < stackCapacity) {
                cin >> boxNumber;
                ++boxesInStack;
            }

            if (boxNumber != i) 
                stacksArray[i].push(boxNumber);

            while (boxesInStack < stackCapacity) {
                cin >> boxNumber;
                stacksArray[i].push(boxNumber);
                ++boxesInStack;
            }
        }
    }

    for (int i = 1; i < stacksAmount; ++i) {
        while (!stacksArray[i].empty()) {
            while (!stacksArray[i].empty()
                    && stacksArray[stacksArray[i].top()].empty()) {
                cout << i << " " << stacksArray[i].pop() << endl;
            }

            while (!stacksArray[i].empty() 
                    && !stacksArray[stacksArray[i].top()].empty()) {
                cout << i << " " << stacksAmount << endl;
                stacksArray[stacksAmount].push(stacksArray[i].pop());
            }
        }
    }

    while (!stacksArray[stacksAmount].empty()) {
        boxNumber = stacksArray[stacksAmount].pop();

        if (boxNumber == stacksAmount
                || boxNumber == 1) {
            cout << stacksAmount << " " << 1 << endl;
            stacksArray[1].push(boxNumber);
        } else {
            cout << stacksAmount << " " << boxNumber << endl;
        }
    }

    int boxesOfFirstStackInSecondStack = 0;

    while (!stacksArray[1].empty()) {
        boxNumber = stacksArray[1].pop();

        if (boxNumber == 1) {
            cout << 1 << " " << 2 << endl;
            boxesOfFirstStackInSecondStack++;
        } else {
            cout << 1 << " " << boxNumber << endl;
        }
    }

    for (int i = 0; i < boxesOfFirstStackInSecondStack; i++) {
        cout << 2 << " " << 1;
    }

    return 0;
}