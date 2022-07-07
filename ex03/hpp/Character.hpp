#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{

	public:

		Character();
		Character( std::string const & name );
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		std::string const & getName() const;
		void				use( int idx, ICharacter & target );

	protected:
		AMateria *	_inventory[4];
		std::string	_name;

};

#endif /* CHARACTER_HPP */