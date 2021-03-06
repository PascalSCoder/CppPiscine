#ifndef FORM_HPP
# define FORM_HPP

#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
public:
	Form& operator=(const Form& ref);
	virtual ~Form();

	std::string	const	GetName();
	bool				GetIsSigned();
	unsigned int		GetMinGradeToSign();
	unsigned int		GetMinGradeToExec();
	void				BeSigned(Bureaucrat const& signer);
	void				Execute(Bureaucrat const& executor) const;


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

	class UnsignedFormException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class AlreadySignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

protected:
	std::string	 _target;

	Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec);
	Form(const Form& ref);
	Form();

	virtual void	Action() const = 0;

private:
	std::string const	_name;
	bool				_isSigned;
	unsigned int		_minGradeToSign;
	unsigned int		_minGradeToExec;

	void	SetGrade(unsigned int newGrade, unsigned int* var);
};

std::ostream&	operator<<(std::ostream& os, Form& ref);

#endif
