#include "Fixed.hpp"

#include <string>
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(const Fixed& ref)
{
	*this = ref;
}

Fixed::Fixed(const int val)
{
	_value = val * 256;
}

Fixed::Fixed(const float val)
{
	_value = (int)(roundf(val * 256));
}

Fixed::~Fixed()
{
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
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
	_value = (int)roundf(ToFloat() * ref.ToFloat() * 256);
	return *this;
}

Fixed& Fixed::operator/(const Fixed& ref)
{
	_value = (int)roundf(ToFloat() / ref.ToFloat() * 256);
	return *this;
}

Fixed& Fixed::operator++()
{
	this->_value += 1;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->_value -= 1;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed retval(ToFloat());
	_value += 1;
	return (retval);
}

Fixed	Fixed::operator--(int)
{
	Fixed retval(ToFloat());
	_value -= 1;
	return retval;
}

int Fixed::GetRawBits() const
{
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
	return (int)roundf(ToFloat());
}

std::ostream& operator<<(std::ostream& o, const Fixed& ref)
{
	o << ref.ToFloat();
	return o;
}

Fixed& Fixed::Max(Fixed& lhs, Fixed& rhs)
{
	if (lhs.ToFloat() >= rhs.ToFloat())
		return lhs;
	else
		return rhs;
}

const Fixed& Fixed::Max(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs.ToFloat() >= rhs.ToFloat())
		return lhs;
	else
		return rhs;
}

Fixed& Fixed::Min(Fixed& lhs, Fixed& rhs)
{
	if (lhs.ToFloat() <= rhs.ToFloat())
		return lhs;
	else
		return rhs;
}

const Fixed& Fixed::Min(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs.ToFloat() <= rhs.ToFloat())
		return lhs;
	else
		return rhs;
}
