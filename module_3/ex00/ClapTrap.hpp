#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>

class	ClapTrap
{
private:
	std::string	_name;
	int			_hp;
	int			_energy;
	int			_ad;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ref);
	ClapTrap& operator=(const ClapTrap& ref);
	~ClapTrap();

	void	Attack(std::string const& target) const;
	void	TakeDamage(unsigned int amount) const;
	void	BeRepaired(unsigned int amount) const;
};

#endif
