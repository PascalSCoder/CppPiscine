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
	PrintTitle("Run Codam Supplied Test Cases");

	Span sp = Span(5);
	sp.AddNumber(6);
	sp.AddNumber(3);
	sp.AddNumber(17);
	sp.AddNumber(9);
	sp.AddNumber(11);
	std::cout << sp.ShortestSpan() << std::endl;
	std::cout << sp.LongestSpan() << std::endl;
}

void	SizeTwoSameDigits()
{
	PrintTitle("Create a span of size 2, with the same digits");
	Span span(2);
	for (size_t i = 0; i < 2; i++)
	{
		span.AddNumber(42);
	}
	std::cout << span << std::endl;
	std::cout << "Shortest span: " << span.ShortestSpan() << std::endl;
	std::cout << "Longest span: " << span.LongestSpan() << std::endl;
}

void	FillSpanSize42()
{
	PrintTitle("Span of size 42, filled with [index ^ 2]");

	Span span(42);
	for (size_t i = 0; i < 42; i++)
	{
		span.AddNumber(i * i);
	}
	std::cout << span << std::endl;
	std::cout << "Shortest span: " << span.ShortestSpan() << std::endl;
	std::cout << "Longest span: " << span.LongestSpan() << std::endl;
}

void	OverflowChecks()
{
	PrintTitle("Lets try to make this crash by overflowing the span!");

	{
		Span span(0);
		try
		{
			span.AddNumber(42);
			std::cout << "ERROR: THIS LINE SHOULD NOT BE PRINTED" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		Span span(3);
		try
		{
			for (size_t i = 0; i < 4; i++)
			{
				span.AddNumber(i);
			}
			std::cout << "ERROR: THIS LINE SHOULD NOT BE PRINTED" << std::endl;
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

void	RandomValuesAndAppend()
{
	PrintTitle("Lets fill a span with random digits");

	Span span = Span(10);
	for (size_t i = 0; i < 5; i++)
	{
		srand(i * time(0));
		span.AddNumber(rand());
	}
	std::cout << span << std::endl;

	PrintTitle("Append 5 numbers with AddRange()");

	int arr[] = { 2, 4, 6, 8, 10 };
	span.AddRange(arr, arr + 5);
	std::cout << span << std::endl;
	std::cout << "Shortest span: " << span.ShortestSpan() << std::endl;
	std::cout << "Longest span: " << span.LongestSpan() << std::endl;
}

void	AddRangeOverflow()
{
	PrintTitle("Fill span with AddRange(), but overflow the buffer by 1 (123457/123456 digits)");

	int arr[123457];
	Span span(123456);
	try
	{
		span.AddRange(arr, arr + 123457);
		std::cout << "ERROR: THIS LINE SHOULD NOT BE PRINTED" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	CodamSuppliedTestCase();
	SizeTwoSameDigits();
	FillSpanSize42();
	OverflowChecks();
	RandomValuesAndAppend();
	AddRangeOverflow();

	PrintTitle("Done!");
}
