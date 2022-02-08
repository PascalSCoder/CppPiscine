#pragma once

#include <algorithm>
#include <stdexcept>

/*
	Returns the first occurence of i in ref.
	If no occurence is found, throws NotFoundException
*/
template<class T>
typename T::iterator	EasyFind(T & ref, int i)
{
	typename T::iterator it = std::find(ref.begin(), ref.end(), i);
	if (it == ref.end())
		throw std::runtime_error("NotFoundException");
	return it;
}
