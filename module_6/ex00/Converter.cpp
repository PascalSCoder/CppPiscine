#include <Converter.hpp>

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>

Converter::Converter(std::string input)
{
	GiveInput(input);
}

Converter::Converter()
{
}

Converter::Converter(const Converter& ref)
{
	*this = ref;
}

Converter&	Converter::operator=(const Converter& ref)
{
	_rawValue = ref._rawValue;
	_isCharValid = ref._isCharValid;
	_isIntValid = ref._isIntValid;
	_isFloatValid = ref._isFloatValid;
	_isDoubleValid = ref._isDoubleValid;
	return *this;
}

Converter::~Converter()
{
}

// Do we need to check the input for invalid input?
// Nothing about this is stated in the subject
void	Converter::GiveInput(std::string input)
{
	_isCharValid = true;
	_isIntValid = true;
	_isFloatValid = true;
	_isDoubleValid = true;

	if (!isdigit(input[0]) && input.length() == 1)
	{
		// it must be a char
		_rawValue = input[0];
	}
	else
	{
		if (!isdigit(input[0]))
			_isCharValid = false;

		// we can just try to cast this
		try
		{
			_rawValue = std::stod(input);
		}
		catch(const std::exception& e)
		{
			_isCharValid = false;
			_isIntValid = false;
			_isFloatValid = false;
			_isDoubleValid = false;
		}
	}
}

void	Converter::PrintAsChar() const
{
	std::cout << "Char: ";
	if (!_isCharValid)
		std::cout << "Impossible" << std::endl;
	else if (!std::isprint(_rawValue))
		std::cout << "Non displayable" << std::endl;
	else
	{
		std::cout << (char)_rawValue << std::endl;
	}
}

void	Converter::PrintAsInt() const
{
	std::cout << "Int: ";
	if (!_isIntValid || (long)_rawValue < INT32_MIN || (long)_rawValue > INT32_MAX)
		std::cout << "Impossible" << std::endl;
	else
	{
		int value = static_cast<int>(_rawValue);
		std::cout << value << std::endl;
	}
}

void	Converter::PrintAsFloat() const
{
	std::cout << "Float: ";
	if (!_isFloatValid)
		std::cout << "Impossible" << std::endl;
	else
	{
		float value = static_cast<float>(_rawValue);
		float fract;
		if (std::modf(value, &fract) == 0)
			std::cout << std::fixed << std::setprecision(1) << value << "f" << std::endl;
		else
			std::cout << value << "f" << std::endl;
	}
}

void	Converter::PrintAsDouble() const
{
	std::cout << "Double: ";
	if (!_isDoubleValid)
		std::cout << "Impossible" << std::endl;
	else
	{
		double value = static_cast<double>(_rawValue);
		double fract;
		if (std::modf(value, &fract) == 0)
			std::cout << std::fixed << std::setprecision(1) << value << std::endl;
		else
			std::cout << value << std::endl;
	}
}
