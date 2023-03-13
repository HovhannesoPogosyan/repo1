/* 15. Տրված n բնական թվի համար արտածել ֆիբոնաչիի հաջոր-
դականության n-րդ անդամը:  */

#include <iostream>

int main ()
{
	int num1 =0, num2 = 1 , num , cnt = 0, num3 = 1 ;
	std:: cout << "fibonacci sequence the num-th member of the sequence.(Fibonachii hajordakanutyan  num--rd  andam@ )   num = ";
	std:: cin >> num ;
        std:: cout <<"Fibonacci sequence(Fibonachii hajordakanutyun) " << num1 <<", "<<num2<<", "<< num3 <<", ";
  	while (cnt != num-3)
        {
        	num1 = num2;
        	num2 = num3;
        	num3 = num1 +num2;
		std:: cout << num3 << ", ";
        	cnt++;
        }
	std::cout << std::endl;
	std:: cout << "fibonacci sequence the num-th member of the sequence.(Fibonachii hajordakanutyan  num--rd  andam@ ) =  " << num3 << std::endl;

  return 0;
}

