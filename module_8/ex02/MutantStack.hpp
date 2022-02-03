#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <stack>
#include <deque>

// template <class Category, class T, class Distance = ptrdiff_t,
// 			class Pointer = T*, class Reference = T&>
// struct iterator {
// 	typedef T			value_type;
// 	typedef Distance	difference_type;
// 	typedef Pointer		pointer;
// 	typedef Reference	reference;
// 	typedef Category	iterator_category;
// };

// std::stack default uses container_type deque (Double ended queue), unless specified otherwise.
template<class T>
class	MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>();
	MutantStack(const MutantStack& ref) : std::stack<T>(ref);
	MutantStack& operator=(const MutantStack& ref)
	{
		(void)ref;
		return *this;
	}
	~MutantStack();

	typedef typename MutantStack::container_type::iterator iterator;

	iterator& begin()
	{
		return iterator.begin();
	}

	iterator& end()
	{
		return iterator.end();
	}


};

#endif
