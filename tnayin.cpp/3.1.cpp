/*
 3.1 Input number N and print all prime numbers in the range 1-N
*/

#include <iostream>

int main ()
{

        int num ;
        std:: cout << "N = ";
        std:: cin >> num ;
	std:: cout << " (1 -- " << num << ") prime numbers" << std::endl << std:: endl;
        if (num < 1)
        {
                std::cout << num << "  is not a prime number" <<std::endl;
        }
        else
        {
		for(int j=2 ; j < num;j++)
		{
        		int b = 0;
                	for(int i = 2 ; i <= j;i++)
                	{
                        	if (j % i != 0)
                        	{
                                	b += 1;
                        	}
                	}	
                if (b ==(j-2))
                {
                	std::cout << "  " << j << " , " ;}
                }

        }
	std::cout<<std::endl;
        return 0;
	
}
