#include <string>
#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMALCOUNT 4

// void Animals()
// {
// 	const Animal aminol;
// 	aminol.MakeSound();
// }

// void	Animals()
// {
// 	const Animal *animals[ANIMALCOUNT];

// 	std::cout << "init animals:" << std::endl;
// 	for (size_t i = 0; i < ANIMALCOUNT; i++)
// 	{
// 		if (i % 2)
// 			animals[i] = new Cat();
// 		else
// 			animals[i] = new Dog();
// 	}
// 	std::cout << std::endl;

// 	Dog *dog = (Dog *)animals[0];
// 	dog->AddIdea("* looks up * Is that a stranger?");
// 	dog->AddIdea("Should I bark at it? * starts making noise *");
// 	dog->AddIdea("Oh I hear something falling, maybe that's food! * runs into the direction of the falling object *");
// 	dog->AddIdea("Oh.. it's just a leaf... * looks betrayed *");
// 	dog->ShareIdeas();

// 	Dog *dogCopy = new Dog(*dog);
// 	dogCopy->ShareIdeas();
// 	std::cout << "Deleting copy" << std::endl;
// 	delete dogCopy;

// 	for (size_t i = 0; i < ANIMALCOUNT; i++)
// 	{
// 		delete animals[i];
// 	}
// }

void Animals()
{
	Dog dog;
	Dog dog2 = dog;

	std::cout << "done" << std::endl;
}

int main(int, char **argv)
{
	Animals();
	system(std::string("leaks " + std::string(argv[0]).substr(2) + " > leakresult").c_str());
}
