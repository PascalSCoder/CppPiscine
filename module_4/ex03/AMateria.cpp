#include "AMateria.hpp"

#include <string>
#include <iostream>

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria ctor called for type: " << type << std::endl;

	_type = type;
}

AMateria::AMateria(const AMateria& ref)
{
	std::cout << "AMateria copy ctor called for type: " << ref.GetType() << std::endl;

	*this = ref;
}

AMateria&	AMateria::operator=(const AMateria& ref)
{
	std::cout << "AMateria assignation overload called for type " << ref.GetType() << std::endl;

	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria dtor called for " << _type << std::endl;
}

std::string const& AMateria::GetType() const
{
	return _type;
}

void AMateria::Use(ICharacter& target)
{
	std::cout << "* materia used at " << target.GetName() << " *" << std::endl;
}
