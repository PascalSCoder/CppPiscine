#include <iostream>
#include <vector>

#include "EasyFind.hpp"

#define SIZE 1

int main()
{
	std::vector<int> vec;
	std::vector<int>::iterator iter;

	for (size_t i = 0; i < SIZE; i++)
	{
		vec.push_back(i);
	}

	try
	{
		iter = EasyFind(vec, SIZE);
		std::cout << "Find non-existing: " << *iter << std::endl;

		iter = vec.end();
		std::cout << "End: " << *iter << std::endl;

		vec.push_back(SIZE);
		std::cout << "New end: " << *iter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	iter = EasyFind(vec, 0);
	// iter++;
	std::cout << *iter << std::endl;
}
