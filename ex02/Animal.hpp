#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

#define LOG(A) std::cout << "\033[3m" << A << "\033[0m" << std::endl
#define PRINT(A) std::cout << "\033[1m" << A << "\033[0m" << std::endl

#ifdef DEBUG_LOG
	#define DEBUG(A) LOG(A)
#else
	#define DEBUG(A)
#endif

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &			operator=( Animal const & rhs );
		virtual void		makeSound(void) const = 0;

		std::string const &	getType(void) const;
		void				setType(std::string & type);
	protected:
		std::string	_type;
};

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();

		Dog &			operator=( Dog const & rhs );
		void	makeSound(void) const;
		Brain const *	getBrain(void) const;

	private:
		Brain *_brain;

};

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		Cat &			operator=( Cat const & rhs );
		void	makeSound(void) const;
		Brain const *	getBrain(void) const;

	private:
		Brain *_brain;

};


#endif /* ANIMAL_HPP*/