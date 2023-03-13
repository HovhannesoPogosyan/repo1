/*
 5. Concatenate numbers
Input 2 numbers and concatenate them together 
    E.g. for 35 and 47 the output number should be 3547
    */

#include <iostream>

int main ()
{
        int num1 , num2 , a ;
	std:: cout << "num1 = " ;
	std:: cin >> num1 ;
	std:: cout << "num2 = " ;
	std:: cin >> num2;

	while (num2 != 0)
	{
		a = num2 % 10 ;
		num1 = num1 *10 + a ;
	       	num2 /=10;
	}
        std:: cout << num1 << std::endl;
        return 0;
}

