#include <RobotomyRequestForm.hpp>

#include <string>
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref)
{

}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void	RobotomyRequestForm::Action(Bureaucrat const& executor) const
{
	std::cout << "RobotomyRequestForm action" << std::endl;

	std::cout << "* Drilling noises *" << std::endl;
	srand(time(0));
	if (rand() % 2)
		std::cout << _target << " has been robotomized." << std::endl;
	else
		std::cout << _target << " robotomization has failed." << std::endl;
}
