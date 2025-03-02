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

#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    std::cout << "\n--- Creating DiamondTrap ---\n" << std::endl;
    DiamondTrap dt("Victor");

    std::cout << "\n--- Testing Attributes ---\n" << std::endl;
    dt.attack("Enemy");  // Должен использовать метод ScavTrap
    dt.whoAmI();  // Должен вывести имя DiamondTrap и ClapTrap

    std::cout << "\n--- Testing Copy Constructor ---\n" << std::endl;
    DiamondTrap dt2 = dt;

    std::cout << "\n--- Testing Assignment Operator ---\n" << std::endl;
    DiamondTrap dt3;
    dt3 = dt2;

    std::cout << "\n--- Destroying Objects ---\n" << std::endl;
    return 0;
}



/*В этом задании вам нужно создать DiamondTrap, который будет:
✔ наследоваться от ScavTrap и FragTrap одновременно
✔ Имя DiamondTrap должно совпадать с полем name из ClapTrap
✔ Атрибуты берутся так:

hitPoints → от FragTrap
energyPoints → от ScavTrap
attackDamage → от FragTrap
✔ Метод attack() должен использоваться от ScavTrap
✔ Добавить новый метод whoAmI(), который выводит name и ClapTrap::name*/