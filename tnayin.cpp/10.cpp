/*  10. Guess a number
Write a program that calculates a random number 1 through 100. The program then asks the user to guess the number. If the user guesses too high or too low then the program should output "too high" or "too low" accordingly.
The program must let the user continue to guess until the user correctly guesses the number. Output how many guesses it took the user to correctly guess the right number.   */



#include <iostream>
#include <time.h>


void fnc(int num1);
int rnd();

int main()

{
        fnc(rnd());
        return 0;
}


int rnd()
{
        srand(time(NULL));
        int num1 = rand() % 100 ;//patahakan tiv(pntrvox tiv)
        return num1;

}

void fnc(int num1)
{
        int num ;// mutkagrvox tiv(vor@ pndrum enq)
        int cnt = 1;//qayleri qanak@
        std:: cout << "Guess the stored number ( gushakir pahvac tiv@ ) 1 - 100  " ;
        std :: cin >> num ;

        while (num != num1)
        {
                if (num > num1+10)
                {
                        std::cout << "(very high) (shat barcr)" << std:: endl;
                }
                else if ( num < num1 - 10)
                {
                        std::cout << "(very low) (shat cacr)" <<std:: endl;
                }

                cnt++;
                std:: cout << "Guess the stored number ( gushakir pahvac tiv@ ) 1 - 100  " ;
                std :: cin >> num ;

        }
        std::cout << "You guessed it(gushakeciq)  " << cnt <<"  from the step (qaylic ) "  << std:: endl;

}


