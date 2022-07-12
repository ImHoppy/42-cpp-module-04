#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource() : tempPtr(NULL)
{
}

MateriaSource::MateriaSource( const MateriaSource & src ) : tempPtr(NULL)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	if (tempPtr != NULL)
		delete tempPtr;
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		this->tempPtr = rhs.tempPtr;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria( AMateria * src )
{
	if (tempPtr != NULL)
		delete tempPtr;
	tempPtr = src;
}

AMateria *  MateriaSource::createMateria( std::string const & type )
{
	if (type == "cure")
		return (new Cure());
	else
		return (new Ice());

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */