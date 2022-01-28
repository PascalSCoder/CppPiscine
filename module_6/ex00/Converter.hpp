#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <string>

class	Converter
{
public:
	Converter();
	Converter(std::string input);
	Converter(const Converter& ref);
	Converter& operator=(const Converter& ref);
	~Converter();

	void	PrintAsChar() const;
	void	PrintAsInt() const;
	void	PrintAsFloat() const;
	void	PrintAsDouble() const;

	void	GiveInput(std::string input);

private:

	double	_rawValue;

	bool	_isCharValid;
	bool	_isIntValid;
	bool	_isFloatValid;
	bool	_isDoubleValid;


};

#endif
