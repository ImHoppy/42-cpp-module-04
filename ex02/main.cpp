#include "Animal.hpp"

#define MAIN_LOG(A) std::cout << "\033[3;35m" << A << "\033[0m" << std::endl

int main()
{

	#ifdef DEBUG_LOG
	{
		MAIN_LOG("Try to create abstract class.");
		Animal* error = new Animal();

		delete error;
	}
	#endif

	{
		MAIN_LOG("Create cat class with abstract class.");
		Animal* cat = new Cat();
		cat->makeSound();
		delete cat;
	}
	return 0;
}