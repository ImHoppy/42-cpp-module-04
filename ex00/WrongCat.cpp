#include "WrongAnimal.hpp"

/* ------------------------------ CONSTRUCTOR ------------------------------- */

WrongCat::WrongCat(): WrongAnimal()
{
	this->_type = "WrongCat";
	LOG("WrongCat default constructor called.");
}

WrongCat::WrongCat( const WrongCat & src ): WrongAnimal()
{
	LOG("WrongCat copy constructor called.");
	*this = src; 
}

/* ------------------------------- DESTRUCTOR ------------------------------- */

WrongCat::~WrongCat()
{
	LOG("WrongCat destructor called.");
}

/* -------------------------------- OVERLOAD -------------------------------- */

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

/* -------------------------------- METHODS --------------------------------- */

void					WrongCat::makeSound(void) const
{
	LOG("WrongCat: " << "\033[0m" << "MEOW MEOW");
}

/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */