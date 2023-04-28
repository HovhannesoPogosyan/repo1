
#include "link_list.hpp"

int main()
{
	linked_List list;
	list.print();
	list.push_front(14);
	list.push_front(15);
	list.print();
	list.push_bask(12);
        list.print();
	list.pop_front();
        list.print();
	list.pop_front();
	list.pop_front();
	list.pop_front();
	list.print();
	list.push_bask(12);
	list.push_bask(45);
        list.print();
	list.pop_back();
        list.print();


	return 0;
}
