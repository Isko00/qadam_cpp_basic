#include <iostream>
using namespace std;

int main()
{
    cout << "Format is 'i.j': " << endl;
    for (int i = 0; i < 8; i++)
    {   
        for (int j = 0; j < 8; j++)
        {   
            cout << i << "." << j << " ";
        }
        cout << endl;
    }

    cout << endl << "Triangle: " << endl;
    for (int i = 0; i < 8; i++)
    {   
        for (int j = 0; j < 8; j++)
        {   
            if (i > j) {
                cout << i << "." << j << " ";
            } else {
                cout << "___ ";
            }
        }
        cout << endl;
    }

    cout << endl << "Square: " << endl;
    for (int i = 0; i < 8; i++)
    {   
        for (int j = 0; j < 8; j++)
        {   
            if (i == 0 || i == 7 || j == 0 || j == 7) {
                cout << i << "." << j << " ";
            } else if ((i > 1 && i < 6) && (j > 1 && j < 6)) {
                cout << i << "." << j << " ";
            } else {
                cout << "___ ";
            }

            
        }
        cout << endl;
    }

    cout << endl << "Chess board: " << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == 8) {
                cout << " " << j + 1 << " ";
            } else if (i == 0 || i == 7) {
                switch (j) {
                    case 0: case 7:
                        cout << "ro ";
                        break;
                    case 1: case 6:
                        cout << "kn ";
                        break;
                    case 2: case 5:
                        cout << "bi ";
                        break;
                    case 3:
                        cout << "ki ";
                        break;
                    case 4:
                        cout << "qu ";
                        break;
                }
            } else if (i == 1 || i == 6) {
                cout << "pa ";
            } else {
                cout << "__ " ;
            }
        }
        cout << " " << i + 1 << endl;
    }

    int sum = 0, k;
    cout << "\n\nEnter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> k;
        sum += k;
    }
    cout << "Sum = " << sum << endl;

    int prod = 1;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> k;
        prod *= k;
    }
    cout << "Prod = " << prod << endl;
    return 0;
}