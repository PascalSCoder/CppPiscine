#include <Span.hpp>

#include <string>
#include <iostream>
#include <algorithm>

Span::Span(uint n) : _size(n)
{
}

Span::Span(const Span& ref)
{
	*this = ref;
}

Span&	Span::operator=(const Span& ref)
{
	_size = ref._size;
	_vec = ref._vec;
	return *this;
}

Span::~Span()
{
}

int	Span::LongestSpan() const
{
	if (_vec.size() <= 1)
		throw NoSpanException();

	int lowest = INT_MAX;
	int highest = 0;
	for (size_t i = 0; i < _vec.size(); i++)
	{
		int tmp = _vec[i];
		if (tmp < lowest)
			lowest = tmp;
		if (tmp > highest)
			highest = tmp;
	}
	return abs(highest - lowest);
}

int	Span::ShortestSpan() const
{
	if (_vec.size() <= 1)
		throw NoSpanException();

	int shortest = INT_MAX;
	for (size_t i = 0; i < _vec.size(); i++)
	{
		for (size_t j = 0; j < _vec.size(); j++)
		{
			if (i == j)
				continue;
			int tmp = abs(_vec[i] - _vec[j]);
			if (tmp < shortest)
				shortest = tmp;
		}
	}
	return shortest;
}

uint	Span::GetCount() const
{
	return _vec.size();
}

size_t	Span::GetSize() const
{
	return _size;
}

void	Span::AddNumber(int n)
{
	if (_vec.size() < _size)
		_vec.push_back(n);
	else
		throw SpanFullException();
}

char const*	SpanFullException::what() const throw()
{
	return "Span is full exception";
}

char const* NoSpanException::what() const throw()
{
	return "No span possible exception";
}

char const* IndexOutOfRangeException::what() const throw()
{
	return "No span possible exception";
}

int const&	Span::operator[](uint i) const
{
	if (i >= _vec.size())
		throw IndexOutOfRangeException();
	return _vec[i];
}

std::ostream&	operator<<(std::ostream& os, Span const& span)
{
	std::cout << span.GetCount() << "/" << span.GetSize() << ":";
	size_t i;
	for (i = 0; i < span.GetCount(); i++)
	{
		std::cout << " " << span[i];
	}
	return os;
}
