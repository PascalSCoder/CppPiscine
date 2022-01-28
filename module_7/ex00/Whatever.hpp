template<class T>
void	Swap(T& lhs, T& rhs)
{
	T tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}

template<class T>
T	Max(T& lhs, T& rhs)
{
	return rhs >= lhs ? rhs : lhs;
}

template<class T>
T	Min(T& lhs, T& rhs)
{
	return rhs <= lhs ? rhs : lhs;
}
