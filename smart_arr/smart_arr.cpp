#include "smart_arr.hpp"

void SmartArray::change_capacity()
{
        if (m_capacity == 0)
        {
                m_capacity++;
        }
        else if(m_capacity != 0)
        {
                m_capacity *= 2;
                int* newarr = new int[m_capacity];
                for (int i = 0; i < m_size; i++)
                {
                        newarr[i] = m_arr[i];
                }
                delete[] m_arr;
                m_arr = newarr;
        }
}


SmartArray::SmartArray()
        {
                m_size = 0;
                m_capacity = m_size;
                m_arr = new int[m_size];

        }

SmartArray::SmartArray(int size)
{
	m_size = size;
	m_capacity = size;
	m_arr = new int[m_size]{};
}


//Returns the element at position ‘index’
int SmartArray::get_value(int index)
{
	assert(index < m_size && index >= 0); 
	return m_arr[index];
}


int SmartArray::get_size()
        {
                return m_size;
        }


void SmartArray::push_back(int value)

        {
                m_size++;
                if(m_capacity <= m_size)

                {
                        change_capacity();
                        m_arr[m_size-1] = value;
                }
                else
                {
                        m_arr[m_size-1] = value;
                }

        }


void SmartArray::pop_back()
        {
                if (m_size <= 0)
                {
                        std::cout << "error 412"<< std::endl;
                        exit(0);
                }
                else
                {
                m_size --;
                }

        }


void SmartArray::insert(int index, int value)
        {
                assert(m_size >= index);
                m_size++;
                if (m_size > m_capacity)
                {
                        change_capacity();
                }
                for (int i = m_size - 1; i > index; i--)
                {
                        m_arr[i] = m_arr[i - 1];
                }
                m_arr[index-1] = value;
        }


void print_arr(SmartArray &m_arr)
{
	for (int i = 0; i < m_arr.get_size(); i++)
	{
		std::cout << m_arr.get_value(i) << " ";
	}
	std::cout << std::endl;
}


int SmartArray::operator[](int index)
{
	//assert(index >= 0 && index < m_size && "Segmentation fault");
	if (index < 0 || index >= m_size)
	{
		std::cout << "Segmentation fault" << std::endl;
		exit(1);
	}
	return m_arr[index];
}



SmartArray::~SmartArray()
{
	delete[] m_arr;
}


