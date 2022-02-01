#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

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

void Identify(Base* p)
{
	if (dynamic_cast<A *>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != nullptr)
		std::cout << "C" << std::endl;
}

void Identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}
}

Base * Generate(void)
{
	static unsigned int sRand;
	sRand += time(0);
	srand(sRand);

	int selection = rand() % 3;
	if (selection == 0)
		return new A();
	else if (selection == 1)
		return new B();
	else
		return new C();
}

int main()
{
	PrintTitle("Check a couple of random generated types");
	for (size_t i = 0; i < 3; i++)
	{
		Base *base = Generate();
		Identify(base);
		Identify(*base);
		delete(base);
		std::cout << std::endl;
	}
}
