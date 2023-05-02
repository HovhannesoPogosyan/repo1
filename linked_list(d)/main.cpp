
#include "link_list.hpp"

int main()
{
	linked_List<int> list;
	list.print();
	list.push_front(14);
	list.push_front(15);
	list.print();
	list.push_back(12);
        list.print();
	list.bubble_sort();
	list.print();

        list.pop_front();
        list.print();
	list.pop_front();
	list.pop_front();
	list.pop_front();
	list.print();
	list.push_back(12);
	list.push_back(45);
        list.print();
	list.pop_back();
	 list.push_back(5);
	 list.push_back(4);
	 list.push_back(2);
	 list.push_back(3);

        list.print();
	list.reverse();
 	list.print();
 	list.insertion_sort();
 	list.print();


	return 0;
}
