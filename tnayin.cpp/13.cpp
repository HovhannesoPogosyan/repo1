#include <iostream>


int main()

{ 
	int num	;
	std:: cout << "num (10_akan) = " << std::endl;
	std:: cin >> num ;
        int a = 1 << 30;
	for(int i = 0 ; i < 30; i++)
	{
        	a=a>>1;
        	if ( num&a )
        	{
                	std::cout<< 1 ;
         	}
         	else
         	{
         	std::cout<< 0;
         	}
    	}
	std::cout<<std::endl;
        std:: cout << "num (2_akan)  " << std::endl;
  return 0;
}

