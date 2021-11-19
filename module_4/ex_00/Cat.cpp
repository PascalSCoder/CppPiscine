#include <Cat.hpp>

#include <string>
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat ctor called" << std::endl;
}

Cat::Cat(const Cat& ref)
{
	*this = ref;
}

Cat&	Cat::operator=(const Cat& ref)
{
	_type = ref._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat dtor called" << std::endl;
}

void Cat::MakeSound() const
{
	std::cout << "Miauw, miauw.. miauw?" << std::endl;
}
