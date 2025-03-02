/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:30:56 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/27 18:05:11 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Конструкторы
ScavTrap::ScavTrap() : ClapTrap() {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
     std::cout << "🤖ScavTrap  HP " << hitPoints << " enp " << energyPoints << " ap " << attackDamage << std::endl;
     std::cout << "🤖ScavTrap " << name << " is created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
     std::cout << "🤖ScavTrap   HP " << hitPoints << " enp " << energyPoints << " ap " << attackDamage << std::endl;
     std::cout << "🤖ScavTrap " << name << " is created!" << std::endl;
}

// Конструктор копирования
ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
    hitPoints = src.hitPoints;
    energyPoints = src.energyPoints;
    attackDamage = src.attackDamage;
    std::cout << "🤖ScavTrap " << name << " is copied!" << std::endl;
}

// Оператор присваивания
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
    if (this != &rhs) {  // Защита от самоприсваивания
       // ClapTrap::operator=(rhs);  // Используем оператор присваивания родителя
        std::cout << "🤖ScavTrap Operator = is called par" << std::endl;
        hitPoints = rhs.hitPoints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    std::cout << "🤖ScavTrap " << name << " is assigned!" << std::endl;
    return *this;
}

// Деструктор
ScavTrap::~ScavTrap() {
    std::cout << "🤖ScavTrap " << name << " is destroyed!" << std::endl;
}

// Переопределение атаки
// Реализация attack() от ScavTrap
void ScavTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        std::cout << "🤖 ScavTrap " << name << " attacks " << target 
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "🤖⚠️ ScavTrap " << name << " has no energy or hit points left to attack!" << std::endl;
    }
}

// Новый метод охранника
void ScavTrap::guardGate() {
    std::cout << "🤖ScavTrap " << name << " is now in Gate Keeper mode!" << std::endl;
}
