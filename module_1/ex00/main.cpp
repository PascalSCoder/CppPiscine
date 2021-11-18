#include <Zombie.hpp>
#include <string>

void	RandomChump(std::string name);
Zombie *NewZombie(std::string name);

int	main(void)
{
	Zombie	*z;

	z = NewZombie("Brain-Z");
	RandomChump("Lil' brain");
	delete z;
	RandomChump("AA-Brain");
}
