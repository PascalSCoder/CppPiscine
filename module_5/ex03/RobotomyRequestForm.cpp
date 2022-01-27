#include <RobotomyRequestForm.hpp>

#include <string>
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

// call base Form here to deal with uninitialized assignment operator calls
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) : Form("RobotomyRequestForm", 72, 45)
{
	*this = ref;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	Form::operator=(ref);
	_target = ref._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void	RobotomyRequestForm::Action() const
{
	std::cout << "* Drilling noises *" << std::endl;
	srand(time(0));
	if (rand() % 2)
		std::cout << _target << " has been robotomized." << std::endl;
	else
		std::cout << _target << " robotomization has failed." << std::endl;
}
