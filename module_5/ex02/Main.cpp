#include <iostream>
#include <exception>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	try
	{
		Bureaucrat chimp("Chimp", 150);
		Bureaucrat president("President", 5);
		Bureaucrat shrub("Shrub", 137);
		Bureaucrat robot("Robot", 45);

		Form *shrubbery = new ShrubberyCreationForm("well_painted");
		Form *robotomy = new RobotomyRequestForm("iRobot");
		Form *presidential = new PresidentialPardonForm("iPresident?");

		// Fail signing and executing
		PrintTitle("Fail signing and executing:");
		shrub.SignForm(*robotomy);
		shrub.SignForm(*presidential);
		shrub.ExecuteForm(*shrubbery);

		// Successfully sign and execute
		PrintTitle("Successfully sign and execute:");
		shrub.SignForm(*shrubbery);
		shrub.ExecuteForm(*shrubbery);

		robot.SignForm(*robotomy);
		robot.ExecuteForm(*robotomy);

		president.SignForm(*presidential);
		president.ExecuteForm(*presidential);

		// Double check if we can sign again
		PrintTitle("Double check if we can sign again:");
		shrub.SignForm(*robotomy);

		// Clean heap
		delete shrubbery;
		delete robotomy;
		delete presidential;

		PrintTitle("Done!");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
