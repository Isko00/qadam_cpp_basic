#include <iostream>
#include <stack>

using namespace std;

int main() {
	// создаем объект класса очередь с названием my_stack
	stack<char> my_stack;
	// добавляем элемент в очередь с помощью метода push
	for (char i = 'a'; i < 'g'; i++) {
		my_stack.push(i);
	}

	for (char i = 0; i < 6; i++) {
		// получаем первый элемент в очереди с помощью метода front()
		cout << my_stack.top();
		// метод pop() удаляет первый элемент
		my_stack.pop();
	}
	
	return 0;
}