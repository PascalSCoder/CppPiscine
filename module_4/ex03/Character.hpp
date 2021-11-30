#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

#define MATERIA_MAX 4

class	Character : public ICharacter
{
public:
	Character(std::string name);
	Character(const Character& ref);
	Character& operator=(const Character& ref);
	~Character();

	void				Equip(AMateria* m);
	void				Unequip(int idx);
	void				Use(int idx, ICharacter& target);
	std::string const&	GetName() const;

private:
	std::string _name;
	AMateria	*_materias[MATERIA_MAX];
};

#endif
