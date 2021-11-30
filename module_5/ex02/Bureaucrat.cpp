#include "Bureaucrat.hpp"

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
	_grade = ref._grade;
	_name = ref._name;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::GetName() const
{
	return _name;
}

unsigned int Bureaucrat::GetGrade() const
{
	return _grade;
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
	if (newGrade < 1)
		throw GradeTooHighException();
	else if (newGrade > 150)
		throw GradeTooLowException();
	else
		_grade = newGrade;
}

void Bureaucrat::SignForm(Form& form)
{
	if (form.GetIsSigned())
		std::cout << _name << " cannot sign " << form.GetName() << " because the form is already signed." << std::endl;
	else
	{
		try
		{
			form.BeSigned(*this);
			std::cout << _name << " signs " << form.GetName() << std::endl;
		}
		catch(const Form::GradeTooLowException& e)
		{
			std::cout << _name << " cannot sign " << form.GetName() << " because of: " << e.what() << std::endl;
		}
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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& ref)
{
	os << ref.GetName() << ", bureaucrat grade: " << ref.GetGrade();
	return os;
}
