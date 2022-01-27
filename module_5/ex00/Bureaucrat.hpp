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

	std::string		GetName() const;
	unsigned int	GetGrade() const;
	void			IncrGrade();
	void			DecrGrade();

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};

private:
	std::string const	_name;
	unsigned int		_grade;

	void	SetGrade(unsigned int newGrade);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& ref);

#endif
