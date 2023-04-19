#include "stack.hpp"

int main()
{
	stack stack;
	stack.push(15);
	stack.print();
	stack.push(22);
	assert(stack.get_size() == 2 && stack.Top() == 22);	
	stack.push(30);
	stack.print();
	stack.Top() = 40;
	assert(stack.Top() == 40);
	stack.print();
	std::cout<<"size = "<<stack.get_size()<<std::endl;
	stack.push(20);
	stack.push(30);
	assert(stack.get_size() == 5 && stack.Top() == 30);	
	stack.pop();
	stack.print();

	int a = stack.pop();
	 stack.print();

	assert(stack.get_size() == 3 && stack.Top() == 40 && a == 20);	
	stack.pop();
	stack.print();
	std::cout<<"size = "<<stack.get_size()<<std::endl;
	stack.pop();
	stack.pop();
	stack.print();
	std::cout<<"size = "<<stack.get_size()<<std::endl;
	assert(stack.get_size() == 0 && stack.isempty() == 1);	
	stack.pop();

}
