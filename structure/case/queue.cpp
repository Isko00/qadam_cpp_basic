#include <iostream>

using namespace std;

struct Elem { 
    int val; 
    Elem *next; 
};

struct Queue { 
    Elem *first, *last;

    Queue() { first = NULL; }

    void push(int a) {
        Elem *temp;
        temp = new Elem();
        temp->val = a;

        if (first == NULL) {
            first = temp;
            last = first;
        } else {
            last->next = temp;
            last = temp;
        }
    }

    int pop() {
        if (first != NULL) {
            int v = first->val;
            Elem *temp = first;
            first = first->next;
            delete temp;
            return v;
        } else {
            cerr << "empty queue" << endl;
            return 0;
        }
    }

    int front() { 
        return first->val; 
    }

    bool empty() { 
        return first == NULL; 
    }

    void free() { 
        while (!empty()) {
            pop(); 
        }
    }

    ~Queue() {
        free(); 
    }
};

int main()
{
    int x, moves = 0, len = 10;
    Queue a, b;

    for(int i = 0; i < len; i++) {
        cin >> x;
        if (i < 5) {a.push(x);}
        else {b.push(x);}
    }

    while(!a.empty() && !b.empty() && moves <= 1000000) {
        moves++;
        int aFirst = a.front(), bFirst = b.front();

        if (aFirst == 0 && bFirst == 9) {
            a.push(a.pop());
            a.push(b.pop());
        } else if (bFirst == 0 && aFirst == 9) {
            b.push(a.pop());
            b.push(b.pop());
        } else if (aFirst > bFirst) {
            a.push(a.pop());
            a.push(b.pop());
        } else {
            b.push(a.pop());
            b.push(b.pop());
        }
    }

    if (a.empty()) cout << "second " << moves << endl;
    else if (b.empty()) cout << "first " << moves << endl;
    else cout << "botva\n";
}