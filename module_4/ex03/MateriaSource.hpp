#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

#define MATERIA_MAX 4

class	MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& ref);
	MateriaSource& operator=(const MateriaSource& ref);
	~MateriaSource();

	void		LearnMateria(AMateria*);
	AMateria*	CreateMateria(std::string const & type);

private:
	AMateria	*_materias[MATERIA_MAX];

};

#endif
