#ifndef INTERN_HPP
# define INTERN_HPP

#include "string"
#include "Form.hpp"

class	Intern
{
public:
	Intern();
	Intern(const Intern& ref);
	Intern& operator=(const Intern& ref);
	~Intern();

	Form	*MakeForm(std::string form, std::string target);
};

#endif
