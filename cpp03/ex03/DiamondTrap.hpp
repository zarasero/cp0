#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string name;  // Собственное имя DiamondTrap

public:
    // Конструкторы и деструктор
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& other);
    DiamondTrap& operator=(const DiamondTrap& other);
    ~DiamondTrap();

    // Новый метод
    void whoAmI();

    // Метод атаки (берём от ScavTrap)
    using ScavTrap::attack;
};

#endif
