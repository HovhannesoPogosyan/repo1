/*
4.Palindrome numbers
Input a number and check if it is a palindrome number. Print the answer.
    E.g 1789871 is  a palindrome
    */

#include <iostream>

int main()

{
        int num ;
	int num1;
        int rev_num = 0;
        int b;// remainder,mnacord
        std:: cout << "num1 = ";
        std:: cin >> num1 ;
	num=num1;
        while (num != 0)
        {
                b = num % 10;
                rev_num = rev_num * 10 + b;
                num /= 10;
        }
	if (rev_num == num1 )
	{
        	std:: cout << num1 << " is  a palindrome " << std::endl;
	}
	else
	{
		std:: cout << num1 << " is not a  palindrome " << std::endl;
	}
        return 0;
}

