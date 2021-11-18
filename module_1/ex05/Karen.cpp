#include <Karen.hpp>

#include <string>
#include <iostream>
#include <vector>

void	Karen::Complain(std::string level)
{
	void		((Karen::*f[])(void)) = { &Karen::Debug, &Karen::Info, &Karen::Warning, &Karen::Error};
	std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*f[i])();
			break;
		}
	}
}

void	Karen::Debug()
{
	std::cout << "I love to get extra vegan bacon for my vegan 7XL-double-vegan-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl;
}

void	Karen::Info()
{
	std::cout << "I cannot believe adding extra vegan bacon costs more money." << std::endl;
	std::cout << "You didn't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::Warning()
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::Error()
{
	std::cout << "This is unacceptable, I want to speak to the manager NOW!" << std::endl;
}
