#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <string>
#include <iostream>

Intern::Intern()
{
}

Intern::Intern(const Intern& ref)
{
	*this = ref;
}

Intern&	Intern::operator=(const Intern& ref)
{
	(void)ref;
	return *this;
}

Intern::~Intern()
{
}

Form	*Intern::MakeForm(std::string form, std::string target)
{
	std::string forms[] = { "Presidential", "Robotomy", "Shrubbery" };
	size_t i;
	for (i = 0; i < 3; i++)
	{
		if (forms[i] == form)
			break;
	}

	Form *createdForm;
	switch (i)
	{
	case 0:
		createdForm = new PresidentialPardonForm(target);
		break;
	case 1:
		createdForm = new RobotomyRequestForm(target);
		break;
	case 2:
		createdForm = new ShrubberyCreationForm(target);
		break;
	
	default:
		std::cout << "The intern searched everywhere, but the dummy couldn't find " << form << " for us..." << std::endl;
		return nullptr;
	}
	std::cout << "Intern creates " << form << std::endl;
	return createdForm;
}
