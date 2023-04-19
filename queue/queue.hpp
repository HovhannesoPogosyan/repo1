#include <iostream>
#include <cassert>

class node
{
public:
	int data; 
	node* link; 
	node(int data);
};

class queue
{
private:
	node* front;
        node* rear;	
	int size; 
public:
	//Default constructor----queue 
	queue();
	
	//Returns  queue --size
	int get_size();
	
	//function to show the element at front
	int& Front();
	
	//function to show the element at rear
	int& Rear();

	//Function to check if queue is empty or not	
	bool isempty();
	//function to enter elements in queue
	void enqueue(int data);

	//function to delete/remove element from queue
	int dequeue();

	//function to display queue
        void print();
	
	//Destructor---queue
	~queue();
};
