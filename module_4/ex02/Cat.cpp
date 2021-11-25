#include <string>
#include <iostream>

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat ctor called" << std::endl;

	_brain = new Brain();
}

Cat::Cat(const Cat& ref) : Animal(ref)
{
	std::cout << "Cat copy ctor called" << std::endl;

	*this = ref;
}

Cat&	Cat::operator=(const Cat& ref)
{
	std::cout << "Cat assignation operator called" << std::endl;

	this->_brain = new Brain(*ref._brain);
	_type = ref._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat dtor called" << std::endl;

	delete _brain;
}

void Cat::MakeSound() const
{
	std::cout << "Miauw, miauw.. miauw?" << std::endl;
}

void	Cat::AddIdea(std::string idea)
{
	_brain->AddIdea(idea);
}

void	Cat::ShareIdeas() const
{
	_brain->ShareIdeas();
}
