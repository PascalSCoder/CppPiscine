#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class	Bureaucrat
{
public:
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(const Bureaucrat& ref);
	Bureaucrat& operator=(const Bureaucrat& ref);
	~Bureaucrat();

	std::string	GetName() const;
	int			GetGrade() const;
	void		IncrGrade();
	void		DecrGrade();

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	}	GradeTooLowException;

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	}	GradeTooHighException;

private:
	std::string		_name;
	unsigned int	_grade;

	void	SetGrade(unsigned int newGrade);
};

#endif
