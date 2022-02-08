#include <iostream>
#include <vector>

#include "EasyFind.hpp"

#pragma region Debug

#define C_RESET  "\x1B[0m"
#define C_RED  "\x1B[31m"
#define C_GREEN  "\x1B[32m"
#define C_YELLOW  "\x1B[33m"
#define C_BLUE  "\x1B[34m"
#define C_MAGENTA  "\x1B[35m"
#define C_CYAN  "\x1B[36m"
#define C_WHITE  "\x1B[37m"

void PrintTitle(std::string str)
{
	std::cout << std::endl << C_CYAN << str << C_RESET << std::endl;
}

#pragma endregion


int main()
{
	std::vector<int> vec;
	std::vector<int>::iterator iter;

	PrintTitle("Initialize a vector containing 0 to 110");
	for (size_t i = 0; i < 111; i++)
	{
		vec.push_back(i);
	}

	PrintTitle("First try to find some numbers which are contained: 42, 21, 0, 110");
	iter = EasyFind(vec, 42);
	std::cout << "Found: " << *iter << std::endl;
	iter = EasyFind(vec, 21);
	std::cout << "Found: " << *iter << std::endl;
	iter = EasyFind(vec, 0);
	std::cout << "Found: " << *iter << std::endl;
	iter = EasyFind(vec, 110);
	std::cout << "Found: " << *iter << std::endl;

	PrintTitle("Now lets go with some non-existing!");
	try
	{
		iter = EasyFind(vec, 111);
		std::cout << "This should not print anything! value: " << *iter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		iter = EasyFind(vec, -1);
		std::cout << "This should not print anything! value: " << *iter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	PrintTitle("Done!");
}
