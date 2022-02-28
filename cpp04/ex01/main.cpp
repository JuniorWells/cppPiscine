#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main() {

	//Brain b;

	//std::string s[100];
	//const std::string *newS;
	//s[0] = "kostas";
	//s[1] = "thanos";

	//b.setIdeas(s);
	//newS = b.getIdeas();

	//for (int i = 0; i < 2; i ++) {
	//	std::cout << newS[i] << std::endl;
	//}
	//std::cout << std::endl << "######################" << std::endl;

	//const Animal* j = new Dog();
	//const Animal* i = new Cat();

	//delete j;
	//delete i;
	//char c;
	//scanf("%c", &c);

	Animal	*animals[10];
	for (int i = 0; i < 10; i++){
		if (i < 5) { animals[i] = new Dog(); }
		else {animals[i] = new Cat();}
	}

	for (int i = 0; i < 10; i ++) {
		std::cout << animals[i]->getType() << std::endl;
		delete animals[i];
	}

	return 0;
}