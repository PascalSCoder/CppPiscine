#include "ScavTrap.hpp"

#include <string>
#include <iostream>

ScavTrap::ScavTrap()
{
	_energy = 50;

	std::cout << "ScavTrap base ctor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_energy = 50;
	_ad = 20;

	std::cout << "ScavTrap " << name << " ctor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref)
{
	*this = ref;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	_name = ref._name;
	_hp = ref._hp;
	_energy = ref._energy;
	_ad = ref._ad;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " dtor called" << std::endl;
}

void	ScavTrap::GuardGate() const
{
	std::cout << "ScavTrap " << _name << " has entered Gate Keeper Mode" << std::endl;
}

void	ScavTrap::Attack(std::string const& target) const
{
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << " and inflicts " << _ad << " points of damage!" << std::endl;
}
