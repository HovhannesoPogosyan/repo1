#include<iostream>
#include<cmath>
int main()
{
	float a, b, c, D, x, x1, x2;
	std::cout<< "a(x*x)+b*x+c=0  :" <<std::endl;
	std::cout<< "a=";	
	std::cin >> a ;
	std::cout<< "b=";
        std::cin >> b ;
	std::cout<< "c=";  
        std::cin >> c ;
	D = b*b - 4 * a * c;
	if (D < 0) std:: cout << "has no solution" <<std::endl;
	else if (D == 0) {
		x = -b / 2 * a;
		std::cout<<"x = "<< x <<std::endl;
	}
       else {
     	x1 = (-b + sqrt(D)) / 2 * a;
        std::cout<< "x1="<< x1  <<std::endl;
	x2 = (-b - sqrt(D)) / 2 * a;
        std::cout<< "x2="<< x2  <<std::endl;

        }

	return 0;
}
