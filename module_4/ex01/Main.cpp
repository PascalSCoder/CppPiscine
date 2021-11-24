#include <string>
#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMALCOUNT 4

int	main()
{
	Dog dog = Dog();
	Dog dogCopy = Dog(dog);

	dogCopy.MakeSound();
}

// int	main()
// {
// 	const Animal *animals[ANIMALCOUNT];

// 	for (size_t i = 0; i < ANIMALCOUNT; i++)
// 	{
// 		if (i % 2)
// 			animals[i] = new Dog();
// 		else
// 			animals[i] = new Cat();
// 	}

// 	for (size_t i = 0; i < ANIMALCOUNT; i++)
// 	{
// 		delete animals[i];
// 	}
// }

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;//should not create a leak
// 	delete i;
// }
