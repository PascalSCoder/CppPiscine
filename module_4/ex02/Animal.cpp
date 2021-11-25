#include "Animal.hpp"

#include <string>
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal base ctor called" << std::endl;

	_type = "NONE";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal ctor called for " << type << std::endl;

	_type = type;
}

Animal::Animal(const Animal& ref)
{
	std::cout << "Animal copy ctor called for" << ref._type << std::endl;

	*this = ref;
}

Animal&	Animal::operator=(const Animal& ref)
{
	std::cout << "Animal assignation overload called for " << ref._type << std::endl;

	_type = ref._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal dtor called for " << _type << std::endl;
}

std::string Animal::GetType() const
{
	return _type;
}

void Animal::MakeSound() const
{
}
