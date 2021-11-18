#include <Utils.hpp>
#include <iostream>

std::string	ReadLine()
{
	char	buff[BUFFSIZE];

	std::cin.getline(buff, BUFFSIZE);
	if (std::cin.fail())
		exit(1);
	return buff;
}

int	Stoi(std::string str)
{
	int	result;

	result = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		result *= 10;
		result += str[i] - '0';
	}
	return result;
}

bool	IsStrDigitOnly(std::string str)
{
	if (str.length() == 0)
		return false;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

std::string	Trunc(int number)
{
	std::string	to_print;
	char		str[11];
	int			i;

	std::memset(str, ' ', 10);
	str[10] = '\0';
	i = 0;
	while (1)
	{
		str[i] = number % 10 + '0';
		number /= 10;
		i++;
		if (number == 0)
			break;
	}
	return std::string(str);
}

std::string	Trunc(std::string str)
{
	std::string	to_print;

	if (str.length() > 10)
	{
		to_print = str.substr(0, 10);
		to_print[9] = '.';
	}
	else
	{
		for (size_t i = 0; i < 10 - str.length(); i++)
		{
			to_print.append(" ");
		}
		to_print.append(str);
	}
	return to_print;
}
