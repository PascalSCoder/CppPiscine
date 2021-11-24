#include <Brain.hpp>

#include <string>
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain ctor called" << std::endl;

	_ideaCount = 0;
}

Brain::Brain(const Brain& ref)
{
	std::cout << "Brain copy ctor called" << std::endl;

	for (size_t i = 0; i < IDEACOUNT; i++)
		_ideas[i] = ref._ideas[i];
	_ideaCount = ref._ideaCount;
}

Brain&	Brain::operator=(const Brain& ref)
{
	std::cout << "Brain assignation operator called" << std::endl;

	for (size_t i = 0; i < IDEACOUNT; i++)
		_ideas[i] = ref._ideas[i];
	_ideaCount = ref._ideaCount;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain dtor called" << std::endl;
}

void Brain::AddIdea(std::string idea)
{
	if (IDEACOUNT > 0)
	{
		if (_ideaCount == IDEACOUNT)
			_ideaCount = 0;
		_ideas[_ideaCount] = idea;
		_ideaCount++;
	}
}

void Brain::ShareIdeas() const
{
	for (size_t i = 0; i < IDEACOUNT; i++)
	{
		if (_ideas[i].length() > 0)
			std::cout << i << ": " << _ideas[i] << std::endl;
	}
}
