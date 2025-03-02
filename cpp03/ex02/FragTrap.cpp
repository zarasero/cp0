#include "FragTrap.hpp"

// Конструкторы
FragTrap::FragTrap() : ClapTrap() {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
     std::cout << "🎭 FragTrap  HP " << hitPoints << " enp " << energyPoints << " ap " << attackDamage << std::endl;
     std::cout << "🎭 FragTrap " << name << " is created!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
     std::cout << "🎭 FragTrap  HP " << hitPoints << " enp " << energyPoints << " ap " << attackDamage << std::endl;
     std::cout << "🎭 FragTrap " << name << " is created!" << std::endl;
}

// Конструктор копирования
FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
    hitPoints = src.hitPoints;
    energyPoints = src.energyPoints;
    attackDamage = src.attackDamage;
    std::cout << "🎭 FragTrap " << name << " is copied!" << std::endl;
}

// Оператор присваивания
FragTrap& FragTrap::operator=(const FragTrap& rhs) {
    if (this != &rhs) {  // Защита от самоприсваивания
       // ClapTrap::operator=(rhs);  // Используем оператор присваивания родителя
        std::cout << "🎭 FragTrap Operator = is called par" << std::endl;
        hitPoints = rhs.hitPoints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    std::cout << "🎭 FragTrap " << name << " is assigned!" << std::endl;
    return *this;
}

// Деструктор
FragTrap::~FragTrap() {
    std::cout << "🎭 FragTrap " << name << " is destroyed!" << std::endl;
}


// Новый метод охранника
void FragTrap::highFiveGuys() {
    std::cout << "🎭 FragTrap " << name << " High Fives Guys!" << std::endl;
}
