#include<iostream>
int main()
{
	int num, a;
	int sum = 0;
	std::cout << "num = ";
	std::cin >> num ;
	while (num > 0)
	{
		a = num % 10;
		sum += a;
		num -= a;
		if (a == 0) num = num / 10;
	}
        std::cout <<"sum of digits = "<< sum <<std::endl;	

}
