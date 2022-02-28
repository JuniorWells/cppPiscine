#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main() {

	// AAnimal	*animals = new AAnimal();

	Cat *cat = new Cat();
	cat->makeSound();
	Dog *dog = new Dog();
	dog->makeSound();

	delete cat;
	delete dog;

	return 0;
}