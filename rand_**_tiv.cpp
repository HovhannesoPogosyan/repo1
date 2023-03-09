
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
        std:: cout << "**=" ;	
	std :: cin >> num ;

	while (num != num1)
	{
		if (num > num1+10)
		{
			std::cout << "is too big" << std:: endl;
		}
		else if ( num <= num1 + 10 && num > num1)
		{
			std::cout << " it's big" <<std:: endl;
		}
		else if ( num < num1 - 10)
                {
                        std::cout << " is too small" <<std:: endl;
                }
		 else if ( num >= num1 - 10 && num < num1)
                {
                        std::cout << " it's small" <<std:: endl;
		}

		cnt++;
		std:: cout << "**=" ;
		std :: cin >> num ;
		
	}
	std::cout << "count= " << cnt << std:: endl;

}
