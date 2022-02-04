#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

class	Span
{
public:
	Span(uint n);
	Span(const Span& ref);
	Span&		operator=(const Span& ref);
	int const&	operator[](int i) const;
	~Span();

	void	AddNumber(int n);

	template<typename iterator>
	void	AddRange(iterator begin, iterator end)
	{
		while (begin != end)
		{
			AddNumber(*begin);
			begin++;
		}
	}

	int		ShortestSpan() const;
	int		LongestSpan() const;
	size_t	GetSize() const;
	uint	GetCount() const;

private:
	std::vector<int>	_vec;
	uint	_count;
	uint	_size;
};

class	SpanFullException : public std::exception
{
	virtual char const*	what() const throw();
};

class	NoSpanException : public std::exception
{
	virtual char const* what() const throw();
};

std::ostream& operator<<(std::ostream& os, Span const& span);

#endif
