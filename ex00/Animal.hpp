#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

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
		~Animal();

		Animal &			operator=( Animal const & rhs );
		virtual void		makeSound(void) const;

		const std::string &	getType(void) const;
		void				setType(std::string const & type);
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
		virtual void	makeSound(void);

	private:

};

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		Cat &			operator=( Cat const & rhs );
		virtual void	makeSound(void);

	private:

};


#endif /* ANIMAL_H */