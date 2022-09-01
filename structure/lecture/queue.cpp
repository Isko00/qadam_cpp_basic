#include <iostream>
#include <queue>

using namespace std;

int main() {
	// создаем объект класса очередь с названием my_queue
	queue<int> my_queue;
	// добавляем элемент в очередь с помощью метода push
	for (int i = 0; i < 5; i++) {
		my_queue.push(i);
	}
	for (int i = 0; i < 5; i++) {
		// получаем первый элемент в очереди с помощью метода front()
		cout << my_queue.front();
		// метод pop() удаляет первый элемент
		my_queue.pop();
	}
	
	return 0;
}