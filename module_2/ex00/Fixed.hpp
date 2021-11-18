#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
private:
	int _fixedPointValue;
	static const int _fract = 8;

public:
	Fixed();
	Fixed(const Fixed& ref);
	Fixed& operator=(const Fixed& ref);
	~Fixed();
	int GetRawBits() const;
	void SetRawBits(int const raw);
};

#endif
