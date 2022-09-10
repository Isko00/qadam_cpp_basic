//task 1)
#include <iostream>
#include <vector>

using namespace std;

struct Student {
    vector<char> name;
    
    Student(vector<char> new_name) {
        for (int i = 0; i < new_name.size(); i++) {
            name[i] = new_name[i];
        }
    }
};

struct Class {
    vector<Student> students_list;

    // 1 2 3 4
    // v.push_back(17);
    // 1 2 3 4 17

    void add_student(Student my_student) {
        students_list.push_back(my_student);
    }
    
    void print_student_names () {
        for (int i = 0; i < student_list.size(); i++) {
            cout << student_list[i] << endl;
        }
    }
};

int main () {
    Class my_class;
    char name [9] = {'M', 'e', 'i', 'r', 'z', 'h', 'a', 'n', '\0'}
    student a = student name[9];
    char name[8] = {'K', 'u', 'a', 'n', 'y', 's', 'h' '\0'};
    Student b = Student(name[8]);

    c.add_student(a);
    c.add_student(b);
    
    c.print_names();

    return 0;
}



/*Если честно, задачки какие-то безполезные со стороны функционала. И проверив прикрепленое решение я в этом ещё больше убедился. И что мои, что ваши решения не могут быть проверянными компилятром.
Да и в целом они были сделаны для ещё лучшего ознакомлениия с структурами и разными методами. Но в целом, было интересно.

                                                                                                                                С наилучшими пожиланиями, Meirzhan :3