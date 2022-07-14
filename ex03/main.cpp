#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#define MAIN_LOG(A) std::cout << "\033[3;35m" << A << "\033[0m" << std::endl

int main(void)
{
	Character	test("Bob");
	Character	michel("Michel");
	Character	undefined;
	AMateria *	spellIce = new Ice();
	AMateria *	spellCure = new Cure();

	MAIN_LOG("Copy constructor tests.");
	michel.equip(spellCure);
	Character copy(michel);
	MAIN_LOG("  - copy call spell");
	copy.equip(spellIce);
	copy.use(0, test);
	copy.use(1, test);
	MAIN_LOG("  - michel call spell");

	michel.use(0, copy);
	michel.use(1, copy);
	michel.unequip(0);

	MAIN_LOG("Equipe for Main tests.");
	test.equip(NULL);
	test.equip(spellIce);
	test.unequip(0);
	test.equip(spellIce);
	test.equip(spellCure);
	test.equip(spellIce);
	test.equip(spellCure);
	test.equip(spellCure);
	test.use(3, michel);
	test.unequip(2);
	test.unequip(3);

	MAIN_LOG("Tests error.");
	test.use(1, undefined);
	test.use(3, undefined);
	test.use(5, undefined);
	test.equip(NULL);
	test.unequip(-1);
	test.unequip(5);
	MAIN_LOG("Use all spells and unequip.");
	for (size_t i = 0; i < 5; i++)
	{
		test.use(i, michel);
		test.unequip(i);
	}
	MAIN_LOG("Use all spells.");
	for (size_t i = 0; i < 5; i++)
	{
		test.use(i, michel);
	}

	// delete spellIce;
	// delete spellCure;

	MAIN_LOG("Subjects main");
	{
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
	}
}