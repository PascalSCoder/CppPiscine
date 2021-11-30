#include <iostream>
#include <exception>

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat chimp("Chimp", 150);
		Bureaucrat boss("Boss", 1);
		Form form("Simple form", 100, 50);

		std::cout << chimp << std::endl;
		chimp.IncrGrade();
		std::cout << chimp << std::endl;

		std::cout << form << std::endl;
		chimp.SignForm(form);
		boss.SignForm(form);
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
