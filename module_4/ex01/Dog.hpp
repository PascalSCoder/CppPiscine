#ifndef DOG_HPP
# define DOG_HPP

#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& ref);
	Dog& operator=(const Dog& ref);
	~Dog();

	void	MakeSound() const;
	void	AddIdea();

private:
	Brain	*_brain;
};

#endif
