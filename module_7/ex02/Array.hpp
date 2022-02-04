#pragma once

#include <cstring>

template<class T>
class Array
{
public:
	Array() : _array(nullptr)
	{
		_size = 0;
	}

	Array(unsigned int n)
	{
		if (n == 0)
			_array = nullptr;
		else
		{
			_array = new T[n];
			std::memset(_array, 0, n * sizeof(T));
		}
		_size = n;
	}

	Array(Array const& ref) : _array(nullptr)
	{
		*this = ref;
	}

	Array&	operator=(Array const& ref)
	{
		if (_array != nullptr)
			delete[] _array;
		_size = ref._size;
		if (_size == 0)
			_array = nullptr;
		else
		{
			_array = new T[_size];
			for (size_t i = 0; i < _size; i++)
			{
				_array[i] = ref._array[i];
			}
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

	T const&	operator[](unsigned int i) const
	{
		if (i >= _size)
			throw std::exception();
		else
			return _array[i];
	}

	~Array()
	{
		if (_array != nullptr)
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
