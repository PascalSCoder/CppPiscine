#include <string>
#include <iostream>

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog ctor called" << std::endl;

	_brain = new Brain();
}

Dog::Dog(const Dog& ref) : Animal(ref)
{
	std::cout << "Dog copy ctor called" << std::endl;

	this->_brain = new Brain(*ref._brain);
}

Dog&	Dog::operator=(const Dog& ref)
{
	std::cout << "Dog assignation operator called" << std::endl;

	_type = ref._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog dtor called" << std::endl;

	delete _brain;
}

void Dog::MakeSound() const
{
	std::cout << "Woef! Woef! ... (continues barking while we continue)" << std::endl;
}

void	Dog::AddIdea(std::string idea)
{
	_brain->AddIdea(idea);
}

void	Dog::ShareIdeas() const
{
	_brain->ShareIdeas();
}
