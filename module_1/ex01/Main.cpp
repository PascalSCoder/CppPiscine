#include <Zombie.hpp>

Zombie* ZombieHorde(int N, std::string name);

int	main()
{
	Zombie *zombies;
	zombies = ZombieHorde(-1, "Zumbie -1");
	zombies = ZombieHorde(0, "Zumbie 0");
	zombies = ZombieHorde(3, "Zumbie");
	delete[] zombies;
}
