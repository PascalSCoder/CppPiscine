#include "Fixed.hpp"

#include <string>
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = ref;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_fixedPointValue = ref.GetRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::GetRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPointValue;
}

void Fixed::SetRawBits(int const raw)
{
	_fixedPointValue = raw;
}
