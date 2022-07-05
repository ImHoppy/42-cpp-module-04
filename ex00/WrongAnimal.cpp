#include "WrongAnimal.hpp"

/* ------------------------------ CONSTRUCTOR ------------------------------- */

WrongAnimal::WrongAnimal(): _type("")
{
	LOG("WrongAnimal default constructor called.");
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	LOG("WrongAnimal copy constructor called.");
	*this = src; 
}

/* ------------------------------- DESTRUCTOR ------------------------------- */

WrongAnimal::~WrongAnimal()
{
	LOG("WrongAnimal destructor called.");
}

/* -------------------------------- OVERLOAD -------------------------------- */

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

/* -------------------------------- METHODS --------------------------------- */

void					WrongAnimal::makeSound(void) const
{
	LOG("WrongAnimal can't produce sound.");
}

/* -------------------------------- ACCESSOR -------------------------------- */


std::string const &	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void				WrongAnimal::setType(std::string & type)
{
	this->_type = type;
}

/* ************************************************************************** */