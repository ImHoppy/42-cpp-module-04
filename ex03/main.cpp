#include "AMateria.hpp"
#include "Character.hpp"
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

	test.equip(NULL);
	test.equip(spellIce);
	test.unequip(0);
	test.equip(spellIce);
	test.equip(spellCure);

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

	delete spellIce;
	delete spellCure;
}