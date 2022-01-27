#include <PresidentialPardonForm.hpp>

#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

// call base Form here to deal with uninitialized assignment operator calls
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) : Form("PresidentialPardonForm", 25, 5)
{
	*this = ref;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	Form::operator=(ref);
	_target = ref._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::Action() const
{
	std::cout << _target <<  " has been pardoned by Zafod Beeblebrox." << std::endl;
}
