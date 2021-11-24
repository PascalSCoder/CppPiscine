#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class	FragTrap : public virtual ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap& ref);
	FragTrap& operator=(const FragTrap& ref);
	~FragTrap();

	virtual void	Attack(std::string const& target) const;

	void	HighFivesGuys() const;

protected:
	FragTrap();
};

#endif
