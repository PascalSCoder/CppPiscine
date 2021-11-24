#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class	ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& ref);
	ScavTrap& operator=(const ScavTrap& ref);
	~ScavTrap();

	virtual void	Attack(std::string const& target) const;

	void	GuardGate() const;

protected:
	ScavTrap();
};

#endif
