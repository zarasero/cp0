#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string weapon;
public:
Weapon(const std::string &weapon);
Weapon();
~Weapon();
const std::string &getType() const;
void setType(const std::string &weapon);
};

#endif
