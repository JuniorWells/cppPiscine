#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int		main() {

	AMateria*	ice = new Ice();
	// AMateria *i = ice.clone();
	std::cout << std::endl << "###########################" << std::endl << std::endl;
	AMateria*	cure = new Cure();
	// AMateria *c = cure.clone();
	std::cout << std::endl << "###########################" << std::endl << std::endl;

	Character ch("Kostas");
	std::cout << ch.getName() << std::endl;
	ch.equip(ice);
	ch.equip(cure);
	ch.use(0, ch);
	ch.use(1, ch);
	ch.use(2, ch);
	ch.use(3, ch);
	ch.unequip(1);
	ch.use(1, ch);

	std::cout << std::endl << "###########################" << std::endl << std::endl;
	Character m;
	m = ch;

	m.use(0, ch);
	m.use(1, ch);
	m.use(2, ch);

	delete ice;
	delete cure;
	std::cout << std::endl << "###########################" << std::endl << std::endl;


	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	return 0;
}
