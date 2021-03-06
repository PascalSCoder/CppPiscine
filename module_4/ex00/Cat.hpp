#ifndef CAT_HPP
# define CAT_HPP

#include <string>

#include "Animal.hpp"

class	Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& ref);
	Cat& operator=(const Cat& ref);
	~Cat();

	void	MakeSound() const;
};

#endif
