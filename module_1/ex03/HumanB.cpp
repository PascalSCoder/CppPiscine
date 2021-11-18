#include <HumanB.hpp>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name)
{
}

void	HumanB::Attack()
{
	std::cout << _name << " attacks with his " << _weapon->GetType() << std::endl;
}

void	HumanB::SetWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
