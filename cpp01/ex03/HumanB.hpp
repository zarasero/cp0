#include <iostream>

class HumanB
{
private:
    std::string name;
    Weapon* weapon;
public:
    HumanB(const std::string& name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon* weapon);
};

