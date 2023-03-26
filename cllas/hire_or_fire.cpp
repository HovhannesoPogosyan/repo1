#include <iostream>

class Human
{
	public:
	std::string name;
	std::string surname;
	int age;
	Human()
	{
		name = "";
		surname = "";
		age = 10;
	}	
	Human(std::string name, std::string surname, int age)
        {
               this->name = name;
               this->surname = surname;
               this->age = age;
        }

};

class Employee:public Human
{
	public:
	std::string company;
	int salary;
	int experience;
	Employee(std::string name, std::string surname, int age, std::string company, int salary, int experience): Human(name, surname, age)
	{
		this->company = company;
		this->salary = salary;
		this->experience = experience;
	}	

	Employee()	
	{
		company = "";
		salary = 0;
		experience = 0;
	}

};

class staff :public Employee
{
	public:
		int level;
		std::string profession;
		staff(std::string name, std::string surname, int age, std::string company, int salary, int experience, int level, std::string profession): Employee (name, surname, age, company, salary, experience)
		 {
                        this->level = level;
                        this-> profession = profession;
                }

		staff()
		{
			level = 0;
			profession = "";
		}
};



class Manager :public Employee
{
	public:
		 staff arr[5];
		 staff Empti;

	Manager(std::string name, std::string surname, int age, std::string company, int salary, int experience): Employee (name, surname, age, company, salary, experience)
	{}
	void hire(staff x)
	
	{
		for(int i = 0; i < 5; i++)
		{
			if( arr[i].name == x.name)
                        {
                                break;
                        }

			if( arr[i].name != x.name && arr[i].name == "")
			{	
		     		arr[i] = x;
				break;
			}
		}
	}
	void fire(staff x)
	{
		for(int i = 0; i < 5; i++)
                {
                        if( arr[i].name == x.name)
                        {
                                arr[i] = Empti;
                                break;
                        }
                }
	
	}
	void print()
	{
		for(int i = 0; i < 5 ; i++)
		{
			std::cout << arr[i].name << std::endl;
		}
	}

};

int main()

{
	std::string name;
	std::string hire_or_fire;
	staff Hovo("Hovo", "Pogoshyan",37, "School",7,160000, 1, "matematic" );
	staff Valod("Valod", "Piloyan", 30,"office", 5, 100000, 7, "journalist");
	staff Laura("Laura", "Mikayelyan", 29, "School", 4, 140000, 5, "linguict");
	staff Ashot("Ashot", "Gulashyan", 26, "Hospital", 2, 243124, 3," doctor");
	staff Dianna("Dianna", "Torosyan", 30, "office", 4, 148756, 5, "economist");
	Manager Karen(" Karen"," Xachatryan", 58, "School", 4 , 19635);

        while (name != "stop")
	{
		std:: cout << "hire_or_fire ? " << std::endl;
		std:: cin >> hire_or_fire;
		std:: cout << "Hovo , Valod, Laura, Ashot, Dianna ???" << std::endl;
		std:: cout << " to end, write -stop "<<std::endl;
		std:: cin >> name;
		if(hire_or_fire == "hire")
		{
        		if( name == "Hovo")
			{
				Karen.hire(Hovo);
				std::cout<<std::endl;
				Karen.print();
			}
			else if( name == "Valod")
        		{
        	        	Karen.hire(Valod);
				std::cout<<std::endl;
        	        	Karen.print();
			}
			else if( name == "Laura")
        	        {
        	                Karen.hire(Laura);
        	                std::cout<<std::endl;
        	                Karen.print();
        	        }
			else if( name == "Ashot")
        	        {
        	                Karen.hire(Ashot);
        	                std::cout<<std::endl;
        	                Karen.print();
        	        }
			 else if( name == "Dianna")
        	        {
        	                Karen.hire(Dianna);
        	                std::cout<<std::endl;
        	                Karen.print();
        	        }

		}
		else if (hire_or_fire == "fire")
		{
			if( name == "Hovo")
                        {
                                Karen.fire(Hovo);
                                std::cout<<std::endl;
                                Karen.print();
                        }
                        else if( name == "Valod")
                        {
                                Karen.fire(Valod);
                                std::cout<<std::endl;
                                Karen.print();
                        }
                        else if( name == "Laura")
                        {
                                Karen.fire(Laura);
                                std::cout<<std::endl;
                                Karen.print();
                        }
                        else if( name == "Ashot")
                        {
                                Karen.fire(Ashot);
                                std::cout<<std::endl;
                                Karen.print();
                        }
                         else if( name == "Dianna")
                        {
                                Karen.fire(Dianna);
                                std::cout<<std::endl;
                                Karen.print();
                        }

		}
	}
	return 0;
}

