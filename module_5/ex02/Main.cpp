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
		Form *form = new PresidentialPardonForm("testtest");
		form->Execute(boss);
		// Form form("Simple form", 100, 50);

		// std::cout << chimp << std::endl;
		// chimp.IncrGrade();
		// std::cout << chimp << std::endl;

		// std::cout << form << std::endl;
		// chimp.SignForm(form);
		// boss.SignForm(form);
		// std::cout << form << std::endl;
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
