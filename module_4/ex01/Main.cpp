#include <string>
#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMALCOUNT 4

// int	main()
// {
// 	Dog dog = Dog();
// 	Dog dogCopy = Dog(dog);

// 	dogCopy.MakeSound();
// }

int	main()
{
	const Animal *animals[ANIMALCOUNT];

	for (size_t i = 0; i < ANIMALCOUNT; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	((Dog *)animals[0])->GetBrain().AddIdea("Is that a stranger?");
	((Dog *)animals[0])->GetBrain().AddIdea("Should I bark at it?");
	((Dog *)animals[0])->GetBrain().AddIdea("Oh I hear something fall, maybe that's food!");
	((Dog *)animals[0])->GetBrain().AddIdea("Oh.. it's just a leaf... *sad*");

	std::cout << ((Dog *)animals[0])->GetBrain().GetIdea(0) << std::endl;
	std::cout << ((Dog *)animals[0])->GetBrain().GetIdea(1) << std::endl;
	std::cout << ((Dog *)animals[0])->GetBrain().GetIdea(2) << std::endl;
	std::cout << ((Dog *)animals[0])->GetBrain().GetIdea(3) << std::endl;

	Dog *dog = new Dog(*((Dog *)animals[0]));
	dog->MakeSound();
	std::cout << dog->GetBrain().GetIdea(0) << std::endl;
	std::cout << dog->GetBrain().GetIdea(0) << std::endl;
	std::cout << dog->GetBrain().GetIdea(0) << std::endl;
	std::cout << dog->GetBrain().GetIdea(0) << std::endl;
	delete dog;

	for (size_t i = 0; i < ANIMALCOUNT; i++)
	{
		delete animals[i];
	}
}

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;//should not create a leak
// 	delete i;
// }
