#include <MateriaSource.hpp>

#include <string>
#include <iostream>

MateriaSource::MateriaSource()
{

}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
	*this = ref;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& ref)
{
	(void)ref;
	return *this;
}

MateriaSource::~MateriaSource()
{

}
