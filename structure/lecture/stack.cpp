#include <iostream>
#include <vector>

using namespace std;

int main() {
	// создаем объект класса очередь с названием my_stack
	vector<int> v;
	// ...

	for (int i = 0; i < 5; i++) {
		v.push_back(i);
	}

	// 0 1 2 3 4
	cout << v.size() << endl;
	// 5
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	// 0 1 2 3 4
	v.push_back(149);
	// 0 1 2 3 4 149
	v.size();
	// 6
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	// 0 1 2 3 4 5 149
	v.push_back(240);
	// 0 1 2 3 4 5 149 240

	vector<char> v2;
	v2.push_back('a');
	cout << v2[0];

	return 0;
}