#include <iostream>
#include <vector>

using namespace std;

void get_ASCII(char *pNum) {
	int result;
	result = *pNum;
	cout << result << " " << *pNum << endl;

	if (result >= 97 && result < 102) {
		get_ASCII(pNum + 1);
	}
}

struct My_struct {
	double number;

	My_struct(double new_num) {
		number = new_num;
		cout << "Number equals " << number << endl;
	}

	double get_number() {
		return number;
	}

	void set_number(double new_num) {
		number = new_num;
	}

	~My_struct() {
		number = 0;
		cout << "Number equals " << number << endl;		
	}
};

int main() {
	int num1;
	cin >> num1;
	cout << num1 % 10 << endl;

	char arr[6];
	for (char i = 'A'; i <= 'F'; i++) {
		arr[i - 'A'] = i;
	}

	cout << arr << endl;
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
	
	cout << endl;
	for (int i = 0; i < 6; i++) {
		cout << *(arr + i) << " ";
	}

	cout << endl;
	for (int i = 0; i < 6; i++) {
		int j = *(arr + i);
		cout << j << " ";

		j += 32;
		*(arr + i) = j;
	}

	cout << endl;
	for (int i = 0; i < 6; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;

	vector<int> my_vector;

	int my_num;
	cin >> my_num;

	while (my_num != 0) {
		my_vector.push_back(my_num);
		cin >> my_num;
	}
	
	int sum = 0, prod = 1;

	for (int i : my_vector) {
		sum += i;
		prod *= i;
	}

	cout << "sum [" << sum << "], prod [" << prod << "]" << endl;

	get_ASCII(arr);

	My_struct *my_object = new My_struct(11.5);

	cout << (*my_object).get_number() << endl;
	(*my_object).set_number(7.25);

	delete my_object;

	return 0;
}