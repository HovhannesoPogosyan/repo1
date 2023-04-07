#include <iostream>
#include <cassert>

class SmartArray
{
private:
	int* m_arr;
	int m_size;
	int m_capacity;
	//Doubles the power of an array when it equals size	
	void change_capacity();
public:
	SmartArray();
	SmartArray(int size);

	//Return size ---arr
	int get_size();

	//Return the index element of the array
	int get_value(int index);

	//adds an element to the array
	void push_back(int value);
	
	//deletes the last element of an array
	void pop_back();	

	//Inserting a new element into the array at the position "index" specified by "value".
	void insert(int index, int value);

        int operator[](int index);

	// deletes the dynamic array
	~SmartArray();
};

//Printing an array element
void print_arr(SmartArray &m_arr);
