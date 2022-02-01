#pragma once

template<class T>
void	Swap(T& lhs, T& rhs)
{
	T tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}

template<class T>
T	Max(T const& lhs, T const& rhs)
{
	return rhs >= lhs ? rhs : lhs;
}

template<class T>
T	Min(T const& lhs, T const& rhs)
{
	return rhs <= lhs ? rhs : lhs;
}
