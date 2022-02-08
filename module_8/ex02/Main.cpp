#include "MutantStack.hpp"
#include <iostream>
#include <vector>
#include <deque>

#define SIZE 10

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

void	Mutant(std::vector<int>& ints)
{
	PrintTitle("MutantStack first");
	MutantStack<int> mstack;

	for (size_t i = 0; i < SIZE; i++)
	{
		mstack.push(ints[i]);
	}
	std::cout << "Added: " << mstack.size() << std::endl;
	
	for (size_t i = 0; i < SIZE / 2; i++)
	{
		mstack.pop();
	}
	std::cout << "Popped till size: " << mstack.size() << std::endl;
	
	std::cout << "Top: " << mstack.top() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator end = mstack.end();
	PrintTitle("Iter forwards >>>>>>");
	while (it != end)
	{
		std::cout << *it << std::endl;
		it++;
	}

	PrintTitle("Reverse iter <<<<<<");
	MutantStack<int>::reverse_iterator rBegin = mstack.rbegin();
	MutantStack<int>::reverse_iterator rEnd = mstack.rend();
	while (rBegin != rEnd)
	{
		std::cout << *rBegin << std::endl;
		rBegin++;
	}

	// it = mstack.end() - 1;
	// end = mstack.begin();
	// while (it >= end)
	// {
	// 	std::cout << *it << std::endl;
	// 	it--;
	// }

}

void	Deque(std::vector<int>& ints)
{
	PrintTitle("Then the STL Deque");
	std::deque<int> deque;

	for (size_t i = 0; i < SIZE; i++)
	{
		deque.push_back(ints[i]);
	}
	std::cout << "Added: " << deque.size() << std::endl;

	for (size_t i = 0; i < SIZE / 2; i++)
	{
		deque.pop_back();
	}
	std::cout << "Popped till size: " << deque.size() << std::endl;

	std::cout << "Top: " << deque.back() << std::endl;
	std::deque<int>::iterator it = deque.begin();
	std::deque<int>::iterator end = deque.end();

	PrintTitle("Iter forwards >>>>>>");
	while (it != end)
	{
		std::cout << *it << std::endl;
		it++;
	}

	PrintTitle("Reverse iter <<<<<<");
	std::deque<int>::reverse_iterator rBegin = deque.rbegin();
	std::deque<int>::reverse_iterator rEnd = deque.rend();
	while (rBegin != rEnd)
	{
		std::cout << *rBegin << std::endl;
		rBegin++;
	}
}

int main()
{
	std::vector<int> ints;
	for (size_t i = 0; i < SIZE; i++)
	{
		srand(i * time(0));
		ints.push_back(rand() % 10);
	}
	Mutant(ints);
	Deque(ints);

	PrintTitle("Lets try iterating over some strings as well");
	MutantStack<std::string> strings;
	strings.push("One");
	strings.push("For");
	strings.push("All");
	strings.push("AND");
	strings.push("All");
	strings.push("For");
	strings.push("One");
	strings.push(".");

	MutantStack<std::string>::iterator begin = strings.begin();
	MutantStack<std::string>::iterator end = strings.end();

	while (begin != end)
	{
		std::cout << *begin << std::endl;
		begin++;
	}

	PrintTitle("Reverse...");
	MutantStack<std::string>::reverse_iterator rBegin = strings.rbegin();
	MutantStack<std::string>::reverse_iterator rEnd = strings.rend();

	while (rBegin != rEnd)
	{
		std::cout<< *rBegin << std::endl;
		rBegin++;
	}

	PrintTitle("Done!");
}
