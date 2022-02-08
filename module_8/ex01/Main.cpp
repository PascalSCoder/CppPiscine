#include "Span.hpp"
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

void	CodamSuppliedTestCase()
{
	Span sp = Span(5);
	sp.AddNumber(6);
	sp.AddNumber(3);
	sp.AddNumber(17);
	sp.AddNumber(9);
	sp.AddNumber(11);
	std::cout << sp.ShortestSpan() << std::endl;
	std::cout << sp.LongestSpan() << std::endl;
}

int main()
{
	PrintTitle("Run Codam Supplied Test Cases");
	CodamSuppliedTestCase();

	PrintTitle("Create a span of size 2, with the same digits");
	{
		Span span(2);
		for (size_t i = 0; i < 2; i++)
		{
			span.AddNumber(42);
		}
		std::cout << span << std::endl;
		std::cout << "Shortest span: " << span.ShortestSpan() << std::endl;
		std::cout << "Longest span: " << span.LongestSpan() << std::endl;
	}
	

	PrintTitle("Construct a span of size 42");
	Span span(42);
	std::cout << span << std::endl;

	PrintTitle("Lets fill it up one by one!");
	for (size_t i = 0; i < 42; i++)
	{
		span.AddNumber(i);
	}
	std::cout << span << std::endl;
	std::cout << "Shortest span: " << span.ShortestSpan() << std::endl;
	std::cout << "Longest span: " << span.LongestSpan() << std::endl;

	PrintTitle("Lets try to make this crash by overflowing the span!");
	try
	{
		span.AddNumber(69);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	PrintTitle("We need another test for this... Span of size 0!");
	span = Span(0);
	std::cout << span << std::endl;
	try
	{
		span.AddNumber(69);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	PrintTitle("Lets fill a span with random digits");
	span = Span(10);
	for (size_t i = 0; i < 5; i++)
	{
		srand(i * time(0));
		span.AddNumber(rand());
	}
	std::cout << span << std::endl;

	PrintTitle("Now we use the range function to add a range of digits in one go :D");
	std::cout << "Appending:";
	std::vector<int> vec;
	for (size_t i = 0; i < 5; i++)
	{
		vec.push_back(i * 2);
		std::cout << " " << i * 2;
	}
	std::cout << std::endl;
	span.AddRange(vec.begin(), vec.end());
	std::cout << span << std::endl;
	std::cout << "Shortest span: " << span.ShortestSpan() << std::endl;
	std::cout << "Longest span: " << span.LongestSpan() << std::endl;

	PrintTitle("And finally, we add just one too much for our range...");
	span = Span(123456);
	std::cout << span << std::endl;
	vec = std::vector<int>();
	for (size_t i = 0; i < 123457; i++)
	{
		vec.push_back(i);
	}
	std::cout << "Adding " << vec.size() << " items in one go" << std::endl;
	try
	{
		span.AddRange(vec.begin(), vec.end());
		std::cout << span << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	PrintTitle("Done!");
}
