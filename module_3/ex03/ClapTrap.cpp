#include "ClapTrap.hpp"

#include <string>
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap base ctor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " ctor called" << std::endl;

	_name = name;
	_hp = 10;
	_energy = 10;
	_ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	std::cout << "ClapTrap " << ref._name << " copy ctor called" << std::endl;

	*this = ref;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	std::cout << "ClapTrap " << ref._name << " assignation operator called" << std::endl;

	_name = ref._name;
	_hp = ref._hp;
	_energy = ref._energy;
	_ad = ref._ad;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " dtor called" << std::endl;
}

void	ClapTrap::Attack(std::string const& target) const
{
	std::cout << "Claptrap " << _name << " attacks " << target;
	std::cout << " and inflicts " << _ad << " points of damage!" << std::endl;
}

void	ClapTrap::TakeDamage(unsigned int amount) const
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
}

void	ClapTrap::BeRepaired(unsigned int amount) const
{
	std::cout << "ClapTrap " << _name << " has been repaired for " << amount << " hitpoints." << std::endl;
}
