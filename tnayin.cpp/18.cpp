/*  18. n թվանշան ունեցող բնական թիվը կոչվում է Արմսթրոնգի
թիվ, եթե նրա թվանշանների n աստիճանների գումարը հա-
վասար է այդ թվին (օրինակ՝ 153=1^3 +5^3 +3^3 ): Արտածել բոլոր
երկնիշ, եռանիշ և քառանիշ Արմսթրոնգի թվերը:  */

#include <iostream>
#include <math.h>

int fnc1(int);


int main()
{
	for( int i = 10; i < 10000; i++)
	{
  		int num1 = 0;// tvi astichanneri gumar
  		int num = i;
  		while (num != 0)
  		{
  			int b = num % 10 ;// tvi verjin tvanshan@
    			num /= 10;
   			int a = pow(b, fnc1(i));
   			num1 = num1 + a ;
  		}
 		if(num1 == i)
		{
 			std::cout << num1 <<" = "<< i <<"  amctrung tiv (10---9999) " << std::endl;
 		}
 	}
	return 0;
}



int fnc1(int i)

{
  int cnt = 0;
  while (i != 0)
  {
        i /= 10;
        cnt ++;
  }
  return cnt; // tvi tvanshanneri  qanak@
}

