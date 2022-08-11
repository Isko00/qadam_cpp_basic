#include <iostream>

using namespace std;

bool my_numbers (int x) {
 	return x % 2 == 0;
}
 int main () {
 	if (my_numbers(124)) {
 		cout << " is chetnoe number" << endl;
	} else {
	 	cout << " is nevernoe number" << endl;
	}
 }