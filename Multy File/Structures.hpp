#pragma once
#include <string>

struct Person {
	std::string name;
	int age = 0;
	std::string job;
};

void print_person(const Person& P);