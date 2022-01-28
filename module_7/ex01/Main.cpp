#include "Iter.hpp"

#include <iostream>

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

template<class T>
void	Print(T obj)
{
	std::cout << obj << std::endl;
}

int main()
{
	std::string strings[] = 
	{
		"Dogs",
		"are way more fun",
		"than cats",
		"is a very",
		"polarizing",
		"statement :p"
	};

	PrintTitle("Strings! Iter 0 items (ha- ha)");
	Iter(strings, 0, &Print);

	PrintTitle("Iter 3 items");
	Iter(strings, 3, &Print);

	PrintTitle("Iter 6 items!");
	Iter(strings, 6, &Print);

	PrintTitle("Floats! iter 3 items");
	float floats[] = 
	{
		0.0f,
		123.123f,
		456.456f
	};
	Iter(floats, 3, &Print);
}
