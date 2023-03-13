#include <iostream>
#include <time.h>

void fnc(int num1);
int rnd();// patahakan erknish
int rnd1();// patahakan eranish
int rnd2();// patahakan qaranish
void fnc1(int num1);
void fnc2(int num1);

int main()

{
	std::cout << "level 1" << std::endl;
        fnc(rnd());
	std::cout << "level 2" << std::endl;
	fnc1(rnd1());
	std::cout << "level 3" << std::endl;
	fnc2(rnd2());


        return 0;
}

int rnd()
{
        srand(time(NULL));
        int num1 = rand() % 100 ;//patahakan tiv
        std:: cout << num1 << std::endl;
        return num1;
}

int rnd1()
{
        srand(time(NULL));
        int num1 = rand() % 1000 ;//patahakan tiv
        std:: cout << num1 << std::endl;
        return num1;
}

int rnd2()
{
        srand(time(NULL));
        int num1 = rand() % 10000 ;//patahakan tiv
        std:: cout << num1 << std::endl;
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
                        std::cout << " (a few 10 is large) (mi qani 10 mec e)" << std:: endl;
                }
                else if ( num <= num1 + 10 && num > num1)
                {
                        std::cout << "( is a few units larger)(mi qani miavor mec e)" <<std:: endl;
                }
                else if ( num < num1 - 10)
                {
                        std::cout << " (a few 10 is small) (mi qani 10 poqr e)" <<std:: endl;
                }
                 else if ( num >= num1 - 10 && num < num1)
                {
                        std::cout << " (is a few points smaller)(mi qani miavor poqr e)" <<std:: endl;
                }

                cnt++;
                std:: cout << "**=" ;
                std :: cin >> num ;

        }
        std::cout << "count= " << cnt << std:: endl;

}

void fnc1(int num1)

{
        int num ;//pntrvox tiv
        int cnt = 1;//qayleri tiv
        std:: cout <<"***=";
        std :: cin >> num ;

        while (num != num1){
                if (num > num1 + 100)
                {
                        std::cout <<"(several 100 is large) (mi qani 100 mec e)" << std:: endl;
                }
                else if (num > num1+10  &&  num < num1 + 99)
                {
                        std::cout << "(a few 10 is large) (mi qani 10 mec e)" << std:: endl;
                }
                else if ( num <= num1 + 10 && num > num1)
                {
                        std::cout << "  (is a few units larger)(mi qani miavor mec e)" <<std:: endl;
                }
                else if (num < num1 -100)
                {
                        std::cout <<"(a few 100 is small) (mi qani 100 poqr e) " << std:: endl;
                }
                 else if ( num >= num1 - 99 && num < num1 - 10)
                    {
	                  std::cout << " (a few 10 is small)(mi qani 10 poqr e)" <<std:: endl;
                }
                 else if ( num >= num1 - 10 && num < num1)
                {
                std::cout << "(is a few points smaller)(mi qani miavor poqr e)" <<std:: endl;
                }

                cnt++;
                              std:: cout <<"***=" << std::endl;
                std :: cin >> num ;

        }
         std:: cout <<"YOU  WIN" << std::endl;
        std::cout <<"count="<< cnt << std::endl;
}

void fnc2(int num1)
{
        int num ;//pntrvox tiv
        int cnt = 1;//qayleri tiv
        std:: cout <<"****=";
        std :: cin >> num ;
        while (num != num1){
                if (num > num1 + 1000)
                {
                        std::cout <<"(several 1000 is large) (mi qani 1000 mec e)" << std:: endl;
                }
                else if (num > num1+100  && num < num1 + 999)
                {
                        std::cout <<"(several 100 is large) (mi qani 100 mec e)" << std:: endl;
                }
                else if (num > num1+10  &&  num < num1 + 99)
                {
                        std::cout << "(a few 10 is large) (mi qani 10 mec e)" << std:: endl;
                }
                else if ( num <= num1 + 10 && num > num1)
                {
                        std::cout << " it's big(is a few units larger)(mi qani miavor mec e)" <<std:: endl;
                }
                else if (num < num1 -1000)
                {
                        std::cout <<"(a few 1000 is small) (mi qani 1000 poqr e) " << std:: endl;
                }
                else if ( num < num1 - 100  &&  num > num1 - 999)
                {
                        std::cout << " (a few 100 is small) (mi qani 100 poqr e)" <<std:: endl;
                }
                 else if ( num >= num1 - 99 && num < num1 - 10)
                {
                std::cout << " (a few 10 is small)(mi qani 10 poqr e)" <<std:: endl;
                }
                 else if ( num >= num1 - 10 && num < num1)
                {
                std::cout << "(is a few points smaller)(mi qani miavor poqr e)" <<std:: endl;
                }

                cnt++;
                              std:: cout <<"****=" << std::endl;
                std :: cin >> num ;

        }
         std:: cout <<"YOU  WIN" << std::endl;
        std::cout <<"count="<< cnt << std::endl;
}
                std::cout<<std::endl;
                                                                                       
