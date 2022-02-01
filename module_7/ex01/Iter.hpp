#pragma once

#include <iostream>

template<class T>
void	Iter(T const *array, size_t length, void (*f)(T const&))
{
	for (size_t i = 0; i < length; i++)
	{
		f(array[i]);
	}
}
