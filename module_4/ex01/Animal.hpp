#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal
{
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& ref);
	Animal& operator=(const Animal& ref);
	virtual	~Animal();

	std::string	GetType() const;

	virtual void	MakeSound() const;

protected:
	std::string	_type;
};

#endif
