#include "Cure.hpp"

#include <string>
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	std::cout << "cure ctor called" << std::endl;
}

Cure::Cure(const Cure& ref) : AMateria(ref)
{
	std::cout << "cure copy ctor called" << std::endl;

	*this = ref;
}

Cure&	Cure::operator=(const Cure& ref)
{
	std::cout << "cure assignation overload called" << std::endl;

	(void)ref;
	return *this;
}

Cure::~Cure()
{
	std::cout << "cure dtor called" << std::endl;
}

AMateria* Cure::Clone() const
{
	return new Cure(*this);
}

void Cure::Use(ICharacter& target)
{
	std::cout << "* heals " << target.GetName() << "'s wounds *" << std::endl;
}
