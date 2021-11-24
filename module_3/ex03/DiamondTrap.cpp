#include <DiamondTrap.hpp>

#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	_name = name;

	std::cout << "DiamondTrap " << _name << " ctor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref)
{
	*this = ref;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& ref)
{
	_name = ref._name;
	_energy = ref._energy;
	_ad = ref._ad;
	_hp = ref._hp;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " dtor called" << std::endl;
}

void DiamondTrap::Attack(std::string const& target) const
{
	ScavTrap::Attack(target);
}

void DiamondTrap::WhoAmI() const
{
	std::cout << "I, DiamondTrap am " << DiamondTrap::_name << std::endl;
	std::cout << "I, ClapTrap, am " << ClapTrap::_name << std::endl;
}
