#include <HumanA.hpp>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

void	HumanA::Attack()
{
	std::cout << _name << " attacks with his " << _weapon.GetType() << std::endl;
}
