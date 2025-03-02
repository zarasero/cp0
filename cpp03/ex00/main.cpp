/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:15:05 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/27 14:48:48 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap bot1("BotOne");
    std::cout << "\n--------------\n" << std::endl;
    ClapTrap bot2("BotTwo");
    std::cout << "\n--------------\n" << std::endl;
    std::cout << "\n--- Start! ---\n" << std::endl;

    // BotOne атакует BotTwo
    bot1.attack(bot2.getName());
    std::cout << "\n--------------\n" << std::endl;
    bot2.takeDamage(bot1.getAttackDamage());
    std::cout << "\n--------------\n" << std::endl;
    // BotTwo атакует BotOne
    bot2.attack(bot1.getName());
    std::cout << "\n--------------\n" << std::endl;
    bot1.takeDamage(bot2.getAttackDamage());
    std::cout << "\n--------------\n" << std::endl;
    // BotOne пытается восстановиться
    bot1.beRepaired(5);
    std::cout << "\n--------------\n" << std::endl;
    // BotTwo получает критический урон
    bot2.takeDamage(15);
    std::cout << "\n--------------\n" << std::endl;
    // BotTwo пытается атаковать после смерти
    bot2.attack(bot1.getName());
    std::cout << "\n--------------\n" << std::endl;

    // BotOne атакует, пока не кончится энергия
    for (int i = 0; i < 10; i++) {
        bot1.attack("DummyTarget");
    }
    std::cout << "\n--- Finish! ---\n" << std::endl;
    // BotOne пытается атаковать без энергии
    bot1.attack("FinalTarget");
    std::cout << "\n--- Finish! ---\n" << std::endl;
    return 0;
}


