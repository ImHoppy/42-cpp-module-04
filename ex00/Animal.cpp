#include "Animal.hpp"

/* ------------------------------ CONSTRUCTOR ------------------------------- */

Animal::Animal(): _type("")
{
	LOG("Animal default constructor called.");
}

Animal::Animal( const Animal & src )
{
	LOG("Animal copy constructor called.");
	*this = src; 
}

/* ------------------------------- DESTRUCTOR ------------------------------- */

Animal::~Animal()
{
	LOG("Animal destructor called.");
}

/* -------------------------------- OVERLOAD -------------------------------- */

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

/* -------------------------------- METHODS --------------------------------- */

void					Animal::makeSound(void)
{
	LOG("Animal can't produce sound.");
}

/* -------------------------------- ACCESSOR -------------------------------- */


const std::string &	Animal::getType(void)
{
	return (this->_type);
}

void				Animal::setType(std::string const & type);
{
	this->_type = type;
}

/* ************************************************************************** */