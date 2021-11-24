#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scavvie("Scavvie");
	scavvie.Attack("incoming enemies");
	scavvie.TakeDamage(42);
	scavvie.GuardGate();
	scavvie.TakeDamage(0);
	scavvie.TakeDamage(0);
	scavvie.TakeDamage(0);
}
