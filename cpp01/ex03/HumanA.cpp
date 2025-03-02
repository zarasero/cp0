#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) 
    : name(name), weapon(weapon) {}  // ✅ Правильная инициализация

HumanA::~HumanA() {}

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
