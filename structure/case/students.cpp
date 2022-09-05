#include <iostream>
#include <vector>

using namespace std;

struct Student {
	char name[100];
	int name_lenght = 0;

	Student(char new_name[], int length) {
		for (int i = 0; i < length; i++) {
			name[i] = new_name[i];  
		}

		name_lenght = length;
	}
};

struct Class {
	vector<Student> students_list;

	void add_student(Student s) {
		students_list.push_back(s);
	}

	void print_names() {
		for (Student s : students_list) {
			cout << s.name << endl;
		}
	}
};

int main() {
	Class c;
	char name[6] = {'I', 's', 'l', 'a', 'm', '\0'};
	Student s = Student(name, 6);

	char name1[6] = {'R', 'u', 'f', 'a', 't', '\0'};
	Student s1 = Student(name1, 6);

	c.add_student(s);
	c.add_student(s1);
	
	c.print_names();

	return 0;
}