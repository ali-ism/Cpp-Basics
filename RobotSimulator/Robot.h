#pragma once
#include <string>

class Robot
{
private:
	int xpos = 0;
	int ypos = 0;
public:
	void move(const std::string& instr);
	int* getpos();
};

void print_pos(Robot rbt);