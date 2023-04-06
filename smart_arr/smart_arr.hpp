#include <iostream>
#include <cassert>

class SmartArray
{
private:
	int* m_arr;
	int m_size;
	int m_capacity;
	
	void change_capacity();
public:
	SmartArray();
	SmartArray(int size);
		
	int get_size();	
	int get_valeue(int index);	
	void push_back(int valeue);
	void pop_back();	
	void insert(int index, int valeue);
        int operator[](int index);	
	~SmartArray();
};

void print_arr(SmartArray &m_arr);