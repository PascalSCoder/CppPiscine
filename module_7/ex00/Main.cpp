#include <iostream>
#include <Whatever.hpp>

#pragma region Debug

#define C_RESET  "\x1B[0m"
#define C_RED  "\x1B[31m"
#define C_GREEN  "\x1B[32m"
#define C_YELLOW  "\x1B[33m"
#define C_BLUE  "\x1B[34m"
#define C_MAGENTA  "\x1B[35m"
#define C_CYAN  "\x1B[36m"
#define C_WHITE  "\x1B[37m"

void PrintTitle(std::string str)
{
	std::cout << std::endl << C_CYAN << str << C_RESET << std::endl;
}

#pragma endregion

int main( void )
{
	PrintTitle("Run tests from subject sheet");
	int a = 2;
	int b = 3;
	::Swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::Min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::Max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::Swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::Min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::Max( c, d ) << std::endl;

	PrintTitle("Done!");
	return 0;
}
