#include <iostream>
using namespace std;

int main() {
    int input = 4, cnt = 0, a[100];
    
    do {
        a[cnt++] = input;
        cin >> input;
    } while (input != 4);

    for (int i = 1; i < cnt; i++) {
        if (i > 1) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << endl;

    for (int i = 0; i < cnt - 1; i++) {
        a[i] = a[i + 1];
    }   
    cnt--;

    for (int i = 0; i < cnt; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << endl;
    
    int max_elem = a[0], min_elem = a[0];
    int max_index = 0, min_index = 0;
    for (int i = 0; i < cnt; i++) {
        if (max_elem < a[i]) {
            max_elem = a[i];
            max_index = i;
        }
        if (min_elem > a[i]) {
            min_elem = a[i];
            min_index = i;
        }
    }
    cout << "Max: a[" << max_index << "] = " << max_elem << endl;
    cout << "Min: a[" << min_index << "] = " << min_elem << endl;
    return 0;
}