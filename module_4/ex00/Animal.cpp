#include "Animal.hpp"

#include <string>
#include <iostream>

Animal::Animal()
{
	_type = "NONE";

	std::cout << "Animal base ctor called" << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;

	std::cout << "Animal ctor called for " << _type << std::endl;
}

Animal::Animal(const Animal& ref)
{
	*this = ref;
}

Animal&	Animal::operator=(const Animal& ref)
{
	_type = ref._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal dtor called for " << _type << std::endl;
}

void Animal::MakeSound() const
{
}

std::string Animal::GetType() const
{
	return _type;
}
