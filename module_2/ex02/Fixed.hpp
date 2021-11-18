#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
private:
	static const int _fractBits = 8;
	int _value;

public:
	Fixed();
	Fixed(const Fixed& ref);
	Fixed(const int val);
	Fixed(const float val);
	~Fixed();

	Fixed&	operator=(const Fixed& ref);
	bool	operator>(const Fixed& ref);
	bool	operator<(const Fixed& ref);
	bool	operator>=(const Fixed& ref);
	bool	operator<=(const Fixed& ref);
	bool	operator==(const Fixed& ref);
	bool	operator!=(const Fixed& ref);
	Fixed&	operator+(const Fixed& ref);
	Fixed&	operator-(const Fixed& ref);
	Fixed&	operator*(const Fixed& ref);
	Fixed&	operator/(const Fixed& ref);
	Fixed&	operator++(); // prefix
	Fixed&	operator--(); // prefix
	Fixed	operator++(int); // postfix
	Fixed	operator--(int); // postfix

	int GetRawBits() const;
	void SetRawBits(int const raw);
	float ToFloat() const;
	int ToInt() const;
	
	static Fixed& Max(Fixed& lhs, Fixed& rhs);
	static const Fixed& Max(const Fixed& lhs, const Fixed& rhs);
};

std::ostream& operator<<(std::ostream& o, const Fixed& ref);

#endif
