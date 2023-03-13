/*  12. Occurence of numbers 
Write a program which will allow user to input numbers in range 1-10 (as much as the user would like to, till -1 is entered). Calculate and print how many times each of the numbers have been entered.  */

#include <iostream>


int main()
{
	int num ;
	int arr[11] = {};
    
	while(num != -1)
    	{	
		std:: cout << " num (1 - 10) = ";
		std:: cin >> num ;
    		arr[num] += 1;
    	}
        for(int i = 1; i <= 10; i++)
        {
    	std::cout <<"  "<< i <<" to(ic) "<< arr[i] << " pcs(hat) "<< std::endl;
    	}
    
        return 0;

}

