#include <RobotomyRequestForm.hpp>

#include <string>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{

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
}
