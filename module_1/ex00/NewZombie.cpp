#include <Zombie.hpp>
#include <string>

Zombie	*NewZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie(name);
	return (zombie);
}
