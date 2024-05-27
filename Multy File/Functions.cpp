#include "Functions.h"

extern int _A;



void say_hi() {
	std::cout << "Hello World!\n";
	std::cout << _A << std::endl;
}

std::string new_str(int num, char sym)
{
	std::string result(num, sym);
	return result;
}
