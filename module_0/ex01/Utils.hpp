#ifndef UTILS_HPP
# define UTILS_HPP

#include <string>

#define BUFFSIZE 1024

std::string	ReadLine();
int			Stoi(std::string str);
bool		IsStrDigitOnly(std::string str);
std::string	Trunc(std::string str);
std::string	Trunc(int number);

#endif
