#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
    // Конструкторы
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);

    // Деструктор
    ~ClapTrap();

    // Основные функции
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // Геттеры
    std::string getName();  // ✅ Добавили getName()
    int getHitPoints();
    int getEnergyPoints();
    int getAttackDamage();

    // Сеттеры
    void setHitPoints(int amount);
    void setEnergyPoints(int amount);
    void setAttackDamage(int amount);

private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
};

#endif // CLAPTRAP_HPP
