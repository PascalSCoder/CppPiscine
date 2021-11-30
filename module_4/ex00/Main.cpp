#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// void Animals()
// {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* cat = new WrongCat();

// 	std::cout << cat->GetType() << " " << std::endl;

// 	cat->MakeSound();
// 	meta->MakeSound();

// 	delete meta;
// 	delete cat;
// }

void Animals()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->GetType() << " " << std::endl;
	std::cout << cat->GetType() << " " << std::endl;

	dog->MakeSound();
	cat->MakeSound();
	meta->MakeSound();

	delete meta;
	delete dog;
	delete cat;
}

int main(void)
{
	Animals();
}
