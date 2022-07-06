#include "Animal.hpp"

/* ------------------------------ CONSTRUCTOR ------------------------------- */

Cat::Cat(): Animal()
{
	LOG("Cat default constructor called.");
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat( const Cat & src ): Animal()
{
	LOG("Cat copy constructor called.");
	this->_brain = new Brain();
	*this = src;
}

/* ------------------------------- DESTRUCTOR ------------------------------- */

Cat::~Cat()
{
	delete	this->_brain;
	LOG("Cat destructor called.");
}

/* -------------------------------- OVERLOAD -------------------------------- */

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
		*(this->_brain) = *(rhs._brain);
	}
	return *this;
}

/* -------------------------------- METHODS --------------------------------- */

void					Cat::makeSound(void) const
{
	LOG("Cat: " << "\033[0m" << "MEOW MEOW");
}

/* -------------------------------- ACCESSOR -------------------------------- */

Brain const *	Cat::getBrain(void) const
{
	return (this->_brain);
}

/* ************************************************************************** */