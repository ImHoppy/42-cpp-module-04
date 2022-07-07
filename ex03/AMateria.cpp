#include "AMateria.hpp"


/* ------------------------------- CONSTRUCTOR ------------------------------ */

AMateria::AMateria() : _type("")
{
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
}

AMateria::AMateria(std::string const & type) : _type(type) {}


/* ------------------------------- DESTRUCTOR ------------------------------- */

AMateria::~AMateria()
{
}


/* -------------------------------- OVERLOAD -------------------------------- */

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & i )
{
	o << "type: " << i.getType();
	return o;
}


/* -------------------------------- METHODS --------------------------------- */

void	AMateria::use( ICharacter & target )
{
	std::cout << "Materia has no effect on " << target.getName() << "." << std::endl;
}


/* -------------------------------- ACCESSOR -------------------------------- */

std::string const & AMateria::getType() const {
	return (this->_type);
}

/* ************************************************************************** */