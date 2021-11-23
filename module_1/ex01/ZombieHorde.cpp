#include <string>

#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name)
{
	if (N <= 0)
		return nullptr;

	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].SetName(name);
		zombies[i].Announce();
	}
	return zombies;
}
