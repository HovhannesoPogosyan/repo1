#include "queue.hpp"

int main()
{
	queue queue;
	queue.enqueue(15);
	queue.print();
	queue.enqueue(22);
	assert(queue.get_size() == 2 && queue.Front() == 15);	
	queue.enqueue(30);
	queue.print();
	queue.Front() = 40;
	assert(queue.Front() == 40);
	queue.print();
	std::cout<<"size = "<<queue.get_size()<<std::endl;
	queue.enqueue(20);
	queue.enqueue(30);
	assert(queue.get_size() == 5 && queue.Front() == 40);	
	queue.dequeue();
	queue.print();

	int a = queue.dequeue();
	queue.print();

	assert(queue.get_size() == 3 && queue.Front() == 30 && a == 22);	
	queue.dequeue();
	queue.print();
	std::cout<<"size = "<<queue.get_size()<<std::endl;
	queue.dequeue();
	queue.dequeue();
	queue.print();
	std::cout<<"size = "<<queue.get_size()<<std::endl;
	assert(queue.get_size() == 0 && queue.isempty() == 1);	
	queue.dequeue();

}
