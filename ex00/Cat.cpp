#include "Animal.hpp"

/* ------------------------------ CONSTRUCTOR ------------------------------- */

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	LOG("Cat default constructor called.");
}

Cat::Cat( const Cat & src ): Animal()
{
	LOG("Cat copy constructor called.");
	*this = src; 
}

/* ------------------------------- DESTRUCTOR ------------------------------- */

Cat::~Cat()
{
	LOG("Cat destructor called.");
}

/* -------------------------------- OVERLOAD -------------------------------- */

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

/* -------------------------------- METHODS --------------------------------- */

void					Cat::makeSound(void) const
{
	LOG("Cat: " << "\033[0m" << "MEOW MEOW");
}

/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */