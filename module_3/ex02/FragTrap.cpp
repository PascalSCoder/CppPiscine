#include "FragTrap.hpp"

#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap " << name << " ctor called" << std::endl;

	_name = name;
	_hp = 100;
	_energy = 100;
	_ad = 30;
}

FragTrap::FragTrap(const FragTrap& ref)
{
	std::cout << "FragTrap " << ref._name << " copy ctor called" << std::endl;

	*this = ref;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	std::cout << "FragTrap " << ref._name << " assignation operator called" << std::endl;

	_name = ref._name;
	_hp = ref._hp;
	_energy = ref._energy;
	_ad = ref._ad;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " dtor called" << std::endl;
}

void	FragTrap::HighFivesGuys() const
{
	std::cout << "FragTrap " << _name << " shouts: GET ME SOME HIGH FIVES GUYS!!" << std::endl;
}

void	FragTrap::Attack(std::string const& target) const
{
	std::cout << "FragTrap " << _name << " attacks " << target;
	std::cout << " and inflicts " << _ad << " points of damage!" << std::endl;
}
