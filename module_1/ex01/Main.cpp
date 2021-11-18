#include <Zombie.hpp>

Zombie* ZombieHorde(int N, std::string name);

int	main()
{
	Zombie	*zombies;
	
	zombies = ZombieHorde(3, "Zumbie");
	for (int i = 0; i < 3; i++)
	{
		zombies[i].Announce();
	}
	delete[] zombies;
}
