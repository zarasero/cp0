#include "DiamondTrap.hpp"
#include <iostream>

// Конструктор по умолчанию
DiamondTrap::DiamondTrap()
    : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), name("Default") {
    this->hitPoints = FragTrap::hitPoints;  // HP от FragTrap
    this->energyPoints = ScavTrap::energyPoints;  // EP от ScavTrap
    this->attackDamage = FragTrap::attackDamage;  // AP от FragTrap

    std::cout << "💎 Diamond " << this->name << " is created!" << std::endl;
    std::cout << "💎 Diamond HP: " << hitPoints 
    << " | ENP: " << energyPoints 
    << " | AP: " << attackDamage << std::endl;
}

// Конструктор с параметром
DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
    
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;

    std::cout << "💎 DiamondTrap " << this->name
              << " is created with ClapTrap name " << ClapTrap::name << "!" 
              << std::endl;
              std::cout << "💎 DiamondTrap HP: " << hitPoints 
              << " | ENP: " << energyPoints 
              << " | AP: " << attackDamage << std::endl;
}

// Конструктор копирования
DiamondTrap::DiamondTrap(const DiamondTrap& other) 
    : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name) {
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << "💎 DiamondTrap " << this->name << " is copied!" << std::endl;
    std::cout << "💎 DiamondTrap HP: " << hitPoints 
    << " | ENP: " << energyPoints 
    << " | AP: " << attackDamage << std::endl;
}

// Оператор присваивания
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    std::cout << "💎 DiamondTrap Operator = is called" << std::endl;
    if (this != &other) {
        //ClapTrap::operator=(other);
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "💎 DiamondTrap " << this->name << " is assigned!" << std::endl;
    return *this;
}

// Деструктор
DiamondTrap::~DiamondTrap() {
    std::cout << "💎 DiamondTrap " << this->name << " is destroyed!" << std::endl;
}

// Новый метод
void DiamondTrap::whoAmI() {
    std::cout << "💎 I am " << this->name
              << " and my ClapTrap name is " << ClapTrap::name << "!" 
              << std::endl;
}
