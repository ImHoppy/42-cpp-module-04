#include "Character.hpp"

/* ------------------------------- CONSTRUCTOR ------------------------------ */

Character::Character()
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = nullptr;
	}
	
}


Character::Character( const Character & src ) : Character(), _name(name)
{
}

Character::Character( const Character & src )
{
	*this = src;
}


/* ------------------------------- DESTRUCTOR ------------------------------- */

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != nullptr)
			delete _inventory[i];
	}
}


/* -------------------------------- OVERLOAD -------------------------------- */

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i] != nullptr)
				this->_inventory[i] = rhs._inventory[i];
		}
	}
	return *this;
}


/* -------------------------------- METHODS --------------------------------- */

std::string const & Character::getName() const
{
	return (_name);
}

void	Character::use( int idx, ICharacter & target )
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx] == nullptr)
		return ;
	
	this->_inventory[idx]->use(target);
}

/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */