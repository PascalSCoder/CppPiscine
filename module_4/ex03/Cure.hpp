#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& ref);
	Cure& operator=(const Cure& ref);
	virtual ~Cure();

	AMateria*	Clone() const;
	void 		Use(ICharacter& target);
};

#endif
