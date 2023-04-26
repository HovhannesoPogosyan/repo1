#include <iostream>
#include <cassert>

class node
{
public:
	int data; 
	node* link; 
	node(int data);
};

class stack
{
private:
	node* top; 
	int size; 
public:
	//Default constructor----Stack 
	stack();
	
	//Returns  Stack --size
	int get_size();

	// Function to show the element at the top of the stack
	int& Top();
	
	//Function to check if stack is empty or not
	bool isempty();

	//Function to insert an element in stack
	void push(int data);

	//Function to delete an element from the stack
	int pop();

	// Function to Display the stack
        void print();
	
	//Destructor---Stack
	~stack();
};
