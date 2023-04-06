#include <iostream>
#include "smart_arr.hpp"

int main()
{
	SmartArray arr1;
	arr1.push_back(13);
	arr1.push_back(20);
	arr1.push_back(20);
	arr1.push_back(10);
	print_arr(arr1);
	arr1.insert(2, 31);
	arr1.push_back(6);
	print_arr(arr1);
	arr1.pop_back();
	print_arr(arr1);
	std::cout << arr1[9] << std::endl;
	std::cout << arr1[5] << std::endl;
	return 0;
}
