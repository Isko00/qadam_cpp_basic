#include<iostream>
using namespace std;

int main() {
    int D, M;
    cout << "Enter day:";
    cin >> D;
    cout << "Enter mounth:";
    cin >> M;
    
    D = D - 1;
    if (D == 0) {
        M = M - 1;
        
        if (M == 0) { 
            M = 12; 
        }
        
        switch (M) {
            case 2: 
                D = 28;
            case 4: case 6: case 9: case 11: 
                D = 30;
            case 1: case 3:case 5: case 7: 
            case 8: case 10: case 12: 
                D = 31;
        }
    }
    cout << "Previuos date: " << D << "." << M;

    string formatter_D = (D > 9) ? "" : "0";
    string formatter_M = (M > 9) ? "" : "0";

    cout << endl << "Previuos date: " << formatter_D + to_string(D) << "." << 
            formatter_M + to_string(M);

    return 0;
}