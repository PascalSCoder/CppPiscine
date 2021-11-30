#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat crat("Mankey", 1);
		std::cout << crat << std::endl;
		crat.DecrGrade();
		std::cout << crat << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
