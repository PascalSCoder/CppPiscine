#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"

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
		// Fail at initialization
		PrintTitle("Fail at initialization");
		try
		{
			Bureaucrat crat("Unemployed after this illigal action", 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			Bureaucrat crat("Unemployed after this illigal action", -12312);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			Bureaucrat crat("Unemployed after this illigal action", 151);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		// Successfully initialize
		PrintTitle("Succesfully initialize");
		Bureaucrat low("LOW", 150);
		Bureaucrat high("HIGH", 1);
		std::cout << low << std::endl;
		std::cout << high << std::endl;

		// Fail at increment/decrement
		PrintTitle("Fail at increment/decrement");
		try
		{
			low.DecrGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			high.IncrGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		// Succesfully increment/decrement
		PrintTitle("Successfully increment");
		std::cout << "before: " << low.GetGrade() << std::endl;
		low.IncrGrade();
		std::cout << "after: " << low.GetGrade() << std::endl;

		PrintTitle("Successfully decrement");
		std::cout << "before: " << low.GetGrade() << std::endl;
		low.DecrGrade();
		std::cout << "after: " << low.GetGrade() << std::endl;

		PrintTitle("Done!");
}
