#include <iostream>
#include <exception>

#include "Form.hpp"
#include "Bureaucrat.hpp"

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

int main()
{
	Bureaucrat boss("Boss", 1);
	Bureaucrat chimp("Chimp", 146);

	Form ezPzForm("EzPzForm", 145, 130);
	Form hardForm("HardForm", 30, 1);

	PrintTitle("Fail at signing form");
	chimp.SignForm(ezPzForm);
	chimp.SignForm(hardForm);

	PrintTitle("Boss teaches chimp...");
	std::cout << chimp << std::endl;
	chimp.IncrGrade();
	std::cout << chimp << std::endl;

	PrintTitle("Succesfully sign forms");
	chimp.SignForm(ezPzForm);
	boss.SignForm(hardForm);

	PrintTitle("Try to sign it again?");
	chimp.SignForm(ezPzForm);
	boss.SignForm(hardForm);

	PrintTitle("Done!");
}
