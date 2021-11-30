#include "Ice.hpp"

#include <string>
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	std::cout << "ice ctor called" << std::endl;
}

Ice::Ice(const Ice& ref) : AMateria(ref)
{
	std::cout << "ice copy ctor called" << std::endl;

	*this = ref;
}

Ice&	Ice::operator=(const Ice& ref)
{
	std::cout << "ice assignation overload called" << std::endl;

	(void)ref;
	return *this;
}

Ice::~Ice()
{
	std::cout << "ice dtor called" << std::endl;
}

AMateria* Ice::Clone() const
{
	return new Ice(*this);
}

void Ice::Use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.GetName() << " *" << std::endl;
}
