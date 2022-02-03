#include <Span.hpp>

#include <string>
#include <iostream>

Span::Span(uint n) : _count(0), _size(n)
{
}

Span::Span(const Span& ref)
{
	*this = ref;
}

Span&	Span::operator=(const Span& ref)
{
	_size = ref._size;
	_count = ref._count;
	_vec = ref._vec;
	return *this;
}

Span::~Span()
{
}

int	Span::LongestSpan() const
{
	if (_count <= 0)
		throw NoSpanException();

	int longest = 0;
	for (size_t i = 0; i < _count; i++)
	{
		for (size_t j = 0; j < _count; j++)
		{
			if (i == j)
				continue;
			int tmp = abs(_vec[i] - _vec[j]);
			if (tmp > longest)
				longest = tmp;
		}
	}
	return longest;
}

int	Span::ShortestSpan() const
{
	if (_count <= 0)
		throw NoSpanException();

	int shortest = INT_MAX;
	for (size_t i = 0; i < _count; i++)
	{
		for (size_t j = 0; j < _count; j++)
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
	return _count;
}

size_t	Span::GetSize() const
{
	return _size;
}

void	Span::AddNumber(int n)
{
	if (_count < _size)
	{
		_vec.push_back(n);
		_count++;
	}
	else
		throw SpanFullException();
}

// void	Span::AddRange(std::vector<int>::iterator first, std::vector<int>::iterator last)
// {
// 	while (first != last)
// 	{
// 		AddNumber(*first);
// 		first++;
// 	}
// }

char const*	SpanFullException::what() const throw()
{
	return "Span is full exception";
}

char const* NoSpanException::what() const throw()
{
	return "No span possible exception";
}

int const&	Span::operator[](int i) const
{
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
