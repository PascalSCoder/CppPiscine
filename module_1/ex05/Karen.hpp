#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class	Karen
{
public:
	void	Complain(std::string level);

private:
	void	Info();
	void	Debug();
	void	Warning();
	void	Error();
};

#endif
