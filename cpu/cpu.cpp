#include<iostream>

class Ram
{
public:
        int memory[128]{};
        int inst_cnt;
        int data_cnt;

        Ram()
		{
			memory[32] = 10;
			memory[33] = 5;
        		inst_cnt = 0;
        		data_cnt = 32;
		}

        int read(int address)
		{
        		return memory[address];
		}

        void write(int address, int data)
		{

        		memory[address] = data;
			// std::cout<<data<<std::endl;
		}

};




class Register
{
public:
        int registers[16]{};

        int read(int address)
		{
        		return registers[address];
		}

        void write(int address, int data)
		{
        		registers[address] = data;
		}

};

class Alu
{
public:
int calculation(int a, int b, int op)
{
        switch(op)
        {
                case 1:
                        return a + b;
                case 2:
                        return a - b;
                case 3:
                        return a * b;
                case 4:
                        return a & b;
        }
        return 0;
}
};


class Cantrol_Unit
{
public:
        Ram ram;
	Register reg;
	Alu alu;
int fetch()
        {
                int instruction = ram.read(reg.registers[0]);
                reg.registers[0]++;
                return instruction;
        }

void decode(int instruction)
{
        reg.write(1, ((instruction >> 24) & 0xff));
        reg.write(2, ((instruction >> 16) & 0xff));
        reg.write(3, ((instruction >> 8) &0xff));
        reg.write(4, (instruction & 0xff));
}

void execute()
{
        reg.write(5, ram.read(reg.read(3)));
        reg.write(6, ram.read(reg.read(4)));
        ram.write(reg.read(2), alu.calculation(reg.read(5), reg.read(6), reg.read(1)));
}


};

class Cpu
{
	Ram ram;
	Cantrol_Unit cu;
public:
        void load(int inst_list[], int size)
		{
        		for (int i = 0; i < size && i < 34; i++)
        			{
                			ram.write(i, inst_list[i]);
                			ram.inst_cnt++;
        			}

		}
	void execut()
		{
        		for (int i = 0; i < ram.inst_cnt; i++)
        			{
                			cu.decode(cu.fetch());
                			cu.execute();
	
        			}
			  //  shows the memory content
			 //      std::cout<< ram.memory[34]<<std::endl;
			 for (int i = 0; i < 128; i++)
			 {
      			 std::cout<< ram.memory[i]<<std::endl;
			 }
		}

};


int main()
{
	Ram ram;
	Cpu cpu;
	Cantrol_Unit cu;
       // ram.memory[32] = 10;
       // ram.memory[33] = 5;
        int list[] = {0b00000001'00100010'00100000'00100001,
                     0b00000010'00100011'00100000'00100001,
                     0b00000011'00100100'00100000'00100001,
                     0b00000100'00100101'00100000'00100001,};
        int size = sizeof(list)/sizeof(list[0]);
        cpu.load(list, size);
	cpu.execut();
        return 0;
}

