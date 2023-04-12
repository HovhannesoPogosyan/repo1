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

	int get_size();

	bool is_empty();

	void push_back(int data);

	void print();
	
	int pop_back();
	
};	

