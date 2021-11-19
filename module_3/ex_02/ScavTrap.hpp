#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& ref);
	ScavTrap& operator=(const ScavTrap& ref);
	~ScavTrap();

	void GuardGate() const;
	void Attack(std::string const& target) const;
};

#endif
