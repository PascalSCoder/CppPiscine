#include <iostream>
#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.ToInt() << " as integer" << std::endl;
	std::cout << "b is " << b.ToInt() << " as integer" << std::endl;
	std::cout << "c is " << c.ToInt() << " as integer" << std::endl;
	std::cout << "d is " << d.ToInt() << " as integer" << std::endl;
	return 0;
}
