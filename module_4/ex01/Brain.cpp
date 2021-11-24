#include <Brain.hpp>

#include <string>
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain ctor called" << std::endl;

	_ideaN = 0;
}

Brain::Brain(const Brain& ref)
{
	for (size_t i = 0; i < IDEACOUNT; i++)
		_ideas[i] = ref._ideas[i];
}

Brain&	Brain::operator=(const Brain& ref)
{

}

Brain::~Brain()
{
	std::cout << "Brain dtor called" << std::endl;
}

std::string Brain::GetIdea(unsigned int index) const
{
	if (index > IDEACOUNT)
		return NULL;
	return _ideas[index];
}

void Brain::AddIdea(std::string idea)
{
	if (IDEACOUNT > 0)
	{
		_ideas[_ideaN % IDEACOUNT] = idea;
		_ideaN++;
	}
}
