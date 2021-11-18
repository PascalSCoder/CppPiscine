#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap one("Uno");
	ClapTrap two("Dos");

	one.Attack("Dos");
	two.TakeDamage(0);
	two.BeRepaired(0);
	two.Attack("Two");
	one.TakeDamage(0);
	one.BeRepaired(0);
	one.TakeDamage(10);
	two.TakeDamage(10);
}
