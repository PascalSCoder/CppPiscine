#include <Weapon.hpp>

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::Weapon()
{
}

std::string	Weapon::GetType() const
{
	return _type;
}

void	Weapon::SetType(std::string type)
{
	_type = type;
}
