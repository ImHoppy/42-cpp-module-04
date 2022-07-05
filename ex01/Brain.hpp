#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define LOG(A) std::cout << "\033[3m" << A << "\033[0m" << std::endl
# define PRINT(A) std::cout << "\033[1m" << A << "\033[0m" << std::endl

# ifdef DEBUG_LOG
	#  define DEBUG(A) LOG(A)
# else
	#  define DEBUG(A)
# endif

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain &		operator=( Brain const & rhs );

	private:
		std::string	_ideas[100];

};

std::ostream &			operator<<( std::ostream & o, Brain const & i );

#endif /* BRAIN_HPP */