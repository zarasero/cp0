#include "Weapon.hpp"
#include <iostream>


class HumanA
{
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA();
    void attack();
};

