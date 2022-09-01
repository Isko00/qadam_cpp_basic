/**
*
* ������ ��������� ������������� ������ ������ �� �����������.
*
* ��������� ������������ ����� ������ (template) ���, ������� �������,
* ������ (blueprint) �����-�� �������� ��������.
*
* ��������:
* � ������ ������� ��������������� ��������� ��������.
* �.�. � ��� ���� ����� ������ ��� ���� ���������.
* � ���� ������� �� ����������, ��� ������� ������ ��������,
* ��� ���������� ������ ��������.
*
* � ������� �� ����� ������� (�������) ����� ������� ��� ���������� �������� (������� ���������).
*
**/
#include <iostream>
#include <string>
using namespace std;

/* ������� ��������� �������,
    � ������� �������� ����
    1) ���
    2) ������, � ������� �� ������
    3) ��� ��������
    4) ���/�� GPA
    */
struct Student{
    string name;
    string group;
    int year;
    double GPA;
};

int main()
{
    // ������ �� ������ ������� ������� ����������� ��������.
    // � ����� ������� ���������
    // ������� �������, �� ������� ������ ��������� Student
    // �������� ���� ������ first
    Student first;
    first.name = "Znahel"; // ����������� ��� �������������� �������
    first.group = "IS 137 R"; // ������ �������������� �������
    first.year = 1995; // ��� ��������
    first.GPA = 3.7; // GPA

    /* ��������� � ����������� ��������� ������� ���������� ��������� �������:
      *��� �������*.*��������* (�.�. ����� �����) */
    cout<<"Student's name: "<<first.name<<endl;
    cout<<"Student's group: "<<first.group<<endl;
    cout<<"Student's year of birth: "<<first.year<<endl;
    cout<<"Student's GPA: "<<first.GPA<<endl<<endl;

    //system("pause");
    return 0;
}
