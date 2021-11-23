#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) / Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::Max( a, b ) << std::endl;

	std::cout << c << std::endl;
	std::cout << c.ToInt() << std::endl;
	std::cout << c.ToFloat() << std::endl;

	std::cout << std::endl << "Comparisons overload:" << std::endl;

	a = Fixed(3);
	if (a <= Fixed(3.1f))
		std::cout << "Lower/equal" << std::endl;
	else
		std::cout << "higher" << std::endl;

	if (a == Fixed(3.1f))
		std::cout << "Equal" << std::endl;
	else
		std::cout << "Not equal" << std::endl;

	if (a >= Fixed(3.1f))
		std::cout << "Higher/equal" << std::endl;
	else
		std::cout << "Lower" << std::endl;

	if (a != Fixed(3.0f))
		std::cout << "Not equal" << std::endl;
	else
		std::cout << "Equal" << std::endl;
	return 0;
}
