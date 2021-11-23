#include <HumanB.hpp>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr)
{
}

void	HumanB::Attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->GetType() << std::endl;
	else
		std::cout << _name << " attacks with his bare hands!?" << std::endl;
}

void	HumanB::SetWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
