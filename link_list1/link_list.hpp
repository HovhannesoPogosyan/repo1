#include <iostream>
#include <cassert>

class node
{
public:
        int data;
        node* next;
	node(int data);
};


class link_list
{
private:
	node* first;
	int size;
public:
	link_list();
	//copy constructor
	link_list(const link_list& list_cop);
	
	//Return size ---list
	int get_size();
	bool is_empty();
	//Inserting a new element into the array at the position  specified by .
	void insert(int p, int data);
	
	//adds an element to the list
	void push_back(int data);
	
	//Printing an list element
	void print();
	
	//deletes the last element of an list
	int pop_back();


	~link_list();
};
