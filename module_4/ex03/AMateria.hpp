#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	_type;

public:
	AMateria(std::string const & type);
	AMateria(const AMateria& ref);
	AMateria& operator=(const AMateria& ref);
	virtual ~AMateria();

	std::string const & GetType() const;
	
	virtual AMateria* Clone() const = 0;
	virtual void Use(ICharacter& target);
};

#endif
