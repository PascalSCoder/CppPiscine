#include <DiamondTrap.hpp>

#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap " << name << " ctor called" << std::endl;

	_name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref)
{
	std::cout << "DiamondTrap" << ref._name << " copy ctor called" << std::endl;

	*this = ref;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& ref)
{
	std::cout << "DiamondTrap " << ref._name << " assignation operator called" << std::endl;

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
