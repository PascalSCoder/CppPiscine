#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
public:
	Fixed();
	Fixed(const Fixed& ref);
	Fixed& operator=(const Fixed& ref);
	~Fixed();

	int		GetRawBits() const;
	void	SetRawBits(int const raw);

private:
	static const int	_fractBits = 8;
	int					_fixedPointValue;
};

#endif
