/*8. Draw triangle
Write a program which will input an integer number - N, and "draw" two types of right-angled triangle of height N.
    E.g Input 5
    Output
    *
    **
    ***
    ****
    *****
        *
       **
      ***
     ****
    *****
    */

#include <iostream>

void fnc_triangle_1(int);

int main()

{
	int num ;
	std::cout<< "num = ";
	std::cin >> num ;
	fnc_triangle_1(num);




/*	for (int i = 0 ; i < num; i++)
	{
                int j = 0;
		while (j <= i)
		{
			 std:: cout <<  "*" ;
			 j = j + 1;
		}
		std::cout<<std::endl;
	}      */
	return 0;
}



void fnc_triangle_1(int num)

{
	for (int i = 0 ; i < num; i++)
        {
                int j = 0;
                while (j <= i)
                {     
                         std:: cout <<  "*" ;
                         j = j + 1;
                }
                std::cout<<std::endl;
        }    

}
