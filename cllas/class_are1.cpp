#include<iostream>
#include <time.h>

class Array

{
        int* arr;
        int size;
public:

        Array()
        {
		std::cin>>size;
              //  this -> size = size;
                arr = new int[size];
		set();

        }
	 ~Array()
        {
                delete[]arr;
        }

        void set()
        {

                for (int i = 0; i < size; i++)
                {
                        arr[i] = rand() % 100;
                }
        }

        void push_back()

        {
		int valeue = 3;
                int *newarr = new int[size+1];
                for(int i = 0; i < size; i++ )
                {
                        newarr[i] = arr[i];
                }
                newarr[size] = valeue;
              
                arr[size+1] = valeue;
                size ++;      
      		delete[] arr;
                arr = newarr;

        }
        void pop_back()
        {
        size--;
        int *newarr = new int[size-1];
        for(int i = 0; i < size; i++ )
        {
                newarr[i] = arr[i];
        }
         delete[] arr;
	arr = newarr;

        }
        void print()
        {
                for (int i = 0; i < size; i++)
                {
                        std::cout << arr[i] << "  ";//<< std::endl;
                }
	std::cout<<std::endl;
        }



};


int main()

{
        Array arr1;
        arr1.print();
	arr1.pop_back();
	arr1.print();
	arr1.push_back();
	arr1.print();
        return 0;
}
