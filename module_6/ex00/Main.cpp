#include <string>
#include <iostream>
#include <limits>

#include "Converter.hpp"

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

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Supply one argument." << std::endl;
		return 1;
	}

	std::string title("Convert: ");
	title += argv[1];

	PrintTitle(title);
	Converter converter(argv[1]);
	converter.PrintAsChar();
	converter.PrintAsInt();
	converter.PrintAsFloat();
	converter.PrintAsDouble();
}
