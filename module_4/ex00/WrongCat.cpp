#include <WrongCat.hpp>

#include <string>
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat ctor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& ref)
{
	std::cout << "WrongCat copy ctor called" << std::endl;

	*this = ref;
}

WrongCat&	WrongCat::operator=(const WrongCat& ref)
{
	_type = ref._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat dtor called" << std::endl;
}

void	WrongCat::MakeSound() const
{
	std::cout << "Wuaim, wuaim.. wuaim?" << std::endl;
}
