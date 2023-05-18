#include <iostream>

class Control_Unit
{
public:
	int fetch();
	void decode(int instruction);
	void execute();
};

class Alu
{
public:
	int calculation(int a, int b, int op);
};

class Register
{
public:
	int registers[16]{};
	
	int read(int address);
	void write(int address, int data);
};

class Cpu
{
public:
	void load(int inst_list[], int size);
	void execut();
};

class Ram
{
public:
	int memory[128]{};
	int inst_cnt;
	int data_cnt;
	
	Ram();
	int read(int address);
	void write(int address, int data);
};

extern Control_Unit cu;
extern Alu alu;
extern Register reg;
extern Cpu cpu;
extern Ram ram;
