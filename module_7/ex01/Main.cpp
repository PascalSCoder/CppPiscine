#include "Iter.hpp"

#include <iostream>

void	StrToUpper(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
		std::cout << "Toupper called on: " << str[i] << std::endl;
	}
}

int main()
{
	std::string strings[] = 
	{
		"hello world",
		"this is nice",
		"if it will work"
	};

	Iter(strings, 3, &std::string::clear);

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << strings[i] << std::endl;
	}
}
