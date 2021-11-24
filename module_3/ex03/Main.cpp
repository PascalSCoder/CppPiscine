#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

static void SummonDiamondtrap()
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
}

static void SummonClapTrap()
{
	ClapTrap clappie("Clappie");
	clappie.Attack("Diaaa");
	clappie.TakeDamage(UINT_MAX);
	std::cout << "Clappie is VERY ded x.x" << std::endl;
}

static void SummonScavTrap()
{
	ScavTrap scavvie("Scavvie");
	scavvie.GuardGate();
}

static void SummonFragTrap()
{
	FragTrap fraggie("Fraggie");
	fraggie.HighFivesGuys();
}

int	main(void)
{
	SummonDiamondtrap();
	std::cout << "______________________________" << std::endl << std::endl;
	SummonClapTrap();
	std::cout << "______________________________" << std::endl << std::endl;
	SummonScavTrap();
	std::cout << "______________________________" << std::endl << std::endl;
	SummonFragTrap();
}
