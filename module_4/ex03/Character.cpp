#include "Character.hpp"

#include <string>
#include <iostream>

Character::Character(std::string name) :_name(name)
{
	std::cout << name << " ctor called" << std::endl;

	memset(_materias, 0, sizeof(AMateria *) * MATERIA_MAX);
}

Character::Character(const Character& ref)
{
	std::cout << ref._name << " copy ctor called" << std::endl;

	memset(_materias, 0, sizeof(AMateria *) * MATERIA_MAX);
	*this = ref;
}

Character&	Character::operator=(const Character& ref)
{
	std::cout << ref._name << " assignation operator called" << std::endl;

	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		if (_materias[i] != nullptr)
			delete _materias[i];
	}
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		_materias[i] = ref._materias[i];
	}
	_name = ref._name;
	return *this;
}

Character::~Character()
{
	std::cout << _name << " dtor called" << std::endl;

	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		if (_materias[i] != nullptr)
			delete _materias[i];
	}
}

std::string const& Character::GetName() const
{
	return _name;
}

void Character::Equip(AMateria *m)
{
	for (size_t i = 0; i < MATERIA_MAX; i++)
	{
		if (_materias[i] == nullptr)
		{
			std::cout << _name << " equips a " << m->GetType() << std::endl;
			_materias[i] = m;
			return;
		}
	}
	std::cout << _name << " couldn't equip " << m->GetType() << " because their inventory is full" << std::endl;
}

void Character::Unequip(int idx)
{
	if (idx >= 0 && idx < MATERIA_MAX && _materias[idx] != nullptr)
	{
		std::cout << _name << " unequips id " << idx << std::endl;
		_materias[idx] = nullptr;
	}
	else
		std::cout << _name << " was not carrying anything in slot " << idx << std::endl;
}

void Character::Use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < MATERIA_MAX && _materias[idx] != nullptr)
	{
		std::cout << _name << " uses " << _materias[idx]->GetType() << " on " << target.GetName() << std::endl;
		_materias[idx]->Use(target);
	}
	else
		std::cout << _name << " tried to use a nonexisting materia at slot " << idx << std::endl;
}
