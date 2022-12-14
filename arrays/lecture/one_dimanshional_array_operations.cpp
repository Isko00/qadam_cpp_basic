/**
 * Данная программа демонстрирует основные алгоритмы,
 * которые могут понадобиться при работе с одномерными (и не только) массивами.
 *
 */
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    //Создаем и заполняем с клавитуры тестовый массив.
    cout<<"Введите размер Вашего массива: ";
    int aSize;
    cin>>aSize;
    int a[100];

    cout << "Введите с клавиатуры " << aSize << " целых чисел: " << endl;
    for(int i = 0; i < aSize; i++) {
        cin>>a[i];
    }

    /*
     * 1-ый алгоритм. Нахождение максимального/минимального элемента массива.
     *
     * Для этого создаём отдельные переменные, которые будут представлять собой
     * масимальные/минимальный элемент массива.
     *
     * Предположим они называются maxElem и minElem соответственно.
     *
     * В обоих случаях приравниваем их к САМОМУ ПЕРВОМУ ЭЛЕМЕНТА МАССИВА.
     *
     * Далее проходимся по массиву.
     *
     * Сравниваем данные переменные с каждым элементом массива.
     *
     * При нахождении элемента БОЛЬШЕ нынешнего значение maxElem,
     * maxELem становится этим элементом.
     *
     * При нахождении элемента МЕНЬШЕ нынешнего значение minElem,
     * minELem становится этим элементом.
     *
     * В конце алгоритма переменна maxElem содержит максимальный элемент массива.
     * Переменная minElem содержит минимальный элемент массива.
     */

    // Создаём отдельные переменные для максимального/минимального элементов.
    // И приравниваем их к САМОМУ ПЕРВОМУ ЭЛЕМЕНТУ МАССИВА.
    // 1, 5, 3, 2, 4
    int max_elem = a[0];
    int min_elem = a[0];
    // Начинаем проходиться по массиву.
    for(int i = 0; i < aSize; i++){
        // Сравниваем данные переменные с каждым элементом массива.
        // При нахождении элемента БОЛЬШЕ нынешнего значение maxElem,
        if (a[i] > max_elem)
            //maxELem становится этим элементом.
            max_elem = a[i];

        //При нахождении элемента МЕНЬШЕ нынешнего значение minElem,
        if (a[i] < min_elem)
            //minELem становится этим элементом.
            min_elem = a[i];
    }

    cout<<"\nМаксимальный элемент массива: "<<max_elem<<endl;
    cout<<"Минимальный элемент массива: "<<min_elem<<endl;

    /*
     * 2-ой алгоритм. Нахождение индекса максимального/минимального элементов массива.
     * Данный алгоритм включает в себя предыдущий.
     *
     * Но есть пара дополнений.
     *
     * Надо создать отдельные переменные, которые будут представлять собой
     * ИНДЕКСЫ максимального/минмального элементов массива.
     *
     * Приравниваем их К 0.
     *
     * Далее выполняем те же операции, что и в предыдущем алгоритмя, НО
     * запоминаем НЕ ТОЛЬКО максимальные и минимальные элементы, НО И
     * их ИНДЕКСЫ.
     *
     * Смотрим пример ниже.
     */

    // Создаём отдельные переменные для максимального/минимального элементов.
    // И приравниваем их к САМОМУ ПЕРВОМУ ЭЛЕМЕНТУ МАССИВА.
    max_elem = a[0];
    min_elem = a[0];
    // Создаём отдельные переменные для ИНДЕКСОВ максимального/ минимального элементов.
    // И приравниваем их к 0.
    int max_index = 0;
    int min_index = 0;
    // 2 5 3 4 1
    // Начинаем проходиться по массиву.
    for(int i = 0; i < aSize; i++){
        // Сравниваем данные переменные с каждым элементом массива.
        // При нахождении элемента БОЛЬШЕ нынешнего значение maxElem,
        if(a[i] > max_elem){
            //maxELem становится этим элементом.
            max_elem = a[i];
            //maxIndex становится его индексом.
            max_index = i;
        }
        //При нахождении элемента МЕНЬШЕ нынешнего значение minElem,
        if(a[i] < min_elem){
            //minELem становится этим элементом.
            min_elem = a[i];
            //minIndex становится его индексом.
            min_index = i;
        }
    }

    cout<<"\nИндекс максимального элемента массива: "<<max_index<<endl;
    cout<<"Индекс минимального элемента массива : "<<min_index<<endl;

    /*
     * 3-ий алгоритм. Нахождение суммы и произведения всех элементов массива.
     * Для этого создаём отдельные переменные для суммы и для произведения.
     *
     * Предположим, что они называются sum и prod соответственно.
     *
     * Переменную, отвечающую за сумму ОБЯЗАТЕЛЬНО приравниваем к 0.
     * Переменную, отвечающую за произведение ОБЯЗАТЕЛЬНО приравниваем к 1.
     *
     * Далее проходимся по всему массиву и суммируем все элементы в переменную sum.
     * И перемножаем все элементы в переменную prod.
     */

    // Создаём отдельные переменные для суммы и произведения.
    // Приравниваем первую к 0, вторую к 1.
    int sum = 0;
    int prod = 1;
    // 1 2 3 4 5
    // Проходимся по массиву
    for(int i = 0; i < aSize; i++){
        // Суммируем все элементы в переменную sum.
        sum = sum + a[i];
        // Перемножаем все элементы в переменную prod.
        prod = prod * a[i];
    }

    cout<<"\nСумма всех элементов массива: "<<sum<<endl;
    cout<<"Произведение всех элементов массива: "<<prod<<"\n"<<endl;

    /*
     * 4-ий алгоритм. Алгоритм последовательного заполнения массива.
     *
     * Необходим тогда, когда неизвестно заранее, сколько элементов будет введено.
     *
     * Наприме задача, в которой требуется вводить числа и сохранять их в массиве
     * до тех пор, ПОКА пользователь не введёт, например, 0.
     *
     * Т.Е. Заранее неизвестно, СКОЛЬКО чисел введёт пользователь до тех пор, пока
     * встретится 0.
     *
     * Поэтому цикл for сдесь не подходит, ибо ему нужны чёткие границы. Начало и конец.
     * Т.е. чёткое число проходов.
     *
     * Поэтому будет использоваться цикл while.
     */

    // Создаём массив, размер которого задаётся с запасом, например 100.
    int arr[100];

    /*
     * Создаём переменную, которая будет отвечать за последовательное
     * следование по индексам массива.
     * То есть первый элемент будет помещён на 0-ой индекс, второй - на 1-ый,
     * 3-ий - на 2-ой и т.д.
     */
    int index = 0;

    // Объявляем переменную, которая будет служить пользовательским вводом.
    // И вводим её в первый раз.
    cout<<"\nВводите целые числа, сколько хотите."<<endl;
    cout<<"Введите 0, чтобы прекатить ввод. После чего нажмите Enter."<<endl;

    int user_input;

    // Запускаем цикл, который будет сохранять эту переменную в массив
    // и считывать её еще раз,
    // пока не встретится 0.

    while(true){
        cin >> user_input;
        if (user_input == 0)
            break;
        arr[index++] = user_input;
    }

    /*
     * После завершения этого цикла, переменная index как раз равна
     * количеству элементов, сохранённых в массив.
     *
     * Пользователь может ввести не 100 элементов, а, например, 12.
     * В таком случае, если пройтись по всему массиву, то он выдаст
     * 12 элементов, которые ввёл пользователь и 88 левых значений.
     *
     * Именно поэтому нам нужна переменная index.
     *
     * Например пользователь ввёл 7-ым элементом число "59".
     * Алгоритм засунул 59 в ячейку под номером 6 (потому что индексация начинается с 0).
     * И после этого сработал инкремент (++), и переменная index стала равно 7.
     *
     * После этого он вводит 0, цикл завершается и мы имеем на руках переменную index,
     * которая как раз таки равна количеству элементов, которые хранятся на данный момент в массиве.
     */

    // Выводим те числа, что сохранились в массиве.
    cout<<"\nВ массиве сейчас хранятся следующие элементы:"<<endl;
    for(int i = 0; i < index; i++)
        cout<<arr[i]<<" ";

    // Расскомментируйте следующую строку, если Вы работете в Visual Studio
    // system("pause");
}