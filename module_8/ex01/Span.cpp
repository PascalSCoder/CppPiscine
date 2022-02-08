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

int const&	Span::operator[](uint i) const
{
	if (i >= _vec.size())
		throw IndexOutOfRangeException();
	return _vec[i];
}

int	Span::LongestSpan() const
{
	if (_vec.size() <= 1)
		throw NoSpanException();

	int lowest = *std::min_element(_vec.begin(), _vec.end());
	int highest = *std::max_element(_vec.begin(), _vec.end());
	return abs(highest - lowest);
}

int	Span::ShortestSpan() const
{
	if (_vec.size() <= 1)
		throw NoSpanException();

	std::vector<int> copy(_vec);
	std::sort(copy.begin(), copy.end());
	std::vector<const int>::iterator it = copy.begin();
	int shortest = INT_MAX;
	while (++it != copy.end())
	{
		int diff = *it - *(it - 1);
		if (diff < shortest)
			shortest = diff;
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

#pragma region Exceptions

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

#pragma endregion

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
