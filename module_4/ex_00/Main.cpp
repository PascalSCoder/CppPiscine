#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
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
