#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		while (*argv)
		{
			for (size_t i = 0; i < std::strlen(*argv); i++)
			{
				(*argv)[i] = std::toupper((*argv)[i]);
			}
			std::cout << *argv;
			argv++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
