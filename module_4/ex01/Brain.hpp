#ifndef BRAIN_HPP
# define BRAIN_HPP

#define IDEACOUNT 100

#include <string>

class	Brain
{
public:
	Brain();
	Brain(const Brain& ref);
	Brain& operator=(const Brain& ref);
	~Brain();

	void	AddIdea(std::string idea);
	void	ShareIdeas() const;

private:
	std::string		_ideas[IDEACOUNT];
	unsigned int	_ideaCount;
};

#endif
