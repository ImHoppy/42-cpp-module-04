#include "Animal.hpp"

/* ------------------------------ CONSTRUCTOR ------------------------------- */

Dog::Dog(): Animal()
{
	LOG("Dog default constructor called.");
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( const Dog & src ): Animal()
{
	LOG("Dog copy constructor called.");
	this->_brain = new Brain();
	*this = src; 
}

/* ------------------------------- DESTRUCTOR ------------------------------- */

Dog::~Dog()
{
	delete	this->_brain;
	LOG("Dog destructor called.");
}


/* -------------------------------- OVERLOAD -------------------------------- */

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
		this->_brain = rhs._brain;
	}
	return *this;
}

/* -------------------------------- METHODS --------------------------------- */

void					Dog::makeSound(void) const
{
	LOG("Dog: " << "\033[0m" << "WOOF WOOF");
}

/* -------------------------------- ACCESSOR -------------------------------- */

Brain const *	Dog::getBrain(void) const
{
	return (this->_brain);
}

/* ************************************************************************** */