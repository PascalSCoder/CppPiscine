#include <iostream>
#include <exception>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		// Bureaucrat chimp("Chimp", 150);
		Bureaucrat boss("Boss", 1);
		Form *shrubbery = new ShrubberyCreationForm("well_painted");
		Form *robotomy = new RobotomyRequestForm("Targut");
		shrubbery->Execute(boss);
		robotomy->Execute(boss);
		// Form form("Simple form", 100, 50);

		// std::cout << chimp << std::endl;
		// chimp.IncrGrade();
		// std::cout << chimp << std::endl;

		// std::cout << form << std::endl;
		// chimp.SignForm(form);
		// boss.SignForm(form);
		// std::cout << form << std::endl;
		delete shrubbery;
		delete robotomy;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
