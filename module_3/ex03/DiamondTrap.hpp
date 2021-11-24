#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <string>

class	DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& ref);
	DiamondTrap& operator=(const DiamondTrap& ref);
	~DiamondTrap();

	void	Attack(std::string const& target) const;
	void	WhoAmI() const;

private:
	std::string	_name;
};

#endif
