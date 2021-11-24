#include "FragTrap.hpp"

#include <string>
#include <iostream>

FragTrap::FragTrap()
{
	_hp = 100;
	_ad = 30;

	std::cout << "FragTrap base ctor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_energy = 100;
	_ad = 30;

	std::cout << "FragTrap " << name << " ctor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref)
{
	*this = ref;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
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
