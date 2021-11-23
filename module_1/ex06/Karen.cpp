#include "Karen.hpp"

#include <string>
#include <iostream>
#include <vector>

int Karen::GetLevel(std::string level) const
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return i;
	}
	return LevelInsignificant;
}

Karen::Karen(std::string filterLevel)
{
	_filterLevel = GetLevel(filterLevel);
}

void Karen::Complain() const
{
	switch (_filterLevel)
	{
	case LevelInsignificant:
		Insignificant();
		return;
	case LevelDebug:
		Debug();
	case LevelInfo:
		Info();
	case LevelWarning:
		Warning();
	case LevelError:
		Error();
	default:
		return;
	}
}

void Karen::Debug() const
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra vegan bacon for my vegan 7XL-double-vegan-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl << std::endl;
}

void Karen::Info() const
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra vegan bacon costs more money." << std::endl;
	std::cout << "You didn't put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::Warning() const
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void Karen::Error() const
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager NOW!" << std::endl;
}

void Karen::Insignificant() const
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
