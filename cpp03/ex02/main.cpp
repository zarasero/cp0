/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:15:05 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/27 18:06:17 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main() {
    std::cout << "\n--- Creating ClapTrap ---\n" << std::endl;
    ClapTrap bot1("Anna");
    
    std::cout << "\n--- Creating ScavTrap ---\n" << std::endl;
    ScavTrap bot2("Liza");
    
    std::cout << "\n--- Creating FragTrap ---\n" << std::endl;
    FragTrap bot3("Mike");
    
    std::cout << "\n--- Testing Attacks ---\n" << std::endl;
    bot1.attack("Enemy1");
    bot2.attack("Enemy2");
    bot3.attack("Enemy3");
    
    std::cout << "\n--- Testing Special Abilities ---\n" << std::endl;
    bot2.guardGate();
    bot3.highFiveGuys();
    
    std::cout << "\n--- Testing Copy Constructor ---\n" << std::endl;
    FragTrap bot4 = bot3;
    
    std::cout << "\n--- Testing Assignment Operator ---\n" << std::endl;
    ScavTrap bot5("Temporary"); // Создаем объект
    bot5 = bot2; // Теперь вызывается оператор присваивания
    
    std::cout << "\n--- Destroying Objects ---\n" << std::endl;
    return 0;
}


