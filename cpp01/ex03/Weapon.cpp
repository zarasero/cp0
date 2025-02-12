#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon)
{
    this->weapon = weapon;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}


const std::string &Weapon::getType() const
{
    return this->weapon;
}

void Weapon::setType(const std::string &weapon)
{
    this->weapon = weapon;
}