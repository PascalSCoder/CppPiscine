#include <iostream>

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// void Simulate()
// {
// 	Character kees("Kees");
// 	Character keesCopy(kees);

// 	kees.Use(-1, kees);
// 	kees.Use(0, kees);
// 	kees.Use(1, kees);
// 	kees.Use(2, kees);
// 	kees.Use(3, kees);
// 	kees.Use(4, kees);
// }

// void Simulate()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->LearnMateria(new Ice());
// 	src->LearnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->CreateMateria("ice");
// 	me->Equip(tmp);
// 	tmp = src->CreateMateria("cure");
// 	me->Equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->Use(0, *bob);
// 	me->Use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// }

void Simulate()
{
	ICharacter* me = new Character("me");

	IMateriaSource* src = new MateriaSource();
	src->LearnMateria(new Ice());
	src->LearnMateria(new Cure());

	AMateria* tmp;
	tmp = src->CreateMateria("cure");

	me->Equip(tmp);
	me->Equip(src->CreateMateria("ice"));
	me->Equip(src->CreateMateria("ice"));
	me->Equip(src->CreateMateria("ice"));
	me->Unequip(0);
	delete tmp;

	tmp = src->CreateMateria("ice");
	me->Equip(tmp);
	ICharacter* bob = new Character("bob");
	me->Use(0, *bob);
	me->Use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

int main(int, char **argv)
{
	Simulate();
	system(std::string("leaks " + std::string(argv[0]).substr(2) + " > leakresult").c_str());
}
