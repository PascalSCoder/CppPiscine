#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap dia("Diaaa");
	std::cout << std::endl;
	dia.WhoAmI();
	std::cout << std::endl;
	dia.GuardGate();
	dia.Attack("the approaching enemies");
	dia.TakeDamage(42);
	dia.BeRepaired(21);
	dia.HighFivesGuys();
	std::cout << std::endl;
}
