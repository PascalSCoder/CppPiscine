#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal
{
public:
	virtual ~Animal();

	std::string	GetType() const;

	virtual void	MakeSound() const;

protected:
	Animal();
	Animal(std::string type);
	Animal(const Animal& ref);
	Animal& operator=(const Animal& ref);

	std::string	_type;
};

#endif
