#include <iostream>
#include "Robot.h"

void Robot::move(const std::string& instr)
{
	for (int i = 0; i < instr.length(); i++)
	{
		if (instr[i] == 'r' || instr[i] == 'R')
			ypos++;
		else if (instr[i] == 'a' || instr[i] == 'A')
			xpos++;
		else if (instr[i] == 'l' || instr[i] == 'L')
			ypos--;
	}
}

int* Robot::getpos()
{
	int pos[2];
	pos[0] = xpos;
	pos[1] = ypos;
	return pos;
}

void print_pos(Robot rbt)
{
	int* ptr = rbt.getpos();
	std::cout << "Position: x = " << *ptr << " and y = " << *(ptr + 1) << std::endl;
}