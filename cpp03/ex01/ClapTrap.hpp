/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:15:31 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/27 15:27:36 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    virtual ~ClapTrap();

    // Основные функции
    virtual void attack(const std::string& target);
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

protected:  // Делаем защищенными, чтобы ScavTrap мог их менять
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
};

#endif // CLAPTRAP_HPP

