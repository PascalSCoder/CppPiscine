#include <string>
#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMALCOUNT 4

int	main()
{
	const Animal *animals[ANIMALCOUNT];

	std::cout << "init animals:" << std::endl;
	for (size_t i = 0; i < ANIMALCOUNT; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << std::endl;

	Dog *dog = (Dog *)animals[0];
	dog->AddIdea("* looks up * Is that a stranger?");
	dog->AddIdea("Should I bark at it? * starts making noise *");
	dog->AddIdea("Oh I hear something falling, maybe that's food! * runs into the direction of the falling object *");
	dog->AddIdea("Oh.. it's just a leaf... * looks betrayed *");
	dog->ShareIdeas();

	Dog *dogCopy = new Dog(*dog);
	dogCopy->ShareIdeas();
	std::cout << "Deleting copy" << std::endl;
	delete dogCopy;

	for (size_t i = 0; i < ANIMALCOUNT; i++)
	{
		delete animals[i];
	}

	const Animal aminol;
	aminol.MakeSound();
}

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;//should not create a leak
// 	delete i;
// }
