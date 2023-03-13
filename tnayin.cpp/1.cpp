/*   1. Calculate sum of the digits
Write a program which will input an integer number and will print the sum of the digits of the number. 
    E.g. Input 123 - Output 6 (which is 1 + 2 + 3)  */

#include <iostream>

int main ()
{
	int num ;
	int num1 = 0;
	std:: cout << " num = ";
	std:: cin >> num ;
	while (num != 0)
	{
		num1 += num % 10;
		num /= 10;
	}
	std:: cout << num1 << std::endl;
	return 0;
}

