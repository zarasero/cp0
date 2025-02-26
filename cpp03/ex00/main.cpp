#include "ClapTrap.hpp"

int main() {
    ClapTrap bot1("BotOne");
    ClapTrap bot2("BotTwo");

    std::cout << "\n--- Начало битвы! ---\n" << std::endl;

    // BotOne атакует BotTwo
    bot1.attack(bot2.getName());
    bot2.takeDamage(bot1.getAttackDamage());

    // BotTwo атакует BotOne
    bot2.attack(bot1.getName());
    bot1.takeDamage(bot2.getAttackDamage());

    // BotOne пытается восстановиться
    bot1.beRepaired(5);

    // BotTwo получает критический урон
    bot2.takeDamage(15);

    // BotTwo пытается атаковать после смерти
    bot2.attack(bot1.getName());

    // BotOne атакует, пока не кончится энергия
    for (int i = 0; i < 10; i++) {
        bot1.attack("DummyTarget");
    }

    std::cout << "\n--- Битва завершена! ---\n" << std::endl;
    // BotOne пытается атаковать без энергии
    bot1.attack("FinalTarget");

    std::cout << "\n--- Битва завершена! ---\n" << std::endl;

    return 0;
}

