/* 6. Power of 2
Input a number and check if it is a power of 2.    */

#include <iostream>

int main()

{
	int num ;
	int num1 = 1;
	std:: cout << "num = " ;
	std:: cin >> num ;
	while (num1 < num)
	{
    		num1 = num1 * 2;
    	}
    	if (num1 == num)
    	{
    		std::cout << "(It is 2 degrees) (2-i astichan e)  "<<std::endl;
    	}
	else
	{
		std::cout << "(not 2 degrees) (2-i astichan che)"<<std::endl;
	}
    	return 0;

}
