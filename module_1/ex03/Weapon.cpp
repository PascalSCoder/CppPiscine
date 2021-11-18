#include <Weapon.hpp>

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::Weapon()
{
}

std::string	Weapon::GetType()
{
	return _type;
}

void	Weapon::SetType(std::string type)
{
	_type = type;
}
