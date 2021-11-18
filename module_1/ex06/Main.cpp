#include <iostream>

#include <Karen.hpp>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Run as ./KarenFilter [FilterLevel]" << std::endl;
		return (1);
	}

	Karen karen(argv[1]);

	karen.Complain();
	return (0);
}
