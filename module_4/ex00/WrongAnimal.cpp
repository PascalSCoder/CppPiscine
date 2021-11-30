#include <WrongAnimal.hpp>

#include <string>
#include <iostream>

WrongAnimal::WrongAnimal()
{
	_type = "NONE";

	std::cout << "WrongAnimal base ctor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	_type = type;

	std::cout << "WrongAnimal ctor called for " << _type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
	*this = ref;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& ref)
{
	_type = ref._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal dtor called for " << _type << std::endl;
}

void WrongAnimal::MakeSound() const
{
	std::cout << "* The universe starts to crackle, everything seems to be falling apart *" << std::endl;
	std::cout << "RoarrrRibbitTjirpBuzzGobbleGobbleWoefMeowQuackQuackHoothoooothootCluckCluckCluckBaaaaBaaaaaOinkOinkMoooooo!!" << std::endl;
}

std::string WrongAnimal::GetType() const
{
	return _type;
}
