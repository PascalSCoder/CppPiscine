#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <stack>
#include <deque>

// std::stack uses the following template:
/*
	template< class T, class Container = std::deque<T> >
*/

// Which tells us that:
// default, std::stack uses container_type deque (Double ended queue), unless specified otherwise.
// We can use the iterator from std::deque in our derived std::stack class

// In this derived template, we must specify the instantiation, because we otherwise cannot access members of std::stack<T>
// We do so by explicitly refering to the instantiation.
// That is done through either this->[var] or std::stack<T>::[var]

template<class T>
class	MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack& ref) : std::stack<T>(ref) {}
	MutantStack& operator=(const MutantStack& ref)
	{
		this->c = ref.c;
		return *this;
	}
	~MutantStack() {}



/*
	Iterators:
	begin	Return iterator to beginning (public member function )
	end		Return iterator to end (public member function )
	rbegin	Return reverse iterator to reverse beginning (public member function )
	rend	Return reverse iterator to reverse end (public member function )
*/

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}

	reverse_iterator rbegin()
	{
		return this->c.rbegin();
	}

	reverse_iterator rend()
	{
		return this->c.rend();
	}
};

#endif
