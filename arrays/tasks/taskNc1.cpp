#include <iostream>
using namespace std;

int main() {
    int input, cnt = 0, a[100];

    while (true) {
        cin >> input;
        if (input == 4)
            break;
        a[cnt] = input;
        cnt++;
    }

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