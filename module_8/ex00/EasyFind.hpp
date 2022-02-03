#pragma once

#include <algorithm>

template<class T>
typename T::iterator	EasyFind(T& ref, int i)
{
	return std::find(ref.begin(), ref.end(), i);
}
