/*7. Draw rectangle
Write a program which will input two integer - N and M. The program should "draw" a rectangle of NxM size using "*" and spaces.
    E.g. Input 6 4
    Output
    ******
    *    *
    *    *
    ******   */


#include <iostream>

int main()
{
        int side1;
        int side;
        std:: cout <<"row = ";
        std::cin >> side;
        std:: cout <<"column = ";
        std::cin >> side1;
        for (int i = 1; i <= side1; i++)
        {
                for (int j = 1; j <= side; j++)
                {
                        if (i == 1 || i == side1)
                                std::cout << "*";
                        else
                        {
                                if (j == 1 || j == side)
                                        std::cout << "*";
                                else
                                        std::cout << ' ';
                        }
                }
                std::cout << std::endl;
        }
        return 0;
}


