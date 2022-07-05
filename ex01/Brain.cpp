#include "Brain.hpp"

/* ------------------------------- CONSTRUCTOR ------------------------------ */

Brain::Brain()
{
	LOG("Brain default constructor called.");
}

Brain::Brain( const Brain & src )
{
	LOG("Brain copy constructor called.");
	*this = src;
}


/* ------------------------------- DESTRUCTOR ------------------------------- */

Brain::~Brain()
{
	LOG("Destructor called.");
}


/* -------------------------------- OVERLOAD -------------------------------- */

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}


/* -------------------------------- METHODS --------------------------------- */


/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */