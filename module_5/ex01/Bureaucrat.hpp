#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

#include "Form.hpp"

class Form;

class	Bureaucrat
{
public:
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(const Bureaucrat& ref);
	Bureaucrat& operator=(const Bureaucrat& ref);
	~Bureaucrat();

	std::string		GetName() const;
	unsigned int	GetGrade() const;
	void			IncrGrade();
	void			DecrGrade();
	void			SignForm(Form& form);

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
	std::string		_name;
	unsigned int	_grade;

	void	SetGrade(unsigned int newGrade);
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ref);

#endif
