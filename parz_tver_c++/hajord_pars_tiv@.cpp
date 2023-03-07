#include <iostream>

	int main()
{
	int num;
        std:: cout << "num = ";
        std:: cin >> num ;
	if (num <= 0 )
	{
		num =1;
	}
	while (true)
	{
         	int j = num +1 ;
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
        		std::cout << j << "  is a prime number" <<std::endl;
		 		break;  
       		}
         	num++;
	}
        return 0;
}

