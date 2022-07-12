#include "Character.hpp"

/* ------------------------------- CONSTRUCTOR ------------------------------ */

Character::Character() : _name("undefined")
{
	Init();
}


Character::Character( std::string const & name ) : _name(name)
{
	Init();
}

Character::Character( const Character & src )
{
	*this = src;
}

void	Character::Init()
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
}
/*
	TODO:
	Ainsi, lors d’une copie, les Materias du Character doivent être
		delete avant que les nouvelles ne les remplacent dans l’inventaire. Bien évidemment, les
		Materias doivent aussi être supprimées à la destruction d’un Character.
*/

/* ------------------------------- DESTRUCTOR ------------------------------- */

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
		_inventory[i] = NULL;
	}
}


/* -------------------------------- OVERLOAD -------------------------------- */

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			// if (_inventory[i] != NULL)
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
	if (this->_inventory[idx] == NULL)
		return ;

	this->_inventory[idx]->use(target);
}

void	Character::equip( AMateria * m )
{
	if (m == NULL)
		return ;

	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx > 3)
		return ;

	this->_inventory[idx] = NULL;
}


/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */