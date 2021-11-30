#include <Bureaucrat.hpp>

#include <string>
#include <iostream>
#include <exception>

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	SetGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
{
	*this = ref;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& ref)
{
	(void)ref;
	return *this;
}

Bureaucrat::~Bureaucrat()
{

}

void Bureaucrat::IncrGrade()
{
	SetGrade(_grade - 1);
}

void Bureaucrat::DecrGrade()
{
	SetGrade(_grade + 1);
}

void Bureaucrat::SetGrade(unsigned int newGrade)
{
	try
	{
		if (newGrade < 1)
			throw GradeTooLowException;
		else if (newGrade > 150)
			throw GradeTooHighException;
		else
			_grade = newGrade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low exception";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high exception";
}
