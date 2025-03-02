#include "FragTrap.hpp"
#include <iostream>

// 🔥 Конструкторы
FragTrap::FragTrap() : ClapTrap() {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "🎭 FragTrap HP: " << hitPoints 
              << " | ENP: " << energyPoints 
              << " | AP: " << attackDamage << std::endl;
    std::cout << "🎭 FragTrap " << name << " is created!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "🎭 FragTrap HP: " << hitPoints 
              << " | ENP: " << energyPoints 
              << " | AP: " << attackDamage << std::endl;
    std::cout << "🎭 FragTrap " << name << " is created!" << std::endl;
}

// 🎭 Конструктор копирования
FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
    hitPoints = src.hitPoints;
    energyPoints = src.energyPoints;
    attackDamage = src.attackDamage;
    std::cout << "🎭 FragTrap " << name << " is copied!" << std::endl;
}

// 📌 Оператор присваивания
FragTrap& FragTrap::operator=(const FragTrap& rhs) {
    if (this != &rhs) {  // Защита от самоприсваивания
        std::cout << "🎭 FragTrap Operator = is called" << std::endl;
        hitPoints = rhs.hitPoints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    std::cout << "🎭 FragTrap " << name << " is assigned!" << std::endl;
    return *this;
}

// 💀 Деструктор
FragTrap::~FragTrap() {
    std::cout << "🎭 FragTrap " << name << " is destroyed!" << std::endl;
}

// ✋ Новый метод
void FragTrap::highFiveGuys() {
    std::cout << "🎭 FragTrap " << name << " gives a High Five! ✋" << std::endl;
}
