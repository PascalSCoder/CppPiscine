#include <Zombie.hpp>

#include <string>
#include <iostream>

Zombie::Zombie(std::string name) : _name(name)
{
	Announce();
}

Zombie::~Zombie()
{
	std::cout << _name << " got destroyed by the simulation." << std::endl;
}

void	Zombie::Announce() const
{
	std::cout << _name << " > BraiiiiiiinnnzzzZ..." << std::endl;
}
