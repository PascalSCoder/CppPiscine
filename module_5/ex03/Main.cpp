#include <iostream>
#include <exception>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
	Intern intern;

	Bureaucrat chimp("Chimp", 150);
	Bureaucrat boss("Boss", 1);

	Form *form;

	// Fail at making forms
	PrintTitle("Fail at making forms");
	form = intern.MakeForm("Presidentiall", "TARGUT");
	form = intern.MakeForm("Shrubberyy", "TARGUT");
	form = intern.MakeForm("Robotomyy", "TARGUT");


	// Successfully create forms
	PrintTitle("Successfully create forms");
	form = intern.MakeForm("Presidential", "TARGUT");
	delete form;
	form = intern.MakeForm("Shrubbery", "TARGUT");
	delete form;
	form = intern.MakeForm("Robotomy", "TARGUT");

	// Work with it...
	PrintTitle("Work with it...");
	chimp.SignForm(*form);
	boss.SignForm(*form);

	// Execute!
	PrintTitle("Execute!");
	boss.ExecuteForm(*form);

	// Clean heap
	delete form;

	PrintTitle("Done!");
}
