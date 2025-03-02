/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:15:17 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/27 18:05:24 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

// ⚙️ Конструкторы
ClapTrap::ClapTrap() : name("NoName"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "⚙️ClapTrap HP: " << hitPoints 
              << " | ENP: " << energyPoints 
              << " | AP: " << attackDamage << std::endl;
    std::cout << "⚙️ ClapTrap " << name << " is created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "⚙️ HP: " << hitPoints 
              << " | ENP: " << energyPoints 
              << " | AP: " << attackDamage << std::endl;
    std::cout << "⚙️ Constructor " << name << " ClapTrap is created!" << std::endl;
}

// ⚙️ Конструктор копирования
ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "⚙️ Copy constructor called" << std::endl;
    *this = other;
    std::cout << "⚙️ Copy constructor finish " << name << std::endl;
}

// ⚙️ Оператор присваивания
ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "⚙️ Operator = is called" << std::endl;
    if (this != &other) {  
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

// ⚙️ Виртуальный деструктор
ClapTrap::~ClapTrap() {
    std::cout << "⚙️ ClapTrap " << name << " is destroyed!" << std::endl;
}

// ⚙️ Геттеры
int ClapTrap::getHitPoints() { return hitPoints; }
int ClapTrap::getEnergyPoints() { return energyPoints; }
int ClapTrap::getAttackDamage() { return attackDamage; }
std::string ClapTrap::getName() { return name; }

// ⚙️ Сеттеры
void ClapTrap::setHitPoints(int amount) { hitPoints = amount; }
void ClapTrap::setEnergyPoints(int amount) { energyPoints = amount; }
void ClapTrap::setAttackDamage(int amount) { attackDamage = amount; }

// ⚙️ Функция атаки
void ClapTrap::attack(const std::string& target) {
    if (hitPoints > 0) {
        if (energyPoints > 0) {
            energyPoints--;
            std::cout << "⚙️ ClapTrap " << name << " attacks " << target
                      << ", causing " << attackDamage << " points of damage!" << std::endl;
            std::cout << "⚙️ Energy points left: " << energyPoints << std::endl;
        } else {
            std::cout << "⚙️ ClapTrap " << name << " has no energy to attack!" << std::endl;
        }
    } else {
        std::cout << "⚙️ ClapTrap " << name << " can't attack, it is dead!" << std::endl;
    }
}

// ⚙️ Функция получения урона
void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        hitPoints -= amount;
        std::cout << "⚙️ ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
        if (hitPoints <= 0) {
            std::cout << "⚙️ ClapTrap " << name << " is dead!" << std::endl;
        }
    } else {
        std::cout << "⚙️ ClapTrap " << name << " is already dead!" << std::endl;
    }
}

// ⚙️ Функция восстановления
void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0 && hitPoints > 0) {
        hitPoints += amount;
        energyPoints--;
        std::cout << "⚙️ ClapTrap " << name << " repairs itself for " << amount 
                  << " HP! Remaining HP: " << hitPoints << ", Energy: " << energyPoints << std::endl;
    } else {
        std::cout << "⚙️ ClapTrap " << name << " cannot repair due to no energy or being out of health!" << std::endl;
    }
}
