#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string type);
	
	void		SetType(std::string type);
	std::string	GetType();

private:
	std::string	_type;

};

#endif
