#include <Phonebook.hpp>
#include <Utils.hpp>

#include <string>
#include <iostream>

Phonebook::Phonebook()
{
	_head = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::Add()
{
	Contact *current = &_contacts[_head % 8];

	std::cout << "Follow the steps below to add a new contact." << std::endl;

	std::cout << "First name: ";
	current->FirstName = ReadLine();

	std::cout << "Last name: ";
	current->LastName = ReadLine();

	std::cout << "Nickname: ";
	current->NickName = ReadLine();

	std::cout << "Phone number: ";
	current->Phone = ReadLine();

	std::cout << "Darkest secret: ";
	current->Secret = ReadLine();

	std::cout << "New contact " << current->FirstName << " added!" << std::endl;
	_head++;
}

void	Phonebook::Search() const
{
	int			index;
	std::string	input;

	if (_head == 0)
		std::cout << "Your phonebook is still empty :( first ADD some contacts." << std::endl;
	else
	{
		std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
		std::cout << "__________|__________|__________|__________" << std::endl;
		for (int i = 0; i < 8 && i < _head; i++)
		{
			std::cout << Trunc(i) << "|" << Trunc(_contacts[i].FirstName) << "|" <<  Trunc(_contacts[i].LastName) << "|" << Trunc(_contacts[i].NickName) << std::endl;
		}
		std::cout << "From which contact's index would you like to display details?" << std::endl;
		input = ReadLine();
		std::cout << "input: " << input << std::endl;
		if (IsStrDigitOnly(input))
		{
			index = Stoi(input);
			if (index <= 7 && index < _head)
			{
				std::cout << "First name: " << _contacts[index].FirstName << std::endl;
				std::cout << " Last name: " << _contacts[index].LastName << std::endl;
				std::cout << "  Nickname: " << _contacts[index].NickName << std::endl;
				std::cout << "  Phone nr: " << _contacts[index].Phone << std::endl;
				std::cout << "    Secret: " << _contacts[index].Secret << std::endl;
				return;
			}
		}
		std::cout << "That's not really an option right now..." << std::endl;
	}
}
