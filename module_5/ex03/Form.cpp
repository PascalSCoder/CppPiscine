#include "Form.hpp"

#include <string>
#include <iostream>

Form::Form()
{
}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec) : _name(name)
{
	SetGrade(gradeToExec, &_minGradeToExec);
	SetGrade(gradeToSign, &_minGradeToSign);
	_isSigned = false;
}

Form::Form(const Form& ref)
{
	*this = ref;
}

Form&	Form::operator=(const Form& ref)
{
	_isSigned = ref._isSigned;
	_minGradeToExec = ref._minGradeToExec;
	_minGradeToSign = ref._minGradeToSign;
	return *this;
}

Form::~Form()
{
}

std::string const Form::GetName()
{
	return _name;
}

bool Form::GetIsSigned()
{
	return _isSigned;
}

unsigned int Form::GetMinGradeToSign()
{
	return _minGradeToSign;
}

unsigned int Form::GetMinGradeToExec()
{
	return _minGradeToExec;
}

void	Form::BeSigned(Bureaucrat const & signer)
{
	if (_isSigned)
		throw AlreadySignedException();
	else if (signer.GetGrade() > _minGradeToSign)
		throw GradeTooLowException();
	else
		_isSigned = true;
}

void	Form::Execute(Bureaucrat const & executor) const
{
	if (!_isSigned)
		throw UnsignedFormException();
	else if (executor.GetGrade() > _minGradeToExec)
		throw GradeTooLowException();
	else
		Action();
}

void Form::SetGrade(unsigned int newGrade, unsigned int* var)
{
	if (newGrade < 1)
		throw GradeTooHighException();
	else if (newGrade > 150)
		throw GradeTooLowException();
	else
		*var = newGrade;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low exception";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high exception";
}

const char* Form::UnsignedFormException::what() const throw()
{
	return "Form not signed exception";
}

const char* Form::AlreadySignedException::what() const throw()
{
	return "Form already signed exception";
}

std::ostream& operator<<(std::ostream& os, Form& ref)
{
	os << "Form " << ref.GetName() << " needs a bureaucrat grade of at least " << ref.GetMinGradeToSign() << " to get signed." << std::endl;
	os << "Form " << ref.GetName() << " needs a bureaucrat grade of at least " << ref.GetMinGradeToExec() << " to be executed." << std::endl;
	if (ref.GetIsSigned())
		os << "Form " << ref.GetName() << " has been signed.";
	else
		os << "Form " << ref.GetName() << " has not been signed yet.";
	return os;
}
