

#include <iostream>
#include <string>

class human
{
public:
	std::string name;
	int age;
};

void sort(human arr[],int n);

int main()
{
	human h1;
	human h2;
	human h3;
	human h4;
	human h5;
	h1.name ="Jorj ";
	h1.age = 21;
	h2.name = "Roberto ";
	h2.age = 16;
	h3.name = "Marsela";
	h3.age = 32;
	h4.age = 25;
	h5.name = "Tina";
	h5.age = 36;
	human arr[5] = {h1,h2,h3,h4,h5};
	sort(arr,5);
	return 0;
}


void sort(human arr[],int num)

{
	human tmp;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}		
	for (int i = 0; i < num; i++)
		std::cout << arr[i].name<< " ";
	std::cout << std::endl;

}


