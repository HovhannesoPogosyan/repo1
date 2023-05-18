#include "cpu.hpp"

Control_Unit cu;
Alu alu;
Register reg;
Cpu cpu;
Ram ram;

Ram::Ram()
{
        inst_cnt = 0;
        data_cnt = 32;
}

int Ram::read(int address)
	{
 		return memory[address];
	};
void Ram::write(int address, int data)
	{
		memory[address] = data;
	};

int Register::read(int address)
	{
        	return registers[address];
	};

void Register::write(int address, int data)
	{
        	registers[address] = data;
	};

int Alu::calculation(int a, int b, int op)
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
};




int Control_Unit::fetch()
        {
                int instruction = ram.read(reg.registers[0]);
                reg.registers[0]++;
                return instruction;
        };

void Control_Unit::decode(int instruction)
{
        reg.write(1, ((instruction >> 24) & 0xff));
        reg.write(2, ((instruction >> 16) & 0xff));
        reg.write(3, ((instruction >> 8) &0xff));
        reg.write(4, (instruction & 0xff));
};

void Control_Unit::execute()
{
        reg.write(5, ram.read(reg.read(3)));
        reg.write(6, ram.read(reg.read(4)));
        ram.write(reg.read(2), alu.calculation(reg.read(5), reg.read(6), reg.read(1)));
};

void Cpu::load(int inst_list[], int size)
	{
        	for (int i = 0; i < size && i < 34; i++)
        		{
                		ram.write(i, inst_list[i]);
                		ram.inst_cnt++;
        		}
	};
void Cpu::execut()
	{
        	for (int i = 0; i < ram.inst_cnt; i++)
        			
		{
                	cu.decode(cu.fetch());
                	cu.execute();
        	}
	};
