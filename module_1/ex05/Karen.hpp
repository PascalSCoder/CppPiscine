#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class	Karen
{
public:
	void	Complain(std::string level);

private:
	void	Debug();
	void	Info();
	void	Warning();
	void	Error();
};

#endif
