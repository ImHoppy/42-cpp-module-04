#include "Animal.hpp"

#define MAIN_LOG(A) std::cout << "\033[3;35m" << A << "\033[0m" << std::endl

int main()
{

	MAIN_LOG("");
	MAIN_LOG("Create 100 Animal half dog and cat");
	{
		Animal	*animals[100];

		for (size_t i = 0; i < 100; i++)
		{
			if (i < 50)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}

		for (size_t i = 0; i < 100; i++)
		{
			delete animals[i];
		}
	}

	MAIN_LOG("");
	MAIN_LOG("Subjects test");
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		Animal copy = Animal(*i);

		delete j;
		delete i;
	}

	MAIN_LOG("");
	MAIN_LOG("Shallow copy test");
	{
		Cat original = Cat();
		Cat copy = Cat(original);

		MAIN_LOG("original cat Brain Address: \n" << original.getBrain() << std::endl <<
		"copy cat Brain Address: \n" << copy.getBrain());
	}
	return 0;
}