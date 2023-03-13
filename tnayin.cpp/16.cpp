/*  16. Արտածել տրված բնական թիվը՝ շրջելով այն և նրա ամեն մի
թվանշանից հետո ավելացնելով 0: Օրինակ՝ 125-ի դեպքում
պետք է արտածել 502010:  */


#include <iostream>

int main()

{
        int num ;
        long rev_num = 0;
        int b;// remainder,mnacord
        std:: cout << "num = ";
        std:: cin >> num ;
        while (num != 0)
        {
                b = num % 10;
                rev_num = rev_num * 10 + b;
                num /= 10;
		rev_num = rev_num *10;
        }
        std:: cout <<"num1 = "<< rev_num << std::endl;
        return 0;
}                                                      
