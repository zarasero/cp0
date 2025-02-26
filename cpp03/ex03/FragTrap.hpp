
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{
	// CANONICAL FORM
	public:
			FragTrap(); // Constructor
			FragTrap(std::string name);
			FragTrap(const FragTrap& src); // Copy constructor
			FragTrap& operator=(const FragTrap& rhs);
			
			virtual ~FragTrap(); // Destructor
			
			void	highFivesGuys(void);

};




#endif