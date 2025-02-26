
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap(); // CONSTRUCTOR
			ScavTrap(const ScavTrap& src); // COPY CONSTRUCTOR
			virtual ~ScavTrap(); // DESTRUCTOR
			ScavTrap& operator=(const ScavTrap& rhs);
			ScavTrap(std::string name);
			void	guardGate();
};


#endif