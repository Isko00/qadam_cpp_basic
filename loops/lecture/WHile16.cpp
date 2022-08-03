#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double S = 10;
    double P;

    while (true)
    {
        cout << "Enter P (0 < P < 50): ";
        cin >> P;

        if (P > 0 && P < 50)
            break;
    }

    int K = 1;
    int sum = 10;

    while (sum <= 200)
    {
        S = S + (S * P / 100);
        sum += S;
        K++;
    }

    cout << "Через " << K << " дней он пробежит " << sum << " км!" << endl;


    return 0;
}