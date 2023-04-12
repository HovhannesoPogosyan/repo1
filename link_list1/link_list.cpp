#include "link_list.hpp"

node::node(int data)
{
	this->data = data;
	next = nullptr;
}

link_list::link_list()
{
	first = nullptr;
	size = 0;
}

int link_list::get_size()
{
	/*int size = 0;
	node* n = first;
	while (n != nullp)
	{
		size++;
		n = n->next;
	}*/
	return size;
}

bool link_list::is_empty()
{
	if (first == nullptr)
	{
		return true;
	}
	return false;
}

void link_list::print()
{
	node* n = first;
	while (n != nullptr)
	{
		std::cout << n->data << " ";
		n = n->next;
	}
	std::cout << std::endl;
}


void link_list::push_back(int data)
{
	if (first == nullptr)
	{
		first = new node(data);
	}
	else
	{
		node* element = new node(data);
		node* n = first;
		while (n->next != nullptr)
		{
			n = n->next;
		}
		n->next = element;
	}
	size++;
}

int link_list::pop_back()
{
	assert(size > 0 && " No element to remove");
	if (size > 1)
	{
		node* n = first;
		node* n_prev;
		while (n->next != nullptr)
		{
			n_prev = n;
			n = n->next;
		}
		int d = n->data;
		delete n;
		n_prev->next = nullptr;
		size--;
		return d;
	}
	else if (size == 1)
	{
		delete first;
		first = nullptr;
		size--;
	}
	return 0;
}
