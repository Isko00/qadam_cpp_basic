/**
*
* ������ ��������� ������������� ������ �������������
* ��������� �� �����������.
*
* ���������, ��� ������� - ���, ����� ������, "�������",
* ������� ��������� �� ���-�� ����� ��� �����.
*
* ����� �� �������� ������ ����� ���������, �� ����� ������ ������� �������,
* ������� ����� ��������� �� ���� ������ ����� ��� �����.
*
*/
#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    string group;
    int year;
    double GPA;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Student first; // �������� ������ ��������� Student

    // ������������ ��� ��������� ����� �������
    first.name = "Zhanel";
    first.group = "IS 137 R";
    first.year = 1995;
    first.GPA = 4.0;

    Student* ptr = &first; /* �������� ������� �� ������.
                            �������� ��������, ��� ��� ������ ������ �������� ����� ��,
                            ��� � ��� ������ ������ �������, �� ���� Student*.
                            ��� ��� ������� (ptr) - ��� �����, �� � ���� �� �������������
                            ����� ������ ������� (first) */

    /* ���� �� ����������� � ���������� ������� ����� ��� �������, �� �� ����������� �� �����
    (first.name), � ��������� (ptr->name) */
    cout<<"��� ��������: "<<ptr->name<<endl;
    cout<<"������ ��������: "<<ptr->group<<endl;
    cout<<"��� �������� ��������: "<<ptr->year<<endl;
    cout<<"GPA ��������: "<<ptr->GPA<<endl<<endl;

    //system("pause");
    return 0;
}

















