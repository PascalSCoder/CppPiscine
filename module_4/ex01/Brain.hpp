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
	int			GetIdeaCount() const;

private:
	std::string		_ideas[IDEACOUNT];
	unsigned int	_ideaCount;
};

#endif
