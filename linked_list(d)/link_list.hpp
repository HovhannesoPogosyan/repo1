#include <iostream>
#include <cassert>

//template <typename T>
class node
{
public:

//	T data;
        int data;
        node* next;
	node* prev;
//	node(int data);
public:
	node(int data)
	{
		this->data=data;
		this->prev=this->next=nullptr;
	}
};

 //template <typename T>
class linked_List
{
private:
	node* first;
	node* last;
	int m_size;
public:
	linked_List()
	{
		first = last = nullptr;
		int m_size = 0;
	}
	//Return size ---list
	int get_size()
	{
                return m_size;
        }

	bool is_empty()
	{
               if (m_size == 0)
               {
                       return true;
               }
               return false;
        }
	 //Returns a reference to the first element in the List object.
/*        T& front()
        {
                return first->data;
        }

        //Returns a reference to the last element in the List object.
        T& back()
        {
                return back->data;
        }


	
*/	
	node* push_front(int data)
	{
		node* ptr = new node(data);
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

	node* push_bask(int data)
        {
                node* ptr = new node(data);
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
        	node* n = first;
        	while (n != nullptr)
        	{
                	std::cout << n->data << " ";
                	n = n->next;
        	}
        	std::cout << std::endl;
	}
	void pop_front()
	{
		if(first == nullptr)
		{	
			std::cout<<"  No element to remove (pop_front) "<<std::endl;
			return ;
		}

		node* ptr=first->next;
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
	//deletes the last element of an list
	void pop_back()
	  {
                if(last == nullptr)
                {
                        std::cout<<"  No element to remove (pop_front) "<<std::endl;
                        return ;
                }

                node* ptr=last->prev;
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


	~linked_List()
	{
        node* n = first;
        node* next;
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
