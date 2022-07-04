#include "Animal.hpp"

/* ------------------------------ CONSTRUCTOR ------------------------------- */

Dog::Dog(): Animal(), _type("Dog")
{
	LOG("Dog default constructor called.");
}

Dog::Dog( const Dog & src ): Animal()
{
	LOG("Dog copy constructor called.");
	*this = src; 
}

/* ------------------------------- DESTRUCTOR ------------------------------- */

Dog::~Dog()
{
	LOG("Dog destructor called.");
}


/* -------------------------------- OVERLOAD -------------------------------- */

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

/* -------------------------------- METHODS --------------------------------- */

void					Dog::makeSound(void)
{
	LOG("Dog: " << "\033[0m" << "WOOF WOOF");
}

/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */