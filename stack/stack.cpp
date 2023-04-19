#include "stack.hpp"


//Structure of the Node
node::node(int data)
{
	this->data = data;
	link = nullptr;
}
stack::stack()
{
	top = nullptr;
	size = 0;
}

//Function to check if stack is empty or not
bool stack::isempty()
{
	if(top == nullptr)
		return true; 
 	else
 		return false;
}

//Function to insert an element in stack
void stack::push (int data)
{
	if (top == nullptr)
	{
		top = new node(data);
	}
	else
	{
	node* el = new node(data);
  	el->link = top;
  	top = el;
	}
	size++;
}

int stack::get_size()
{
        return size;
}

//Function to delete an element from the stack
int stack::pop()
{
	if ( isempty() )
  		std::cout<<"Stack is Empty"<<std::endl;
	else if (size == 1)
	{
		delete top;
		top = nullptr;
		size--;
	}
 	else
 	{
	        int d = top->data;
  		node* el = top;
  		top = top -> link;
  		delete(el);
		size--;
		return d;
 }
	return 0;
}

// Function to show the element at the top of the stack
int&  stack::Top()
{
	if ( isempty() )
	{
		std::cout<<"Stack is Empty"<<std::endl;
	}
	else
	{
  		return top->data;  //"Element at top is"
	}
}

// Function to Display the stack
void stack::print()
{
	if ( isempty() )
		std::cout<<"Stack is Empty"<<std::endl;
 	else
 	{
  		node *temp = top;
		while(temp != nullptr)
  		{   
			std::cout<<temp->data<<" ";
			temp = temp->link;
  		}
  			std::cout<<std::endl;
 	}
 }


//Destructor---- stack 
stack::~stack()
{
	node* n = top;
	node* n_link;
	while (n != nullptr)
	{
		n_link = n->link;
		delete n;
		size--;
		n = n_link;
	}
	assert(size == 0);
}

