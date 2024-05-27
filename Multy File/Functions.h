#pragma once
#include <iostream>
#include <string>

void say_hi();
std::string new_str(int num, char sym);

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length;i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}


