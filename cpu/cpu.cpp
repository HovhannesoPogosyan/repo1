#include<iostream>
int inst = 0;
int instrukcia = 0;


class Alu
{

};

class Registor
{

};

class Cpu
{
public:
int cpu_load(int inst)
	{
		instrukcia = inst;
//		std::cout<<instrukcia<<std::endl;
        	return instrukcia;
	}
};

class Ram
{
public:
	int ram[800]={};
	Cpu cpu;
int ra()
	{
		int address = 0;
		ram[address] = cpu.cpu_load(instrukcia);
//		std::cout<<"---------------------"<<std::endl;
//		std::cout<<ram[0]<<std::endl;
		return ram[address];
	}

int read()
{
	 std::cout<<"+++++++++++++++++++++-"<<std::endl;
//		 ram[address]=ra();
//                std::cout<<ra()<<std::endl;

	return ra();
}

};

class Cantrol_Unit
{
public:
      Ram r;
        short instrukcia;
        short op;
        short r3;
        short r2;
        short r1;
public:

Cantrol_Unit()
{
        short instrukcia = 0;
        short op=0;
        short r3=0;
        short r2=0;
        short r1=0;


}

int fatch()
        {
                std::cout<<r.read()<<std::endl;
                return r.read();
        }


void Decode()
{
        short a = fatch();

        short  op = (a >> 12) & 0xF;
        std::cout<<"op = "<< op << std::endl;

        short  r3 = (a >> 8) & 0xF;
        std::cout<<"r3 = "<< r3 << std::endl;

        short  r2 = (a >> 4) & 0xF;
        std::cout<<"r2 = "<< r2 << std::endl;

        short  r1 = (a >> 0) & 0xF;
        std::cout<<"r1 = "<< r1 << std::endl;

}

};




int main()
{
	 int inst = 4587;

Cpu cpu;
cpu.cpu_load(inst);

Ram ra;
//ra.read();

Cantrol_Unit s;
s.Decode();

}
  
