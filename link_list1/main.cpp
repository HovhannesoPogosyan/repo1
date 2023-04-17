
#include "link_list.hpp"

int main()
{
	link_list list;
	list.print();
	list.push_back(14);
	list.push_back(15);
	list.push_back(25);
	list.push_back(32);
	std::cout << list.get_size() << std::endl;
	list.print();
	list.insert(1, 47);
	list.insert(3,11);
	list.print();

	list.pop_back();
	list.print();
	std::cout << list.get_size() << std::endl;

	link_list list1(list);
	list1.print();

	return 0;
}
