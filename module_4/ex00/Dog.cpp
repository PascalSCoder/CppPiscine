#include <Dog.hpp>

#include <string>
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog ctor called" << std::endl;
}

Dog::Dog(const Dog& ref)
{
	*this = ref;
}

Dog&	Dog::operator=(const Dog& ref)
{
	_type = ref._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog dtor called" << std::endl;
}

void Dog::MakeSound() const
{
	std::cout << "Woef! Woef! ... (continues barking while we continue)" << std::endl;
}
