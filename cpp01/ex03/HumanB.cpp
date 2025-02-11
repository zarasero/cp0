#include "HumanB.hpp"

HumanB::HumanB(const std::string& name){
    this->name = name;
    this->weapon = NULL;
};

void HumanB::setWeapon(Weapon* weapon) {
    this->weapon = &weapon;
}

HumanB::~HumanB(){};

void HumanB::attack(){
    if (this->weapon)
        std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;
    else
    std::cout << name << " has no weapon "  << std::endl;
    };