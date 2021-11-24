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
	for (size_t i = 0; i < ref._ideaCount; i++)
		_ideas[i] = ref._ideas[i];
	_ideaCount = ref._ideaCount;
}

Brain&	Brain::operator=(const Brain& ref)
{
	for (size_t i = 0; i < ref._ideaCount; i++)
		_ideas[i] = ref._ideas[i];
	_ideaCount = ref._ideaCount;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain dtor called" << std::endl;
}

std::string Brain::GetIdea(unsigned int index) const
{
	if (index > IDEACOUNT || index > _ideaCount)
		return NULL;
	return _ideas[index];
}

void Brain::AddIdea(std::string idea)
{
	if (IDEACOUNT > 0)
	{
		_ideas[_ideaCount % IDEACOUNT] = idea;
		_ideaCount++;
	}
}
