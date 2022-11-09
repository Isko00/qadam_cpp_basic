#include <iostream>

using namespace std;

int main() {
	int a = 3;
	//      3    2     3     3     2			
	cout << a + --a + ++a + a-- + a++ << endl;
	
	return 0;
}