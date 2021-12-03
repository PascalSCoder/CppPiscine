#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
public:
	Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec);
	Form(const Form& ref);
	Form& operator=(const Form& ref);
	~Form();

	std::string		GetName();
	bool			GetIsSigned();
	unsigned int	GetMinGradeToSign();
	unsigned int	GetMinGradeToExec();
	void			BeSigned(Bureaucrat& signer);

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

private:
	std::string const	_name;
	bool				_isSigned;
	unsigned int const	_gradeToSign;
	unsigned int const	_gradeToExec;

	void	CheckGrade(unsigned int grade);
};

std::ostream&	operator<<(std::ostream& os, Form& ref);

#endif
