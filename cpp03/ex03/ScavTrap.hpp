
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	
	public:
			ScavTrap(); // CONSTRUCTOR
			ScavTrap(const ScavTrap& src); // COPY CONSTRUCTOR
			virtual ~ScavTrap(); // DESTRUCTOR
			ScavTrap(std::string name); // CONSTRUCTOR WITH NAME

			ScavTrap& operator=(const ScavTrap& rhs); // OVERLOAD
// CANONICAL FORM
			void	guardGate();
};


#endif