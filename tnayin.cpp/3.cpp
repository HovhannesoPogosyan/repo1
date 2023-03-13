/*
 3. Prime numbers
Input a number and check if it is a prime number. Print the answer.
*/

#include <iostream>

        int main()
{
        int num;
        int b = 0;
        std:: cout << "num = ";
        std:: cin >> num ;
        if (num < 1)
        {
                std::cout << num << "  is not a prime number" <<std::endl;
        }
        else
        {
                for(int i = 2 ; i <= num;i++)
                {
                        if (num % i != 0)
                        {
                                b += 1;
                        }
                }
                if (b ==(num-2))
                {
                                         std::cout << num << "  is a prime number" <<std::endl;
                }
                else
                {
                        std::cout << num << "  is not a prime number" <<std::endl;
                }
        }
        return 0;
}



