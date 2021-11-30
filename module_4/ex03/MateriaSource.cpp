#include <MateriaSource.hpp>

#include <string>
#include <iostream>

MateriaSource::MateriaSource()
{
	memset(_materias, 0, sizeof(AMateria *) * MATERIA_MAX);
}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
	memset(_materias, 0, sizeof(AMateria *) * MATERIA_MAX);
	*this = ref;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& ref)
{
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		_materias[i] = ref._materias[i];
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		if (_materias[i] != nullptr)
			delete _materias[i];
	}
}

void MateriaSource::LearnMateria(AMateria *toLearn)
{
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		if (_materias[i] == nullptr)
		{
			_materias[i] = toLearn;
			std::cout << "MateriaSource learned " << toLearn->GetType() << std::endl;
			return;
		}
	}
	std::cout << "MateriaSource is full! Couldn't learn " << toLearn->GetType() << std::endl;
}

AMateria* MateriaSource::CreateMateria(std::string const & type)
{
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		if (_materias[i] != nullptr && _materias[i]->GetType() == type)
			return _materias[i]->Clone();
	}
	return nullptr;
}
