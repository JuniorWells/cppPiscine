#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int		main() {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal *w = new WrongAnimal();
	const WrongAnimal *c = new WrongCat();

	std::cout << w->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	w->makeSound();
	c->makeSound();

	delete w;
	delete c;

	return 0;
}