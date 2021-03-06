#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
public:
	Zombie(std::string name);
	~Zombie();

	void	Announce() const;

private:
	std::string	_name;

};

#endif
