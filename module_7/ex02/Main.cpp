#include <iostream>
#include "Array.hpp"

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
	PrintTitle("Allocate new Array on heap");
	Array<int> *array = new Array<int>(5);
	(*array)[4] = 999;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << (*array)[i] << std::endl;
	}

	PrintTitle("Create a deep copy of this array");
	Array<int> array2 = *array;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << array2[i] << std::endl;
	}

	PrintTitle("Alter original array");
	(*array)[3] = 888;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << (*array)[i] << std::endl;
	}

	PrintTitle("Delete original array, check if copy is OK");
	delete array;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << array2[i] << std::endl;
	}

	PrintTitle("Alter copy array...");
	array2[0] = 111;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << array2[i] << std::endl;
	}

	PrintTitle("Lets try to segfaaaault!");
	try
	{
		array2[-1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		array2[5];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	PrintTitle("Done!");
}
