#include <iostream>

        int main()
{

        int num;
	int h= 0;//the rightmost prime number
	int x = 0;//the leftmost prime number
        std:: cout << "num = ";
        std:: cin >> num ;
	int num1 = num;
        if (num1 <= 2 )
        {
        	std::cout << " the leftmost prime number " << std::endl;
			x = 2;
        }
	else
		while (true)
        	{
                	int j = num1 - 1 ;
                	int b = 0;
                	for(int i = 2 ; i <= j/2;i++)
                	{
                  		if (j % i != 0)
                  		{
                       			b += 1;
                  		}
                	}
                	if (b == (j-2)/2)
                	{
                        std::cout << j << "  the leftmost prime number" <<std::endl;
				x = j; //the leftmost prime number :x
                                break;
                	}
                	num1--;
        	}
        if (num1 <= 0 )
        {
                num1 =0;
        }
        while (true)
        {
                int c = num1 + 2 ;
                int b = 0;
                for(int i = 2 ; i <= c/2;i++)
                {
                	if (c % i != 0)
                  	{
                       		b += 1;
                  	}
                }
                if (b == (c-2)/2)
		{
                        std::cout << c << "--the rightmost prime number  " <<std::endl;
				h = c; // the rightmost prime number: h 
                                break;
                }
                num1++;
        }
	if ((num - x)<(h - num))
	{
		std::cout << x << "-- Prime number closest to num  " <<std::endl;
        }
	else if((num - x) == (h - num))
	{
		std::cout << x <<" ; " << h <<"--Prime number closest to num  " <<std::endl;
	}
	
	else
	{
		std::cout << h << "--Prime number closest to num  " <<std::endl;
	}
        return 0;
}
