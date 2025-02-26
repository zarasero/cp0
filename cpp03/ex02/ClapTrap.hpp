
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iomanip>
#include <iostream>
#include <iomanip>

class ClapTrap
{
	public:
			ClapTrap(); // CONSTRUCTOR
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& src); // COPY CONSTRUCTOR
			~ClapTrap(); // DESTRUCTOR
			ClapTrap&	operator=(const ClapTrap& rhs);

			//SETTERS / GETTERS
			int		getHP(void) const;
			void	setHP(int hp);

			int		getEP(void) const;
			void	setEP(int hp);		
			
			int		getAD(void) const;
			void	setAD(int ad);

			std::string getName(void) const;
			void setName(std::string name);
			
			// MEMBER FUNCTIONS
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

	protected:
			std::string _name;
			int	_hp;
			int	_ep;
			int	_ad;
};

#endif
