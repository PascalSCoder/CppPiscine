#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <Weapon.hpp>

class HumanB
{
public:
	HumanB(std::string name);
	void	Attack() const;
	void	SetWeapon(Weapon &weapon);

private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif
