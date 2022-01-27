#include "Form.hpp"

#include <string>
#include <iostream>

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	CheckGrade(gradeToSign);
	CheckGrade(gradeToExec);
	_isSigned = false;
}

Form::Form(const Form& ref) : _name(ref._name), _isSigned(ref._isSigned), _gradeToSign(ref._gradeToSign), _gradeToExec(ref._gradeToExec)
{
}

Form&	Form::operator=(const Form& ref)
{
	_isSigned = ref._isSigned; 
	return *this;
}

Form::~Form()
{
}

std::string Form::GetName()
{
	return _name;
}

bool Form::GetIsSigned()
{
	return _isSigned;
}

unsigned int Form::GetMinGradeToSign()
{
	return _gradeToSign;
}

unsigned int Form::GetMinGradeToExec()
{
	return _gradeToExec;
}

void	Form::BeSigned(Bureaucrat& signer)
{
	if (_isSigned)
		throw AlreadySignedException();
	else if (signer.GetGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_isSigned = true;
}

void Form::CheckGrade(unsigned int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low exception";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high exception";
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
