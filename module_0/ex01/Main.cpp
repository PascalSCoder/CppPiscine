#include <string>
#include <iostream>

#include <Utils.hpp>
#include <Phonebook.hpp>

int	main(void)
{
	std::string	input;
	Phonebook	phonebook;

	std::cout << "Commands are:" << std::endl;
	std::cout << "[ADD] to add a new contact." << std::endl;
	std::cout << "[SEARCH] to search for a saved contact." << std::endl;
	std::cout << "[EXIT] to exit the program." << std::endl;

	while (true)
	{
		input = ReadLine();
		if (input == "ADD")
			phonebook.Add();
		else if (input == "SEARCH")
			phonebook.Search();
		else if (input == "EXIT")
			break ;
	}
}
