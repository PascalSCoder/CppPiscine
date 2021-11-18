#include "Fixed.hpp"

#include <string>
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;

	_value = 0;
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = ref;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;

	_value = val * 256;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;

	_value = (int)(roundf(val * 256));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_value = ref.GetRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed& ref)
{
	return ToFloat() > ref.ToFloat();
}

bool Fixed::operator<(const Fixed& ref)
{
	return ToFloat() < ref.ToFloat();
}

bool Fixed::operator>=(const Fixed& ref)
{
	return ToFloat() >= ref.ToFloat();
}

bool Fixed::operator<=(const Fixed& ref)
{
	return ToFloat() <= ref.ToFloat();
}

bool Fixed::operator==(const Fixed& ref)
{
	return ToFloat() == ref.ToFloat();
}

bool Fixed::operator!=(const Fixed& ref)
{
	return ToFloat() != ref.ToFloat();
}

Fixed& Fixed::operator+(const Fixed& ref)
{
	this->_value += ref.GetRawBits();
	return *this;
}

Fixed& Fixed::operator-(const Fixed& ref)
{
	this->_value -= ref.GetRawBits();
	return *this;
}

Fixed& Fixed::operator*(const Fixed& ref)
{
	this->_value *= ref.GetRawBits();
	return *this;
}

Fixed& Fixed::operator/(const Fixed& ref)
{
	this->_value /= ref.GetRawBits();
	return *this;
}

Fixed& Fixed::operator++()
{
	this->_value += 1;// (1 / 256));
	return *this;
}

Fixed& Fixed::operator--()
{
	this->_value -= 1;// (1 / 256));
	return *this;
}

int Fixed::GetRawBits() const
{
	std::cout << "GetRawBits member function called" << std::endl;

	return _value;
}

void Fixed::SetRawBits(int const raw)
{
	_value = raw;
}

float Fixed::ToFloat() const
{
	return (float)_value / 256;
}

int Fixed::ToInt() const
{
	return _value / 256;
}

std::ostream& operator<<(std::ostream& o, const Fixed& ref)
{
	o << ref.ToFloat();
	return o;
}

Fixed& Max(Fixed& lhs, Fixed& rhs)
{
	if (lhs.ToFloat() >= rhs.ToFloat())
		return lhs;
	else
		return rhs;
}

const Fixed& Max(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs.ToFloat() >= rhs.ToFloat())
		return lhs;
	else
		return rhs;
}
