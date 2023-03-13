/*
 2. Inverse the number
Write a program which will input an integer number and calculate the inverse of the number. Print the output.
    E.g. Input 163 - Output 361
 */

#include <iostream>

int main()

{
	int num ;
	int rev_num = 0;
	int b;// remainder,mnacord
	std:: cout << "num = ";
	std:: cin >> num ;
	while (num != 0)
	{
		b = num % 10;
		rev_num = rev_num * 10 + b;
		num /= 10;
	}
	std:: cout <<"rev_num = "<< rev_num << std::endl;
	return 0;
}
