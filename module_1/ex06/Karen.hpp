#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class	Karen
{
public:
			Karen(std::string level);
	void	Complain() const;

private:
	enum	_complaintLevels { LevelInsignificant = -1, LevelDebug, LevelInfo, LevelWarning, LevelError };
	int		_filterLevel;

	int		GetLevel(std::string level) const;
	void	Debug() const;
	void	Info() const;
	void	Warning() const;
	void	Error() const;
	void	Insignificant() const;
};

#endif
