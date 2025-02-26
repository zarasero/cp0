
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(int argc, char **av)
{
    // Игнорируем входные аргументы, чтобы избежать предупреждений компилятора
    (void)argc, (void)av;

    // Создаём объекты разных классов, включая производный DiamondTrap
    DiamondTrap dt("Diamond"); // DiamondTrap с именем "Diamond"
    ClapTrap ct("Clap");       // ClapTrap с именем "Clap"
    ScavTrap st("Scav");       // ScavTrap с именем "Scav"

    std::cout << "\n\n------------------------CONSTRUCTIONS------------------------\n\n";

    // DiamondTrap атакует ClapTrap
    dt.attack("Clap");         // DiamondTrap вызывает метод атаки
    ct.takeDamage(dt.getAD()); // ClapTrap получает урон от DiamondTrap

    // Ещё одна атака от DiamondTrap на ClapTrap
    dt.attack("Clap");
    ct.takeDamage(dt.getAD());

    // DiamondTrap использует уникальный метод whoAmI
    dt.whoAmI();

    // ScavTrap атакует DiamondTrap
    st.attack("Diamond");
    dt.takeDamage(st.getAD()); // DiamondTrap получает урон от ScavTrap

    // ScavTrap атакует ClapTrap
    st.attack("Clap");
    ct.takeDamage(dt.getAD()); // ClapTrap получает урон от ScavTrap

    std::cout << "\n\n------------------------DESTRUCTIONS------------------------\n\n";

    // Здесь объекты разрушаются автоматически (при выходе из области видимости)
    return 0;
}

/*Ваш код создаёт объект класса DiamondTrap и другие объекты (`ClapTrapClapTrap, ScavTrap), а затем выполняет 
их взаимодействие, включая атаки, использование уникальных методов и окончательное уничтожение объектов. Добавим комментарии, чтобы объяснить каждую строку:*/