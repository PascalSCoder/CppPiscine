#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
public:
	Fixed();
	Fixed(const Fixed& ref);
	Fixed(const int val);
	Fixed(const float val);
	~Fixed();

	Fixed& operator=(const Fixed& ref);
	
	int		GetRawBits() const;
	void	SetRawBits(int const raw);
	float	ToFloat() const;
	int		ToInt() const;

private:
	static const int	_fractBits = 8;
	int					_value;
};

std::ostream&	operator<<(std::ostream& o, const Fixed& ref);

#endif
