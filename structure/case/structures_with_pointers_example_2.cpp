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
    int age;
};

int main()
{
    Student first;
    Student second;
    second.name = "Masha";
    second.age = 17;

    Student* ptr = &first;

    ptr->name = "Sasha";
    ptr->age = 18;

    cout<<ptr->name<<" "<<ptr->age<<endl;

    ptr = &second;

    cout<<ptr->name<<" "<<ptr->age<<endl;

    return 0;
}
