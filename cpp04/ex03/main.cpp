#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

int		main() {

	AMateria*	ice = new Ice();
	// AMateria *i = ice.clone();
	// delete i;

	std::cout << std::endl << "###########################" << std::endl << std::endl;

	AMateria*	cure = new Cure();
	// AMateria *c = cure.clone();
	// delete c;

	std::cout << std::endl << "###########################" << std::endl << std::endl;

	Character ch("Kostas");
	std::cout << ch.getName() << std::endl;
	ch.equip(ice);
	ch.equip(cure);
	ch.use(0, ch);
	ch.use(1, ch);
	delete ice;
	delete cure;
	
	return 0;
}