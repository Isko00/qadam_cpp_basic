#include <iostream>
using namespace std;

int main()
{
    // Код для вывода двумерной матрицы чисел
    cout << "Format is 'i.j': " << endl;
    // Внешний цикл for повторяется 8 раз, шаг 1, 
    //     в данном примере отвечает за строки (вертикально)
    for (int i = 0; i < 8; i++)
    {   
        // Вложенный цикл for повторяется 8 раз, шаг 1, 
        //     в данном примере отвечает за столбцы (горизонтально)
        for (int j = 0; j < 8; j++)
        {   
            // Вывод переменных "i" и "j", для отслеживания их изменений
            cout << i << "." << j << " ";
        }
        // Перенос строки во внешнем цикле, 
        //    именно по-этому в данном примере внешний цикл отвечает за столбцы
        cout << endl;
    }

    // Код для вывода чисел в форме треугольника
    cout << endl << "Triangle: " << endl;
    for (int i = 0; i < 8; i++)
    {   
        for (int j = 0; j < 8; j++)
        {   
            /* Условие основанное на значениях переменных "i" и "j"
             * будут выведены лишь значения где:
             * i меньше равно j
             */
            if (i <= j) {
                cout << i << "." << j << " ";
            // Остальные значения будут заменены на пробелы
            } else {
                cout << "___ ";
            }
        }
        cout << endl;
    }

    // Код для вывода чисел в форме прямоугольника
    cout << endl << "Rectangle: " << endl;
    for (int i = 0; i < 8; i++)
    {   
        for (int j = 0; j < 8; j++)
        {   
            /* Условие основанное на значениях переменных "i" и "j"
             * будут выведены лишь значения где:
             * i равно 0 или i равно 7 или j равно 0 или j равно 7
             */
            if (i == 0 || i == 7 || j == 0 || j == 7) {
                cout << i << "." << j << " ";
            // Остальные значения будут заменены на пробелы
            } else {
                cout << "___ ";
            }
        }
        cout << endl;
    }

    /* Код, который выводит в консоль модель шахматной доски
     * однако расположение фигур на этой доске будет неверным
     */
    cout << endl << "Chess board: " << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 8; j++) {
            /* Условие привязанное к значению переменной i
             * данное условие служит для вывода нумерации на нижнем крае доски
             */
            if (i == 8) {
                cout << " " << j << " ";
            // Условие для вывода названий фигур кроме пешек, 
            //     привязанное к переменной "i"
            } else if (i == 3 || i == 4) {
                // Switch case структура для вывода названий фигур 
                //     кроме пешек, привязанное к переменной "j"
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
            // Условие для вывода пешек, привязанное к переменной "i"
            //     в горизонтальной плоскости ограничений нет                
            } else if (i == 2 || i == 5) {
                cout << "pa ";
            // Все не занятые клетки будут оставаться пробелами
            } else {
                cout << "__ " ;
            }
        }
        // Вывод нумерации по левому краю доски
        cout << " " << i;
        // Перенос строки во внешнем цикле
        cout << endl;
    }
    return 0;
}