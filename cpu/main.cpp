#include "cpu.hpp"

int main()
{

	ram.memory[32] = 10;
        ram.memory[33] = 5;
        int list[] = {0b00000001'00100010'00100000'00100001,
                     0b00000010'00100011'00100000'00100001,
                     0b00000011'00100100'00100000'00100001,
                     0b00000100'00100101'00100000'00100001};
        int size = sizeof(list)/sizeof(list[0]);
        cpu.load(list, size);
        cpu.execut();
	return 0;
}
