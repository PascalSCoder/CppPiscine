#include <Zombie.hpp>

Zombie* ZombieHorde(int N, std::string name)
{
	Zombie	*zombies;

	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].SetName(name);
	}
	return zombies;
}
