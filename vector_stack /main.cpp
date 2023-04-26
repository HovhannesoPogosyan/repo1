#include <iostream>
#include "vector_stack.hpp"

int main()
{
	stack stack1;
	stack1.push(13);
	stack1.push(20);
	stack1.pop();
	stack1.push(20);
	stack1.push(10);
	stack1.push(10);
	print_stack(stack1);
	stack1.pop();
	print_stack(stack1);
	return 0;
}
