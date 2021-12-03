#include <PresidentialPardonForm.hpp>

#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref)
{

}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void	PresidentialPardonForm::Action(Bureaucrat const& executor) const
{
	std::cout << _target <<  " has been pardoned by Zafod Beeblebrox." << std::endl;
}
