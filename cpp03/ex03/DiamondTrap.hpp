
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
			DiamondTrap(); // CONSTRUCTOR
			DiamondTrap(std::string name);
			DiamondTrap(const DiamondTrap& src); // COPY CONSTRUCTOR
			~DiamondTrap(); // DESTRUCTOR
			
			DiamondTrap& operator=(const DiamondTrap& rhs); // SURCHARGE OPERATEUR =
			void	attack(const std::string& target);
			void	whoAmI();

			
	private:
			std::string _name;
};

#endif