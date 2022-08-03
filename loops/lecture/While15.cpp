#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double S = 1000;
    double P;

    while (true)
    {
        cout << "Enter P (0 < P < 25): ";
        cin >> P;

        if (P > 0 && P < 25)
            break;
    }

    int K = 0;

    while (S <= 1000)
    {
        S = S + (S * P / 100);
        K++;
    }

    cout << "„ерез " << K << " мес€цев размер вклада будет равен " << S << " рублей!" << endl;


    return 0;
}