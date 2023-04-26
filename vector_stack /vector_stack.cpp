#include "vector_stack.hpp"

////Doubles the power of an stack when it equals size
void stack::change_capacity()
{
        if (m_capacity == 0)
        {
                m_capacity++;
		m_stack = new int[m_capacity];
        }
        else if(m_capacity != 0)
        {
                m_capacity *= 2;
		stack_copy();
        }
}

//copy constructor
void stack::stack_copy()
{
	int* tmp_stack = new int[m_capacity];
	for (int i = 0; i < m_size; i++)
	{
		tmp_stack[i] = m_stack[i];
	}
	delete[] m_stack;
	m_stack = tmp_stack;
}


stack::stack()
        {
                m_size = 0;
                m_capacity = 1;
                m_stack = new int[m_size];

        }


//Return the index element of the stack
int stack::get_value(int index)
{
	assert(index < m_size && index >= 0); 
	return m_stack[index];
}

//Return size ---stack
int stack::get_size()
        {
                return m_size;
        }

bool stack::is_empty()
{
	if (m_size > 0)
	{
                return false;
        }
        return true;
}

int& stack::top()
{
	assert(m_size > 0 && "Segmentation fault. The stack is empty.");
	return m_stack[m_size - 1];
}

//adds an element to the stack
void stack::push(int value)

        {
                m_size++;
                if(m_capacity <= m_size)

                {
                        change_capacity();
                        m_stack[m_size-1] = value;
                }
                else
                {
                        m_stack[m_size-1] = value;
                }

        }

 //deletes the last element of an stack
void stack::pop()
        {
                if (m_size <= 0)
                {
                        std::cout << "there is no element in the array"<< std::endl;
                        exit(0);
                }
                else
                {
                m_size --;
                }

        }


//Printing an stack element
void print_stack(stack &stack)
{

	for (int i = 0; i < stack.get_size(); i++)
	{
		std::cout << stack.get_value(i) << " ";
	}
	std::cout << std::endl;
}



// deletes the dynamic stack
stack::~stack()
{
	delete[] m_stack;
}


