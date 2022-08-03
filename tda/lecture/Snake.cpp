#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    // Вводим размер квадратной матрицы.
    cout<<"Введите размер квадратной матрицы: ";
    int aSize;
    cin>>aSize;

    // Создаём квадратную матрицу заданного размера.
    int a[100][100];

    // Заполняем квадратную матрицу элементами.
    /* cout<<"\nВведите "<<aSize*aSize<<" элементов:"<<endl;
    for(int i = 0; i < aSize; i++)
        for(int j = 0; j < aSize; j++)
            cin>>a[i][j]; */

    int counter = 1;
    for (int i = 0; i < aSize; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < aSize; j++)
                a[i][j] = counter++;
        } else {
            for (int j = aSize - 1; j >= 0; j--)
                a[i][j] = counter++;
        }

        cout << endl;

    }

    cout << "\nSnake:\n" << endl;
    for (int i = 0; i < aSize; i++)
    {
        for (int j = 0; j < aSize; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}