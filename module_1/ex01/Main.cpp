#include <Zombie.hpp>

Zombie* ZombieHorde(int N, std::string name);

int	main()
{
	Zombie *zombies;
	const int zombieCount = 3;

	zombies = ZombieHorde(zombieCount, "Zumbie");
	for (int i = 0; i < zombieCount; i++)
	{
		zombies[i].Announce();
	}
	delete[] zombies;
}
