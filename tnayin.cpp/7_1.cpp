/*  Enhance the program to input the character to be use for "drawing"
    E.g. Input 6 4 $
    
    $$$$$$
    $    $
    $    $
    $$$$$$     */


#include <iostream>

int main()
{       
	int side1;
	int side;
	char char1 ;
	std:: cout <<"row = ";
	std::cin >> side;
	std:: cout <<"column = ";
	std::cin >> side1;
	std:: cout <<"symbol = ";
	std:: cin >> char1 ;
	for (int i = 1; i <= side1; i++)
	{
		for (int j = 1; j <= side; j++)
		{
			if (i == 1 || i == side1)
	      			std::cout << char1;
			else
			{
				if (j == 1 || j == side)
					std::cout << char1;
				else
					std::cout << ' ';
			}
		}
		std::cout << std::endl;
	}
	return 0;
}

