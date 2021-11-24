#ifndef BRAIN_HPP
# define BRAIN_HPP

#define IDEACOUNT 1

#include <string>

class	Brain
{
public:
	Brain();
	Brain(const Brain& ref);
	Brain& operator=(const Brain& ref);
	~Brain();

	std::string	GetIdea(unsigned int index) const;
	void		AddIdea(std::string idea);

private:
	std::string	_ideas[IDEACOUNT];
	int			_ideaN;
};

#endif
