#include <iostream>
#include <cassert>

class stack
{
private:
	int* m_stack;
	int m_size;
	int m_capacity;
	//Doubles the power of an stack when it equals size	
	void change_capacity();
	//copy constructor
	void stack_copy();
public:
	stack();

	//Return size ---stack
	int get_size();

	//Return the index element of the stack
	int get_value(int index);

	int& top();

	bool is_empty();

	//adds an element to the stack
	void push(int value);
	
	//deletes the last element of an stack
	void pop();	


	// deletes the dynamic stack
	~stack();
};

//Printing an stack element
void print_stack(stack &m_stack);
