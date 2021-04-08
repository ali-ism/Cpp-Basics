#include <iostream>
#include "Robot.h"

using namespace std;

int main()
{
	Robot rbt;
	print_pos(rbt);
	cout << "Enter movement instruction: " << flush;
	string instruction;
	cin >> instruction;
	rbt.move(instruction);
	print_pos(rbt);
	return 0;
}
