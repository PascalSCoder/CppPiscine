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
	this->_type = ref._type;
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
