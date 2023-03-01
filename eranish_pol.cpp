#include<iostream>

int main()
{
	int num;
	std:: cout <<" num (0 or trois chiffres):";
	std:: cin >> num;
	while (true)
	{
		if (num == 0)std::cout<< "End" << std::endl;
			break;
	}		
	if (num /100 == num % 10) std::cout << "num is a palindrome" << std::endl;
	else std::cout << "num is not a palindrome :" << std::endl; 	
	return 0;
}
