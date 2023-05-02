#include <iostream>
#include <cassert>

template <typename T>
class node
{
public:

	T data;
//        int data;
        node<T>* next;
	node<T>* prev;
//	node(int data);
public:
	node(T data)
	{
		this->data=data;
		this->prev=this->next=nullptr;
	}
};

template <typename T>
class linked_List
{
private:
	node<T>* first;
	node<T>* last;
	int m_size;
public:
	linked_List()
	{
		first = last = nullptr;
		int m_size = 0;
	}
	
	//Sorts the elements of the List object in ascending order using the bubble sort method.
	void bubble_sort()
	{
		T tmp;
		node<T>* ptr;
		for(int i = 0; i < m_size-1; i++)
		{
			ptr = first;
			for(int j = 0; j < m_size - i - 1; j++)
			{
				if(ptr->data > ptr->next->data)
				{
					tmp = ptr->data;
					ptr->data=ptr->next->data;
					ptr->next->data=tmp;
				}
				ptr=ptr->next;
			}
		}
	}
	//Sorts the elements of the List object in ascending order using the insertion sort method.
	void insertion_sort()
     	{
    		node<T>* ptr1 = first->next;
                node<T>* ptr2;
                T tmp;
                for (int i = 1; i < m_size; i++)
                {
                        ptr2 = ptr1;
                        while (ptr2->prev)
                        {
                                if (ptr2->data < ptr2->prev->data)
                                {
					   tmp = ptr2->data;
                                        ptr2->data=ptr2->prev->data;
                                        ptr2->prev->data=tmp;

                                }
                                ptr2 = ptr2->prev;
                        }
                        ptr1 = ptr1->next;
                }
	}
		

	//Returns the number of items in the list.
	int get_size()
	{
                return m_size;
        }

	//Returns a bool value, ie whether its size = 0.
	bool is_empty()
	{
               if (m_size == 0)
               {
                       return true;
               }
               return false;
        }
	 //Returns a reference to the first element in the List object.
        T& front()
        {
                return first->data;
        }

        //Returns a reference to the last element in the List object.
        T& back()
        {
                return back->data;
        }


	
	//adds an element to the list from the beginning
	node<T>* push_front(T data)
	{
		node<T>* ptr = new node<T>(data);
		ptr->next=first;
		if (first != nullptr)
		{
			first->prev=ptr;
		}
		if (last == nullptr)
		{
			last = ptr;
		}
		first = ptr;
		m_size++;
		return ptr;
	}
	
	//adds an element to the list from the end
	node<T>* push_back(T data)
        {
                node<T>* ptr = new node<T>(data);
                ptr->prev=last;
                if (last != nullptr)
                {
                        last->next=ptr;
                }
                if (first == nullptr)
                {
                        first = ptr;
                }
                last = ptr;
                m_size++;
                return ptr;
        }
	
	//Printing an list element
	void print()
	{
        	node<T>* n = first;
        	while (n != nullptr)
        	{
                	std::cout << n->data << " ";
                	n = n->next;
        	}
        	std::cout << std::endl;
	}

	//deletes an element in the list from the beginning
	void pop_front()
	{
		if(first == nullptr)
		{	
			std::cout<<"  No element to remove (pop_front) "<<std::endl;
			return ;
		}

		node<T>* ptr=first->next;
		if(ptr != nullptr)
		{
			ptr->prev=nullptr;
		}
		else
		{
			last = nullptr;
		}
		delete first;
		first = ptr;
		m_size--;
	}	
	//deletes an element from the end in the list
	void pop_back()
	  {
                if(last == nullptr)
                {
                        std::cout<<"  No element to remove (pop_front) "<<std::endl;
                        return ;
                }

                node<T>* ptr=last->prev;
                if(ptr != nullptr)
                {
                        ptr->next=nullptr;
                }
                else
                {
                        first = nullptr;
                }
                delete last;
                last = ptr;
                m_size--;
        }

	
	//Reverses the order of the elements in the List object.

	void reverse()
	{
		T tmp;
		node<T>* n1 = first;
		node<T>* n2 = last;
		for (int i = 0; i < m_size / 2; i++)
		{
			tmp = n1->data;
			n1->data = n2->data;
			n2->data = tmp;
			n1 = n1->next;
			n2 = n2->prev;
		}
	}

	//Destroys a List object with all its elements.
	~linked_List()
	{
        node<T>* n = first;
        node<T>* next;
        while (n != nullptr)
        {
                next = n->next;
                delete n;
                m_size--;
                n = next;
        }
        assert(m_size == 0);
	}

};



