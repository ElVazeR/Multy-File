#include "Structures.hpp"
#include <iostream>

void print_person(const Person& P)
{
	std::cout << "Name:" << P.name << std::endl;
	std::cout << "Age:" << P.age << std::endl;
	std::cout << "Job:" << P.job << std::endl;
}
