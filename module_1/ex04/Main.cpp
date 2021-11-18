#include <string>
#include <iostream>
#include <fstream>

/*
	Replace every occurence of s1 in str by s2.
 */
static std::string	Replace(std::string str, std::string s1, std::string s2)
{
	std::string	result;
	size_t		pos;
	size_t		head;

	head = 0;
	while (1)
	{
		pos = str.find(s1);
		if (pos == std::string::npos)
			break;
		result.append(str.substr(0, pos));
		str = str.substr(pos + s1.length());
		result.append(s2);
	}
	result.append(str);
	return result;
}

static void	WriteToDuplicate(std::string fname, std::string s1, std::string s2)
{
	if (s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "Please supply valid values for s1 and s2." << std::endl;
		return;
	}

	std::ifstream	inFile(fname);
	if (inFile.fail())
	{
		std::cout << "Invalid input file supplied." << std::endl;
		return;
	}

	std::ofstream	outFile(fname + ".replace");
	if (outFile.fail())
	{
		std::cout << "Error creating file: " << fname + ".replace" << std::endl;
		return;
	}

	std::string		line;

	while (std::getline(inFile, line))
	{
		line = Replace(line, s1, s2);
		outFile << line << std::endl;
	}
	outFile.close();
	inFile.close();
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		WriteToDuplicate(argv[1], argv[2], argv[3]);
	}
	else
		std::cout << "Run as replace [filename] [s1] [s2]" << std::endl;
}
