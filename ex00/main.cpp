#include "Animal.hpp"
#include "WrongAnimal.hpp"

#define MAIN_LOG(A) std::cout << "\033[3;35m" << A << "\033[0m" << std::endl

int main()
{
	MAIN_LOG("");
	MAIN_LOG("Test constructor and destructor");
	{
		MAIN_LOG("Dog:");
		
		Dog a;
		Dog dogCopy(a);
		Dog b = a;
	}
	{
		MAIN_LOG("Cat:");

		Cat a;
		Cat catCopy(a);
		Cat b = a;
	}
	
	MAIN_LOG("");
	MAIN_LOG("Animal Class with virtual on makeSound");
	{
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
	}

	MAIN_LOG("");
	MAIN_LOG("WrongAnimal Class without virtual on makeSound !");
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the animal sound!
		meta->makeSound();
		
		delete meta;
		delete i;
	}
	return 0;
}
