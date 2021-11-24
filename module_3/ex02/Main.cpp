#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap fraggie("Fraggie");
	ScavTrap scavvie("Scavvie");

	fraggie.Attack("every enemy on the scene");
	fraggie.TakeDamage(99);
	fraggie.BeRepaired(99);
	fraggie.HighFivesGuys();

	scavvie.GuardGate();
	scavvie.Attack("a group of ducks");
	scavvie.TakeDamage(1);
	scavvie.BeRepaired(1);
}
