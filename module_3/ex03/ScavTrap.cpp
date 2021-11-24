#include "ScavTrap.hpp"

#include <string>
#include <iostream>

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap base ctor called" << std::endl;

	_energy = 50;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << name << " ctor called" << std::endl;

	_name = name;
	_hp = 100;
	_energy = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap& ref)
{
	std::cout << "ScavTrap " << ref._name << " copy ctor called" << std::endl;

	*this = ref;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	std::cout << "ScavTrap " << ref._name << " assignation operator called" << std::endl;

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
