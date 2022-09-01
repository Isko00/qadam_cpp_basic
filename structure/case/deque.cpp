#include <iostream>

using namespace std;

int size = 0;
int arr[10000000];

void push_front() {
    int number;
    cin >> number;

    for (int i = size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    arr[0] = number;
    size += 1;

    cout << "ok\n";
}

void push_back() {
    int number;
    cin >> number;

    arr[size] = number;
    size += 1;

    cout << "ok\n";
}

void pop_front() {
    if (size == 0) cout << "error\n";
    else {
        cout << arr[0] << '\n';
        size -= 1;
        for (int i = 0; i < size; i++) {
            arr[i] = arr[i + 1];
        }
    }
}

void pop_back() {
    if (size == 0) cout << "error\n";
    else {
        size -= 1;
        cout << arr[size] << '\n';
        arr[size] = 0;
    }
}

void front() {
    if (size == 0) cout << "error\n";
    else {
        cout << arr[0] << '\n';
    }
}

void back() {
    if (size == 0) cout << "error\n";
    else {
        cout << arr[size - 1] << '\n';
    }
}

void clear() {
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
    size = 0;
    
    cout << "ok\n";
}

void getSize() {
    cout << size << "\n";
}

void print() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void commandMaster(string command) {
    if (command == "push_front") {
        push_front();
    } else if (command == "push_back") {
        push_back();
    } else if (command == "pop_front") {
        pop_front();
    } else if (command == "pop_back") {
        pop_back();
    } else if (command == "front") {
        front();
    } else if (command == "back") {
        back();
    } else if (command == "size") {
        getSize();
    } else if (command == "clear") {
        clear();
    } else if (command == "print") {
        print();
    } else {
        cout << "Wrong command!\n";
    }
}

int main() {
    string a;

    while (true) {
        cin >> a;

        if (a == "exit") {
            cout << "bye";
            break;
        }

        commandMaster(a);
    }
 
    return 0;
}