#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main() {

	Brain b;

	std::string s[100];
	const std::string *newS;
	s[0] = "kostas";
	s[1] = "thanos";

	b.setIdeas(s);
	newS = b.getIdeas();

	for (int i = 0; i < 2; i ++) {
		std::cout << newS[i] << std::endl;
	}
	std::cout << std::endl << "######################" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	return 0;
}