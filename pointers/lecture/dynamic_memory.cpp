#include <iostream> 
#include <new> 
using namespace std;

struct My_struct {
    int value;

    My_struct(int a) {
        value = a;
    }
};

int main() {
    int *a = NULL;

    a = new int;
    *a = 17;
    cout << "a = " << *a << endl;

    delete a;

    My_struct *b = new My_struct(75);
    cout << "b = " << (*b).value << endl;

    delete b;

    int *p = new (nothrow) int;
    if (!p) {
       cout << "Memory allocation failed\n";
    }
    
    delete p;

    int *arr = new (nothrow) int[5];

    if (!arr)
        cout << "allocation of memory failed\n";
    else {
        for (int i = 0; i < 5; i++) {
            arr[i] = i;
        }
 
        cout << "Value store in block of memory: \n";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    
    int *new_arr = new (nothrow) int[10];
    if (!new_arr)
        cout << "allocation of memory failed\n";
    else {
        for (int i = 0; i < 10; i++) {
            if (i < 5) {
                new_arr[i] = arr[i];
                continue;
            }
            new_arr[i] = 11;
        }
 
        cout << "Value store in block of memory: \n";
        for (int i = 0; i < 10; i++) {
            cout << new_arr[i] << " ";
        }
    }

    delete[] arr;
    arr = new_arr;
    new_arr = NULL;

    cout << endl;
    delete[] arr;

    return 0;
}