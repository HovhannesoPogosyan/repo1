#include<iostream>

int main()
{
	std::string str1 = "fgsdhg hfyfyy fytiiiii gfss";
	std::string str2 = "", max1 = "", min1 = "";
        for (int i = 0; i < str1.size() + 1 ;i++)
	{
		if (str1[i] != ' ' && i != str1.size()) str2 += str1[i];
		else if (str2 != "")
		{
			if (str2.size() > max1.size())
			{
				max1 = str2;
				if(min1.size() == 0)min1 = str2;
                        }
			else if (str2.size() < min1.size())min1 = str2;
		        str2 = "";
		}
	}
	std:: cout << "max = " << max1 <<"    "<< "min = " << min1 << std::endl;
        for (int i = 0; i < min1.size(); i++)
        {
                for (int j = 0; j < max1.size(); j++)
                {
                        if (min1[i] == max1[j]) std::cout << min1[i] << " ";
                        
                }
        }
        std::cout << std::endl;

	return 0;
}
