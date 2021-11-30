#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& ref);
	WrongCat& operator=(const WrongCat& ref);
	~WrongCat();

	void	MakeSound() const;
};

#endif
