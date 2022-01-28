#pragma once

#include <cstring>

template<class T>
class Array
{
public:
	Array()
	{
		_size = 0;
	}

	Array(unsigned int n)
	{
		_array = new T[n];
		std::memset(_array, 0, n * sizeof(T));
		_size = n;
	}

	Array(Array const& ref)
	{
		*this = ref;
	}


	Array&	operator=(Array const& ref)
	{
		_size = ref._size;
		_array = new T[_size];
		for (size_t i = 0; i < _size; i++)
		{
			_array[i] = ref._array[i];
		}
		return *this;
	}

	T&	operator[](unsigned int i)
	{
		if (i >= _size)
			throw std::exception();
		else
			return _array[i];
	}

	T	operator[](unsigned int i) const
	{
		if (i >= _size)
			throw std::exception();
		else
			return _array[i];
	}

	~Array()
	{
		delete[] _array;
	}

	unsigned int Size() const
	{
		return _size;
	}

private:
	unsigned int _size;
	T			*_array;
};
